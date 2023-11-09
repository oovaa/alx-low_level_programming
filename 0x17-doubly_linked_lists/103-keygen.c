#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/**
 * generate_key - Generates a key based on the provided username.
 * @username: The input username.
 * @key: The generated key (output).
 */

void generate_key(char *username, char *key)
{
	size_t len = strlen(username);
	size_t i, b;
	int add = 0;
	char l[] = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	key[0] = l[(len ^ 59) & 63];

	for (i = 0; i < len; i++)
		add += username[i];
	key[1] = l[(add ^ 79) & 63];

	b = 1;
	for (i = 0; i < len; i++)
		b *= username[i];
	key[2] = l[(b ^ 85) & 63];

	b = username[0];
	for (i = 0; i < len; i++)
		if ((char)b <= username[i])
			b = username[i];
	srand(b ^ 14);
	key[3] = l[rand() & 63];

	b = 0;
	for (i = 0; i < len; i++)
		b += username[i] * username[i];
	key[4] = l[(b ^ 239) & 63];

	b = 0;
	for (i = 0; (char)i < username[0]; i++)
		b = rand();
	key[5] = l[(b ^ 229) & 63];

	key[64 - 1] = '\0';
}

/**
 * main - Entry point for the key generator program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE on error.
 */

int main(int argc, char *argv[])
{
	char key[64];

	if (argc != 2)
	{
		fprintf(stderr, "Correct usage: %s <username>\n", argv[0]);
		return (EXIT_FAILURE);
	}
	generate_key(argv[1], key);

	printf("%s\n", key);

	return (EXIT_SUCCESS);
}
