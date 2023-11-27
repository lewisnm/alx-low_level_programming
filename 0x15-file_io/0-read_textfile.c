#include "main.h"

/**
 * read_textfile - prints to the stdout POSIX after reading a textfile
 * @filename: pointer to the file name
 * @letters: number of letters to be read and print
 *
 * Return: no of letters it could print or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_Des, return_rd, return_wr;
	char *sto_size;

	if (filename == NULL)
		return (0);

	file_Des = open(filename, O_RDONLY);
	if (file_Des == -1)
		return (0);
	sto_size = malloc(sizeof(char) * letters + 1);
	if (sto_size == NULL)
		return (0);
	return_rd = read(file_Des, sto_size, letters);
	if (return_rd == -1)
		return (0);

	sto_size[letters] = '\0';

	return_wr = write(STDOUT_FILENO, sto_size, return_rd);
	if (return_wr == -1)
		return (0);

	close(file_des);
	free(sto_size);
	return (return_wr);
}

