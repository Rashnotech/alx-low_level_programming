#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that generates random valid password
 *
 * Return: an integer value of 0
 */
#define PASSWORD_LENGTH 16
int main(void)
{
	int i;
	char *charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_+=";
	char password[PASSWORD_LENGTH + 1];

	srand(time(NULL));
	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = charset[rand() % (sizeof(charset) - 1)];
	}
	password[PASSWORD_LENGTH] = '\0';
	printf("%s\n", password);
	return (0);
}
