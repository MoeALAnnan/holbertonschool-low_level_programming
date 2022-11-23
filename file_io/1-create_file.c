#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
/**
 * create_file - function
 * @filename: parameter
 * @text_content: parameter
 * Description: a function that creates a file
 * Return: size_t type
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t ret_value;
	/**
	 * filename is the name of the file to create
	 * and text_content is a NULL terminated string to write to the file
	 */
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	/*ret_value = write(STDOUT_FILENO, text_content, (sizeof(text_content)));*/
	ret_value = write(fd, text_content, strlen(text_content));
	if (ret_value == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
