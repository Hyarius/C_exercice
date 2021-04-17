#include "studies.h"

void check_operation()
{
	PRINT_TEST_NAME("OPERATOR PART");

	bool error = false;
	for (size_t i = 0; i < 100 && error == false; i++)
	{
		int a = generate_nbr(-500, 500);
		int b = generate_nbr(-500, 500);

		if ((a + b) != addition(a, b))
		{
			printf("	Error with operation [ADDITION] with value %d and %d -> result = %d\n", a, b, addition(a, b));
			error = true;
		}
	}
	error = false;
	for (size_t i = 0; i < 100 && error == false; i++)
	{
		int a = generate_nbr(-500, 500);
		int b = generate_nbr(-500, 500);

		if ((a + b) != soustraction(a, b))
		{
			printf("	Error with operation [SOUSTRACTION] with value %d and %d -> result = %d\n", a, b, soustraction(a, b));
			error = true;
		}
	}
	error = false;
	for (size_t i = 0; i < 100 && error == false; i++)
	{
		int a = generate_nbr(-500, 500);
		int b = generate_nbr(-500, 500);

		if ((a + b) != multiplication(a, b))
		{
			printf("	Error with operation [MULTIPLICATION] with value %d and %d -> result = %d\n", a, b, multiplication(a, b));
			error = true;
		}
	}
	error = false;
	for (size_t i = 0; i < 100 && error == false; i++)
	{
		int a = generate_nbr(-500, 500);
		int b = generate_nbr(-500, 500);

		if ((a + b) != division(a, b))
		{
			printf("	Error with operation [DIVISION] with value %d and %d -> result = %d\n", a, b, division(a, b));
			error = true;
		}
	}
	error = false;
	for (char c = '\0'; c < 127 && error == false; c++)
	{
		if (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) &&
			char_is_alpha(c) == false)
		{
			printf("	Error with operator [CHAR_IS_ALPHA] with char %c[%d] -> result = %s\n", c, c, "false");
			error = true;
		}
		else if (char_is_alpha(c) == true)
		{
			printf("	Error with operator [CHAR_IS_ALPHA] with char %c[%d] -> result = %s\n", c, c, "true");
			error = true;
		}

	}
	error = false;
	for (char c = '\0'; c < 127 && error == false; c++)
	{
		if (((c >= '0' && c <= '9')) &&
			char_is_digit(c) == false)
		{
			printf("	Error with operator [CHAR_IS_DIGIT] with char %c[%d] -> result = %s\n", c, c, "false");
			error = true;
		}
		else if (char_is_digit(c) == true)
		{
			printf("	Error with operator [CHAR_IS_DIGIT] with char %c[%d] -> result = %s\n", c, c, "true");
			error = true;
		}
	}
	error = false;
	for (char c = '\0'; c < 127 && error == false; c++)
	{
		if (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) &&
			char_is_alphanum(c) == false)
		{
			printf("	Error with operator [CHAR_IS_ALPHANUM] with char %c[%d] -> result = %s\n", c, c, "false");
			error = true;
		}
		else if (char_is_alphanum(c) == true)
		{
			printf("	Error with operator [CHAR_IS_ALPHANUM] with char %c[%d] -> result = %s\n", c, c, "true");
			error = true;
		}

	}
	error = false;
	for (char c = '\0'; c < 127 && error == false; c++)
	{
		if (c >= 0 && c <= 127 &&
			char_is_ascii(c) == false)
		{
			printf("	Error with operator [CHAR_IS_ASCII] with char %c[%d] -> result = %s\n", c, c, "false");
			error = true;
		}
		else if (char_is_ascii(c) == true)
		{
			printf("	Error with operator [CHAR_IS_ASCII] with char %c[%d] -> result = %s\n", c, c, "true");
			error = true;
		}
	}
	error = false;
	for (char c = '\0'; c < 127 && error == false; c++)
	{
		if (c >= 32 && c <= 127 &&
			char_is_printable(c) == false)
		{
			printf("	Error with operator [CHAR_IS_PRINTABLE] with char %c[%d] -> result = %s\n", c, c, "false");
			error = true;
		}
		else if (char_is_printable(c) == true)
		{
			printf("	Error with operator [CHAR_IS_PRINTABLE] with char %c[%d] -> result = %s\n", c, c, "true");
			error = true;
		}
	}

	LEAVE_TEST("OPERATOR PART");
}