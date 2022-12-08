#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
    int o, r, w;
    char *buffer;

    if(!filename)
            return (0);

    o = open(filename, O_RDONLY);
    if (o < 0)
            return (0);

    buffer = malloc(sizeof(char) * letters);     
    if(!buffer)
            return (0);  
             
    r = read(0, buffer, letters);
    if(r < 0)
    {
            free(buffer);
            return (0);
    }
    buffer[r] = '\0';
    close(o);

    w = write(STDOUT_FILENO, buffer, r);
    if(w < 0)
    {
            free(buffer);
            return (0);
    }

    free(buffer);
    return (w);
}

