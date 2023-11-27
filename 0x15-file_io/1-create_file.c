#include "main.h"

/**
  * create_file - a function that creates a file
  * @filename: filename pointer
  * @text_content: what needs to be written to a file
  *
  * Return:  1 on success -1 on failure.
  */

int create_file(const char *filename, char *text_content)
{
	int file_des, k, turn_wr;

	if (filename == NULL)
		return (-1);
	file_des = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file_des == -1)
		return (-1);

	if (text_content)
	{
		k = 0;
		while (text_content[k])
			k++;
		turn_wr = write(file_des, text_content, k);
		if (turn_wr != k)
			return (-1);
	}

	close(file_des);
	return (1);
}
