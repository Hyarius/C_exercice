#include "studies.h"

/*

DANS CET EXERCICE, INTERDIT D'UTILISER LA FONCTION PRINTF

*/

void print_char(char c)
{
	// Petit indice, parce que je suis sympa ;) 
	write(1, &c, 1);
}

void print_char_fd(int fd, char c)
{
	// Un autre, parce que voila, je suis vraiment tres sympa
	write(fd, &c, 1);
}

void print_string(char* s)
{
	// NO AWNSER
}

void print_string_fd(int fd, char* s)
{
	// NO AWNSER
}

void print_string_end_line(char* string)
{
	// NO AWNSER
}

void print_string_end_line_fd(int fd, char* string)
{
	// NO AWNSER
}

void print_integer(int number)
{
	// NO AWNSER
}

void print_integer_fd(int fd, int number)
{
	// NO AWNSER
}
