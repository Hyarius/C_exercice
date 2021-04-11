#include "studies.h"

#include <stdlib.h>
#include <time.h>

#define NB_TEST 100
#define PRINT_ERROR_OPERATOR(text, a, b) printf(text, a, b)
#define PRINT_ERROR_STR(text, size) printf(text, size)

void initiate()
{
	srand(time(NULL));
}

int generate_nbr(const int min, const int max)
{
	return((rand() % (max - min)) + min);
}

bool check_operation()
{
	bool result = true;
	bool addition_bool = true;
	bool soustraction_bool = true;
	bool multiplication_bool = true;
	bool division_bool = true;

	for (size_t i = 0; i < NB_TEST; i++)
	{
		int a = generate_nbr(-10000, 10000);
		int b = generate_nbr(-10000, 10000);

		if (a + b != addition(a, b) && addition_bool == true)
		{
			PRINT_ERROR_OPERATOR("Error in addition with parameter %d and %d\n", a, b);
			addition_bool = false;
			result = false;
		}
	}

	for (size_t i = 0; i < NB_TEST; i++)
	{
		int a = generate_nbr(-10000, 10000);
		int b = generate_nbr(-10000, 10000);

		if (a - b != soustraction(a, b) && soustraction_bool == true)
		{
			PRINT_ERROR_OPERATOR("Error in soustraction with parameter %d and %d\n", a, b);
			soustraction_bool = false;
			result = false;
		}
	}

	for (size_t i = 0; i < NB_TEST; i++)
	{
		int a = generate_nbr(-10000, 10000);
		int b = generate_nbr(-10000, 10000);

		if (a * b != multiplication(a, b) && multiplication_bool == true)
		{
			PRINT_ERROR_OPERATOR("Error in multiplication with parameter %d and %d\n", a, b);
			multiplication_bool = false;
			result = false;
		}
	}

	for (size_t i = 0; i < NB_TEST; i++)
	{
		int a = generate_nbr(-10000, 10000);
		int b = generate_nbr(-10000, 10000);

		if (a / b != division(a, b) && division_bool == true)
		{
			PRINT_ERROR_OPERATOR("Error in division with parameter %d and %d\n", a, b);
			division_bool = false;
			result = false;
		}
	}

	return (result);
}

bool check_creation_string()
{
	int string_len[5] = {
		10, 12, 1, 0, -1
	};

	for (size_t i = 0; i < 5; i++)
	{
		char* string;
		string = create_string(string_len[i]);
		if (string_len[i] > 0 && string == NO_AWNSER)
		{
			PRINT_ERROR_STR("Error while using your function with a size of : %d\n", string_len[i]);
			return (false);
		}
		else if (string != NO_AWNSER)
		{
			PRINT_ERROR_STR("Error while using your function with a size of : %d\n", string_len[i]);
			return (false);
		}
	}

	return (true);
}