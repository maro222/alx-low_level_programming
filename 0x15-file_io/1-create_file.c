#include "main.h"

/**
 *create_file - a function that creates a file
 *
 *@filename: is the name of the file to create
 *@text_content:  is a NULL terminated string to write to the file
 *
 *Return: 1 on success ,-1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, letters, wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd < 0)
		return (-1);

	letters = 0;
	if (text_content == NULL)
		text_content = "";
	while (text_content[letters])
	{
		letters++;
	}

	wr = write(fd, text_content, letters);
	if (wr < 0)
		return (-1);
	close(fd);
	return (1);
}
