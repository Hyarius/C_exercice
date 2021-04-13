#include "studies.h"

#include <stdlib.h>
#include <time.h>

/*
FILE* base_output;
FILE* stream;

base_output = stdout;
errno_t err;
// Reassign "stderr" to "freopen.out":
err = freopen_s(&stream, "output.txt", "a+", stdout);
*/

void initiate()
{
	srand(time(NULL));
}

int generate_nbr(const int min, const int max)
{
	return((rand() % (max - min)) + min);
}
