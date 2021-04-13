#pragma once

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define NO_AWNSER 0

// Operator part
int addition(int a, int b);
int soustraction(int a, int b);
int multiplication(int a, int b);
int division(int a, int b);
bool equal(int a, int b);
bool different(int a, int b);
bool char_is_alpha(char c);
bool char_is_digit(char c);
bool char_is_alphanum(char c);
bool char_is_ascii(char c);
bool char_is_printable(char c);

// String part
int string_lenght(char* string);
char* string_duplicate(char* source);
bool string_is_alpha(char* string);
bool string_is_digit(char* string);
bool string_is_alphanum(char* string);
bool string_is_ascii(char* string);
bool string_is_printable(char* string);
void string_to_lower(char* string);
void string_to_upper(char* string);
bool string_compare(char* string1, char* string2);
bool string_numerous_compare(char* string1, char* string2, int size);
char* string_create(int size);
void string_delete(char** string);
void string_clear(char *string);
void string_copy(char* source, char* destination);
void string_numerous_copy(char* source, int size);
void string_concatenation(char* source, char* destination);
void string_numerous_concatenation(char* source, char* destination, int size);
char* string_research(char* source, char* target);
char* string_reverse_search(char* source, char* target);
char* string_join(char* string1, char* string2);

// Printer
void print_char(char c);
void print_char_fd(int fd, char c);
void print_string(char * s);
void print_string_fd(int fd, char * s);
void print_string_end_line(char* string);
void print_string_end_line_fd(int fd, char* string);
void print_integer(int number);
void print_integer_fd(int fd, int number);

// Memory part
void* memory_allocation(int size);
void memory_delete(void* ptr);
void memory_set(void* ptr, int value, int size);
void memory_clear(void* ptr, int size);
void memory_copy(void* source, void* dest, int size);
void memory_delimited_copy(void* source, void* dest, int delim, int size);
void memory_move(void* source, void* dest, int size);
void memory_compare(void* ptr1, void* ptr2, int size);

// Algorythm part
char* integer_to_string(int value);
int string_to_integer(char* string);
char* string_substring(char* string, int start, int size);
char** string_split(char* source, char delimiter);

// Functor part
void ft_striter(char* s, void (*f)(char*));
void ft_striteri(char* s, void (*f)(unsigned int, char*));
char* ft_strmap(char const* s, char (*f)(char));
char* ft_strmapi(char const* s, char (*f)(unsigned int, char));

// List
typedef struct s_list
{
	void* content;
	int content_size;
	struct s_list* next;
} t_list;

t_list* list_create(void * content, int content_size);
void list_delete_one(t_list** list, void (*delete_funct)(void *, int));
void list_delete_all(t_list** list, void (*delete_funct)(void*, int));
void list_add(t_list** list, t_list* new);
t_list* list_search(t_list* list, void *target, bool (*compare_funct)(void*, void*));


// Back end function
void initiate();

// Checker
bool check_operation();
bool check_string();
