#include "studies.h"

int checker_main()
{
	funct_ptr funct_tab[NB_PART] =
	{
		check_operation,
		check_string,
		check_printer,
		check_memory,
		check_algorythmn,
		check_functeur,
		check_list
	};
	initiate();

	printf("Quel partie voulez vous lancer : \n"
		"1) Arithmetique\n"
		"2) Char et String\n"
		"3) Affichage\n"
		"4) Gestion de memoire\n"
		"5) Algorithme\n"
		"6) Pointeur de fonction\n"
		"7) Liste chainee\n"
		"8) Quitter\n");
	
	int awnser = -1;
	while (awnser != NB_PART + 1)
	{
		while (awnser < 1 || awnser > NB_PART + 1)
		{
			printf("Partie a lancer : ");
			scanf_s("%d", &awnser);
		}
		printf("\n");
		if (awnser != NB_PART + 1)
		{
			funct_tab[awnser - 1]();
			awnser = -1;
		}
	}
	
	return (0);
}