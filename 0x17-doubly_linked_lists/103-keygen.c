#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define KEY_LENGTH 64

/**
 * generate_key - Generates a key based on the given username.
 * @username: The input username.
 * @key: The buffer to store the generated key.
 */
void generate_key(char *username, char *key)
{
	snprintf(key, KEY_LENGTH,
				"%s%s%s%s", username, "S3cr3tK3y", "OpenAI", "Challenge");
}
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings representing the command-line arguments.
 *
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE on failure.
 */
int main(int argc, char *argv[])
{
	char key[KEY_LENGTH];

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <username>\n", argv[0]);
		return (EXIT_FAILURE);
	}

	generate_key(argv[1], key);

	printf("%s\n", key);

	return (EXIT_SUCCESS);
}
