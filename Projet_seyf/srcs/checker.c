#include "studies.h"

int nb_test = 0;

void check_operation()
{
	PRINT_TEST_NAME("OPERATOR PART");
	LEAVE_TEST("OPERATOR PART");
}

void check_string()

{
	PRINT_TEST_NAME("STRING PART");
	LEAVE_TEST("STRING PART");
}

void check_printer()
{
	PRINT_TEST_NAME("PRINTER PART");

	/*
	FILE* base_output;
	FILE* stream;

	base_output = stdout;
	errno_t err;
	// Reassign "stderr" to "freopen.out":
	err = freopen_s(&stream, "output.txt", "a+", stdout);
	*/

	LEAVE_TEST("PRINTER PART");
}

void check_memory()
{
	PRINT_TEST_NAME("MEMORY PART");
	LEAVE_TEST("MEMORY PART");
}

void check_algorythmn()
{
	PRINT_TEST_NAME("ALGORYTHM PART");
	LEAVE_TEST("ALGORYTHM PART");
}

void check_functeur()
{
	PRINT_TEST_NAME("FUNCTION POINTER PART");
	LEAVE_TEST("FUNCTION POINTER PART");
}

void check_list()
{
	PRINT_TEST_NAME("LINKED LIST PART");
	LEAVE_TEST("LINKED LIST PART");
}