#include "main.h"

/**
 * read_textfile -  a function that reads a text file and
 *                         prints it to the POSIX standard output.
 *
 *@filename: textfile to be read
 *@letters: is the number of letters it should read and print
 *
 *Return: returns the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, sizeR, sizeW;
	char *ch;

	ch = (char *)malloc(sizeof(char) * letters + 1);
	if (ch == NULL)
		return (0);
	fd = open(filename, O_RDONLY | O_CREAT);

	if (filename == NULL || fd == -1)
		return (0);

	sizeR = read(fd, ch, letters);
	if (sizeR < 0)
		return (0);

	sizeW = write(STDOUT_FILENO, ch, sizeR);
	if (sizeW < 0)
		return (0);

	close(fd);
	free(ch);
	return (sizeW);
}
