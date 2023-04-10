#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to the file name
 * @letters: number of letters to read and print
 * Return: actual number of letters read and printed, or 0 on failure
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
    ssize_t n_read, n_written;
    char *buffer;
    int fd;

    if (filename == NULL)
        return (0);

    buffer = malloc(sizeof(char) * (letters + 1));
    if (buffer == NULL)
        return (0);

    fd = open(filename, O_RDONLY);
    if (fd == -1)
    {
        free(buffer);
        return (0);
    }

    n_read = read(fd, buffer, letters);
    if (n_read == -1)
    {
        free(buffer);
        close(fd);
        return (0);
    }

    n_written = write(STDOUT_FILENO, buffer, n_read);
    if (n_written == -1 || n_written != n_read)
    {
        free(buffer);
        close(fd);
        return (0);
    }

    free(buffer);
    close(fd);

    return (n_written);
}
