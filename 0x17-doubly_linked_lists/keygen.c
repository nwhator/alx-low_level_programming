#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * generate_key - Generates a key based on the given username
 * @username: The username
 * @keygen: The generated key
 *
 * Return: 0 on success
 */

int generate_key(char *username, char *keygen)
{
	int len = 0, ch = 0, vch = 0;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850
	};
	while (username[len])
		len++;
	keygen[0] = ((char *)alph)[(len ^ 59) & 63];
	ch = vch = 0;
	while (vch < len)
	{
		ch += username[vch];
		vch++;
	}
	keygen[1] = ((char *)alph)[(ch ^ 79) & 63];
	ch = 1;
	vch = 0;
	while (vch < len)
	{
		ch *= username[vch];
		vch++;
	}
	keygen[2] = ((char *)alph)[(ch ^ 85) & 63];
	srand(username[0] ^ 14);
	keygen[3] = ((char *)alph)[rand() & 63];
	keygen[4] = ((char *)alph)[(username[0] * username[0] ^ 239) & 63];
	srand(username[0]);
	keygen[5] = ((char *)alph)[rand() & 63];
	keygen[6] = '\0';
	return (0);
}
/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: An array of command line argument strings
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	char keygen[7];

	if (argc != 2)
	{
		printf("Usage: %s username\n", argv[0]);
		return (1);
	}
	generate_key(argv[1], keygen);
	printf("%s\n", keygen);

	return (0);
}
