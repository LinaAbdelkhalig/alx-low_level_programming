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
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the string to be appended
 * Return: 1 if success -1 if fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fa;
	ssize_t size = 0, length = _strlen(text_content);

	if (filename == NULL)
		return (-1);
	fa = open(filename, O_WRONLY | O_APPEND);
	if (fa == -1)
		return (-1);
	if (length)
		size = write(fa, text_content, length);
	close(fa);
	return (size == length ? 1 : -1);
}
