#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/**
 * main - program that generates random valid password
 *
 * Return: an integer value of 0
 */
#define PASSWORD_LENGTH 10
int main(void)
{
	int i, index;
	char *charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+";
	char password[PASSWORD_LENGTH + 1];

	srand(time(NULL));
	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		index = rand() % strlen(charset);
		password[i] = charset[index];
	}
	password[PASSWORD_LENGTH] = '\0';
	printf("%s\n", password);
	return (0);
}
