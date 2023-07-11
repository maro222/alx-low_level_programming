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
	int cr, fd, letters, wr;
	char *temp;

	if (filename == NULL)
		return (-1);

	cr = creat(filename, S_IRUSR | S_IWUSR);
	if (cr < 0)
		return (-1);

	fd = open(filename, O_RDWR | O_TRUNC | O_EXCL);
	if (fd < 0)
		return (-1);

	letters = 0;
	temp = text_content;
	while (temp)
	{
		letters++;
		temp = temp + 1;
	}
	if (text_content != NULL)
	{
		wr = write(fd, text_content, letters);
		if (wr < 0)
			return (-1);
	}
	close(fd);
	return (1);
}
