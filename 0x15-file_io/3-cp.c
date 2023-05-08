#include "main.h"

/**
 * main - copie the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int from_fd, to_fd;
	ssize_t num_read, num_written;
	char buf[BUF_SIZE];

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s: %s\n", argv[1], strerror(errno));
		exit(98);
	}

	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (to_fd == -1)
	{
		fprintf(stderr, "Error: Can't write to file %s: %s\n", argv[2], strerror(errno));
		exit(99);
	}

	while ((num_read = read(from_fd, buf, BUF_SIZE)) > 0)
	{
		num_written = write(to_fd, buf, num_read);
		if (num_written == -1 || num_written != num_read) {
			fprintf(stderr, "Error: Can't write to file %s: %s\n", argv[2], strerror(errno));
			exit(99);
		}
	}

	if (num_read == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s: %s\n", argv[1], strerror(errno));
		exit(98);
	}

	if (close(from_fd) == -1)
	{
		fprintf(stderr, "Error: Can't close file descriptor %d: %s\n", from_fd, strerror(errno));
		exit(100);
	}

	if (close(to_fd) == -1)
	{
		fprintf(stderr, "Error: Can't close file descriptor %d: %s\n", to_fd, strerror(errno));
		exit(100);
	}

	return 0;
}
