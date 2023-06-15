#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * f4 - finds the biggest number
 * @usrn: username
 * @len: length of username
 *
 * Return: the biggest number
 */
int f4(char *usrn, int len)
{
	int ch;
	int vch;
	unsigned int rand_num;

	ch = *usrn;
	vch = 0;
	/* Find the biggest ASCII value from the username */
	while (vch < len)
	{
		if (ch < usrn[vch])
			ch = usrn[vch];
		vch += 1;
	}
	/* Generate a random number using the biggest ASCII value */
	srand(ch ^ 14);
	rand_num = rand();

	return (rand_num & 63);
}

/**
 * f5 - Multiply each character's ASCII value in the username.
 * @usrn: username
 * @len: length of username
 *
 * Return: Multiplied ASCII value.
 */
int f5(char *usrn, int len)
{
	int ch;
	int vch;

	ch = vch = 0;
	/* Multiply each character's ASCII value in the username */
	while (vch < len)
	{
		ch = ch + usrn[vch] * usrn[vch];
		vch += 1;
	}

	return (((unsigned int)ch ^ 239) & 63);
}

/**
 * f6 - Generate a random character based on the username.
 * @usrn: Username
 *
 * Return: Random character
 */
int f6(char *usrn)
{
	int ch;
	int vch;

	ch = vch = 0;
	/* Generate a random character based on the username */
	while (vch < *usrn)
	{
		ch = rand();
		vch += 1;
	}

	return (((unsigned int)ch ^ 229) & 63);
}

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char keygen[7];
	int len, ch, vch;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	/* Calculate the length of the username */
	for (len = 0; argv[1][len]; len++)
		;
	/* f1: Calculate the first character of the key */
	keygen[0] = ((char *)alph)[(len ^ 59) & 63];
	/* f2: Calculate the second character of the key */
	ch = vch = 0;
	while (vch < len)
	{
		ch = ch + argv[1][vch];
		vch = vch + 1;
	}
	keygen[1] = ((char *)alph)[(ch ^ 79) & 63];
	/* f3: Calculate the third character of the key */
	ch = 1;
	vch = 0;
	while (vch < len)
	{
		ch = argv[1][vch] * ch;
		vch = vch + 1;
	}
	keygen[2] = ((char *)alph)[(ch ^ 85) & 63];
	/* f4: Calculate the fourth character of the key */
	keygen[3] = ((char *)alph)[f4(argv[1], len)];
	/* f5: Calculate the fifth character of the key*/
	keygen[4] = ((char *)alph)[f5(argv[1], len)];
	/* f6: Calculate the sixth character of the key */
	keygen[5] = ((char *)alph)[f6(argv[1])];
	keygen[6] = '\0';
	for (ch = 0; keygen[ch]; ch++)
		printf("%c", keygen[ch]);
	return (0);
}
