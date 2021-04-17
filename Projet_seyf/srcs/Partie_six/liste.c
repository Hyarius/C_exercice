#include "studies.h"

/*
* 
* Voici la structure qui decrit une t_list, je vous invite a regarder sur le net pour plus d'info
* 
typedef struct s_list
{
	void* content;
	int content_size;
	struct s_list* next;
} t_list;
*/

t_list* list_create(void* content, int content_size)
{
	return (NO_AWNSER);
}

void list_delete_one(t_list** list, void (*delete_funct)(void*, int))
{
	// NO AWNSER
}

void list_delete_all(t_list** list, void (*delete_funct)(void*, int))
{
	// NO AWNSER
}

void list_add(t_list** list, t_list* new)
{
	// NO AWNSER
}

t_list* list_search(t_list* list, void* target, bool (*compare_funct)(void*, void*))
{
	return (NO_AWNSER);
}
