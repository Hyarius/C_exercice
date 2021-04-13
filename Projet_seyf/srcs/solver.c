#include "studies.h"

#include <stdlib.h>
#include <time.h>

int nb_test = 0;

#define NB_TEST 100

void initiate()
{
	srand(time(NULL));
}

int generate_nbr(const int min, const int max)
{
	return((rand() % (max - min)) + min);
}

#define PRINT_ERROR_OPERATOR(text, a, b, result) printf(text, a, b, result)

bool check_operation()
{
	if (nb_test != 0)
		printf("\n\n");
	nb_test++;

	printf(" --- OPERATION PART --- \n");
	for (size_t i = 0; i < NB_TEST; i++)
	{
		int a = generate_nbr(-10000, 10000);
		int b = generate_nbr(-10000, 10000);

		if (a + b != addition(a, b))
		{
			PRINT_ERROR_OPERATOR("Error in addition with parameter %d and %d = %d\n", a, b, addition(a, b));
			return (false);
		}
	}

	for (size_t i = 0; i < NB_TEST; i++)
	{
		int a = generate_nbr(-10000, 10000);
		int b = generate_nbr(-10000, 10000);

		if (a - b != soustraction(a, b))
		{
			PRINT_ERROR_OPERATOR("Error in soustraction with parameter %d and %d = %d\n", a, b, soustraction(a, b));
			return (false);
		}
	}

	for (size_t i = 0; i < NB_TEST; i++)
	{
		int a = generate_nbr(-10000, 10000);
		int b = generate_nbr(-10000, 10000);

		if (a * b != multiplication(a, b))
		{
			PRINT_ERROR_OPERATOR("Error in multiplication with parameter %d and %d = %d\n", a, b, multiplication(a, b));
			return (false);
		}
	}

	for (size_t i = 0; i < NB_TEST; i++)
	{
		int a = generate_nbr(-10000, 10000);
		int b = generate_nbr(-10000, 10000);

		if (a / b != division(a, b))
		{
			PRINT_ERROR_OPERATOR("Error in division with parameter %d and %d = %d\n", a, b, division(a, b));
			return (false);
		}
	}

	return (true);
}

#define PRINT_ERROR_STRLEN(text, str, size) printf(text, str, size)
#define PRINT_ERROR_MALLOC_STR(text, size) printf(text, size)

bool check_string()
{
	if (nb_test != 0)
		printf("\n\n");
	nb_test++;
	printf(" --- STRING PART --- \n");
	int string_len[5] = {
		10, 12, 1, 0, -1
	};
	char* buffer[7] = {
		"ceci est un test",
		"ceci est un autre test, un peu plus long",
		"",
		"Oulala, c'est etrange",
		"abcdefghijklmnopqrstuvwxyz",
		"azertyuiop",
		"0123456789wxcvbnqsdfghazerty",
	};
	char buffer2[7][100];

	for (size_t i = 0; i < 7; i++)
	{
		int result = string_lenght(buffer[i]);
		if (result != strlen(buffer[i]))
		{
			PRINT_ERROR_STRLEN("Error while parsing size of the string %s -> awnser [%d]\n", buffer[i], result);
			return (false);
		}
	}

	for (size_t i = 0; i < 7; i++)
	{
		string_copy(buffer[i], buffer2[i]);
		if (strcmp(buffer[i], buffer2[i]) != 0)
		{
			PRINT_ERROR_STRLEN("Error with copy of string %s -> awnser [%s]\n", buffer[i], buffer2[i]);
			return (false);
		}
	}

	for (size_t i = 0; i < 5; i++)
	{
		char* string;
		string = string_create(string_len[i]);
		if (string_len[i] > 0 && string == NO_AWNSER)
		{
			PRINT_ERROR_MALLOC_STR("Error while creating a string with a size of : %d\n", string_len[i]);
			return (false);
		}
		else if (string_len[i] <= 0 && string != NO_AWNSER)
		{
			PRINT_ERROR_MALLOC_STR("Error while creating with a size of : %d\n", string_len[i]);
			return (false);
		}
	}

	return (true);
}