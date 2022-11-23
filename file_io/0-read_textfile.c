#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * read_textfile - function
 * @filename: parameter
 * @letters: parameter
 * Description: a function that creates a file
 * Return: size_t type
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buf[1024];
	int l;
	int length = 0;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	/*READ*/
	while (((length < letters) && (l = read(fd, &buf, letters)) != 0))
	{
		length = length + write(STDOUT_FILENO, &buf, l);
	}
	return (length);
}
