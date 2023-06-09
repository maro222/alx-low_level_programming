#include "main.h"

/**
 *append_text_to_file -  a function that appends text at the end of a file.
 *
 *@filename: is the name of the file
 *@text_content: is the NULL terminated string to add at the end of the file
 *
 *Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (!filename)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd < 0)
		return (-1);

	if (text_content == NULL)
	{
		text_content = "";
		return (1);
	}

	wr = write(fd, text_content, strlen(text_content));
	if (wr < 0)
		return (-1);

	close(fd);
	return (1);
}
