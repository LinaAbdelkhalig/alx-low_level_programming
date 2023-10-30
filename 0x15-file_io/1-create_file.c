#include "main.h"

/**
 * _strlen - returns the length of a string
 * @string: the string
 * Return: the length of the string
 */

int _strlen(char *string)
{
	int len = 0;

	if (string == NULL)
		return (0);
	while (*string++)
		len++;
	return (len);
}
/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: the string to write to the file
 * Return: 1 or -1 if failed
 */

int create_file(const char *filename, char *text_content)
{
	int fc;
	ssize_t size = 0, length = _strlen(text_content);

	if (filename == NULL)
		return (-1);

	fc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fc == -1)
		return (-1);
	if (length)
		size = write(fc, text_content, length);
	close(fc);
	return (size == length ? 1 : -1);
}
