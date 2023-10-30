#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * @filename: the name of the file
 * @letters: the number of letters it should read and print
 * Return: 0 if error or filename is nukk or the actual number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fo;
	ssize_t size;
	char rd[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);

	fo = open(filename, O_RDONLY);
	if (fo == -1)
		return (0);

	size = read(fo, &rd[0], letters);
	size = write(STDOUT_FILENO, &rd[0], size);
	close(fo);
	return (size);

}
