#include "studies.h"

typedef void (*funct_ptr)(void);

#define TAB_SIZE 2

/*
int main()
{
	funct_ptr funct_tab[TAB_SIZE] =
	{
		check_operation,
		check_string
	};
	initiate();

	printf("Quel partie voulez vous lancer : \n1) Arithmetique\n2) Char et String\n");
	
	int awnser = -1;
	while (awnser < 1 || awnser > TAB_SIZE)
	{
		printf("Partie a lancer : ");
		scanf_s("%d", &awnser);
	}
	printf("\n");
	funct_tab[awnser - 1]();
	
	return (0);
}
*/

FILE* base_output;
FILE* stream;

int main()
{
	base_output = stdout;
	errno_t err;
	// Reassign "stderr" to "freopen.out":
	err = freopen_s(&stream, "output.txt", "a+", stdout);
	char buffer[200];
	memset(buffer, 0, 200);
	write(1, "Ceci est un test", strlen("Ceci est un test"));
	return (0);
}