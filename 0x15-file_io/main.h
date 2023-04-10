#ifndef MAIN_H
#define MAIN_H /

#include <stdio.h>
#include <stdlib.h>

/*putchar function prototype*/
int _putchar(char c);

/* function prototype*/
size_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);


#endif /*MAIN_H*/
