#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: the arg
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fdsource, fddest, size, wr;
	char buffer[3072];

	if (argc != 3)
		exit(97);

	fdsource = open(argv[1], O_RDONLY);
	if (fdsource == -1)
	{
		dprintf(STDERR_FILENO, "ERROR: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fddest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 000664);
	while (size > 0)
	{
		size = read(fdsource, buffer, 3072);
		if (size == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		wr = write(fddest, buffer, size);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Cant write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(fdsource) == -1)
	{
		exit(100);
	}
	if (close(fddest) == -1)
	{
		exit(100);
	}
	return (0);
}
