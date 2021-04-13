#include "studies.h"

#include <stdlib.h>
#include <time.h>


void initiate()
{
	srand((unsigned int)(time(NULL)));
}

int generate_nbr(const int min, const int max)
{
	return((rand() % (max - min)) + min);
}
