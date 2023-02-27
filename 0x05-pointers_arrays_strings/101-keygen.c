#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 15


/**
 *
 * main - Entry point
 * Description: generates random passwords for 101-crackme
 * Return: void
 */

int main(void)
{
	int i;
	char password[PASSWORD_LENGTH + 1];
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	const size_t charset_length = sizeof(charset) - 1;
	
	srand(time(NULL));  /* Seed the random number generator with the current time */
	
	/* Generate a random password */
	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = charset[rand() % charset_length];
	}
	password[PASSWORD_LENGTH] = '\0';
	printf("Random password: %s\n", password);
	return (0);
}
