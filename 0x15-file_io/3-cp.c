#include "main.h"

#define USE "Usage: cp file_from file_to\n"
#define NORD "Error: Can't read from file NAME_OF_THE_FILE\n"
#define NOWR "Error: Can't write to NAME_OF_THE_FILE\n"
#define NOCLS "Error: Can't close fd FD_VALUE\n"
#define PERM (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - the entry point
 * @argc: the number of arguments {count}
 * @argv: the list of arguments {vector}
 * Return: 1 if success and 0 if fail
 */

int main(int argc, char **argv)
{
	int frm_fc = 0, to_fc = 0;
	ssize_t size;
	char buff[READ_BUFF_SIZE];

	if (argc != 3)
		dprint(STDERR_FILENO, USE), exit(97);
	frm_fc = open(argv[1],  O_RDONLY);
	if (frm_fc == -1)
		dprint(STDERR_FILENO, NORD, argv[1]), exit(98);
	to_fc = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERM);
	if (to_fc == -1)
		dprint(STDERR_FILENO, NOWR, argv[2]), exit(99);

	while ((size = read(frm_fc, buff, READ_BUF_SIZE)) > 0)
		if (write(to_fc, buff, size) != size)
			dprint(STDERR_FILENO, NOWR, argv[2]), exit(99);
	if (size == -1)
		dprint(STDERR_FILENO, NORD, argv[1]), exit(98);

	frm_fc = close(frm_fc);
	to_fc = close(to_fc);
	if (frm_fc)
		dprint(STDERR_FILENO, NOCLS, frm_fc), exit(100);
	if(to_fc)
		dprint(STDERR_FILENO, NOCLS, frm_fc), exit(100);
	return (EXIT_SUCCESS);
}
