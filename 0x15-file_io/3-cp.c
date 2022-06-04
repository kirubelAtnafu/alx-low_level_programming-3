#include "main.h"

/**
 * main - Entry point
 * @argc: arguments count
 * @argv: pointer to the files
 *
 * Return: On success 0, exit on failure
 */
int main(int argc, char **argv)
{
	int file_from, file_to, length = 1;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (length)
	{
		length = read(file_from, buffer, 1024);
		if ((write(file_to, buffer, length) != length || file_to == -1))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (close(file_from) == -1 || close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	return (0);
}
