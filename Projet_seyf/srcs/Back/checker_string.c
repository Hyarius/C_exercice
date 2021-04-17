#include "studies.h"

static char* last_strstr(const char* haystack, const char* needle)
{
	if (*needle == '\0')
		return (char*)haystack;

	char* result = NULL;
	for (;;) {
		char* p = strstr(haystack, needle);
		if (p == NULL)
			break;
		result = p;
		haystack = p + 1;
	}

	return result;
}

void check_string()
{
	PRINT_TEST_NAME("STRING PART");

	char* base_string[20] = {
		"Ceci est un test",
		"Celui la n'est pas plus dur"
	};

	for (size_t i = 2; i < 20; i++)
	{
		size_t len = generate_nbr(5, 15);
		base_string[i] = (char*)malloc(sizeof(char) * (len + 1));
		for (size_t j = 0; j < len; j++)
		{
			base_string[i][j] = (char)(generate_nbr(33, 127));
		}
		base_string[i][len] = '\0';
	}

	bool error = false;
	for (size_t i = 0; i < 20 && error == false; i++)
	{
		if (strlen(base_string[i]) != string_lenght(base_string[i]))
		{
			printf("	Error with operation [STRING_LENGHT] with entry [%s] -> result = %d - espected %d\n", base_string[i], string_lenght(base_string[i]), strlen(base_string[i]));
			error = true;
		}
	}

	error = false;
	for (size_t i = 0; i < 20 && error == false; i++)
	{
		bool espected = true;
		for (size_t j = 0; base_string[i][j] != '\0' && espected == true; j++)
		{
			if (isalpha(base_string[i][j]) == 0)
				espected = false;
		}
		if (string_is_alpha(base_string[i]) != espected)
		{
			printf("	Error with operation [STRING_IS_ALPHA] with entry [%s] -> result = [%s] - espected [%s]\n", base_string[i], (string_is_alpha(base_string[i]) == true ? "true" : "false"), (espected == true ? "true" : "false"));
			error = true;
		}
	}

	error = false;
	for (size_t i = 0; i < 20 && error == false; i++)
	{
		bool espected = true;
		for (size_t j = 0; base_string[i][j] != '\0' && espected == true; j++)
		{
			if (isdigit(base_string[i][j]) == 0)
				espected = false;
		}
		if (string_is_digit(base_string[i]) != espected)
		{
			printf("	Error with operation [STRING_IS_DIGIT] with entry [%s] -> result = [%s] - espected [%s]\n", base_string[i], (string_is_digit(base_string[i]) == true ? "true" : "false"), (espected == true ? "true" : "false"));
			error = true;
		}
	}

	error = false;
	for (size_t i = 0; i < 20 && error == false; i++)
	{
		bool espected = true;
		for (size_t j = 0; base_string[i][j] != '\0' && espected == true; j++)
		{
			if (isdigit(base_string[i][j]) == 0 && isalpha(base_string[i][j]) == 0)
				espected = false;
		}
		if (string_is_alphanum(base_string[i]) != espected)
		{
			printf("	Error with operation [STRING_IS_ALPHANUM] with entry [%s] -> result = [%s] - espected [%s]\n", base_string[i], (string_is_alphanum(base_string[i]) == true ? "true" : "false"), (espected == true ? "true" : "false"));
			error = true;
		}
	}

	error = false;
	for (size_t i = 0; i < 20 && error == false; i++)
	{
		bool espected = true;
		for (size_t j = 0; base_string[i][j] != '\0' && espected == true; j++)
		{
			if (base_string[i][j] < 0)
				espected = false;
		}
		if (string_is_ascii(base_string[i]) != espected)
		{
			printf("	Error with operation [STRING_IS_ASCII] with entry [%s] -> result = [%s] - espected [%s]\n", base_string[i], (string_is_ascii(base_string[i]) == true ? "true" : "false"), (espected == true ? "true" : "false"));
			error = true;
		}
	}

	error = false;
	for (size_t i = 0; i < 20 && error == false; i++)
	{
		bool espected = true;
		for (size_t j = 0; base_string[i][j] != '\0' && espected == true; j++)
		{
			if (base_string[i][j] < 32)
				espected = false;
		}
		if (string_is_printable(base_string[i]) != espected)
		{
			printf("	Error with operation [STRING_IS_PRINTABLE] with entry [%s] -> result = [%s] - espected [%s]\n", base_string[i], (string_is_printable(base_string[i]) == true ? "true" : "false"), (espected == true ? "true" : "false"));
			error = true;
		}
	}

	error = false;
	for (size_t i = 0; i < 20 && error == false; i++)
	{
		int tab[20] = {
			0, 2, 1, 4, 3,
			6, 7, 5, 8, 9,
			10, 14, 12, 12, 11,
			16, 19, 18, 17, 15
		};

		if (strcmp(base_string[i], base_string[tab[i]]) != string_compare(base_string[i], base_string[tab[i]]))
		{
			printf("	Error with operation [STRING_COMPARE] with entry [%s] and [%s] -> result = [%s] - espected [%s]\n", base_string[i], base_string[tab[i]], (string_compare(base_string[i], base_string[tab[i]]) == true ? "true" : "false"), (strcmp(base_string[i], base_string[tab[i]]) == true ? "true" : "false"));
			error = true;
		}
	}

	error = false;
	for (size_t i = 0; i < 20 && error == false; i++)
	{
		int tab[20] = {
			0, 2, 1, 4, 3,
			6, 7, 5, 8, 9,
			10, 14, 12, 12, 11,
			16, 19, 18, 17, 15
		};

		int size = generate_nbr(2, 5);

		if (strncmp(base_string[i], base_string[tab[i]], size) != string_numerous_compare(base_string[i], base_string[tab[i]], size))
		{
			printf("	Error with operation [STRING_NUMEROUS_COMPARE] with entry [%s] and [%s] and size %d -> result = %d - espected %d\n", base_string[i], base_string[tab[i]], size, (string_numerous_compare(base_string[i], base_string[tab[i]], size) == true ? "true" : "false"), (strncmp(base_string[i], base_string[tab[i]], size) == true ? "true" : "false"));

			error = true;
		}
	}

	error = false;
	for (size_t i = 0; i < 20 && error == false; i++)
	{
		size_t len = generate_nbr(5, 15);
		char* new_string = string_create(len);
		if (new_string == NULL || _msize(new_string) < len)
		{
			printf("	Error with operation [STRING_CREATE] with len %d\n", len);

			error = true;
		}
		free(new_string);
	}

	error = false;
	for (size_t i = 0; i < 20 && error == false; i++)
	{
		char* new_string = string_duplicate(base_string[i]);
		if (new_string == NULL || strcmp(base_string[i], new_string) != 0)
		{
			printf("	Error with operation [STRING_DUPLICATE] with string [%s]\n", base_string[i]);
			error = true;
		}
		free(new_string);
	}

	error = false;
	for (size_t i = 0; i < 20 && error == false; i++)
	{
		size_t len = generate_nbr(5, 15);
		char* new_string = (char*)malloc(sizeof(char) * (len + 1));
		string_delete(&new_string);
		if (new_string != NULL)
		{
			printf("	Error with operation [STRING_DELETE]\n");
			error = true;
		}
	}

	error = false;
	for (size_t i = 0; i < 20 && error == false; i++)
	{
		size_t len = generate_nbr(5, 15);
		char* new_string = (char*)malloc(sizeof(char) * (len + 1));
		for (size_t j = 0; j < len; j++)
			new_string[j] = (char)(generate_nbr(0, 27) + 'a');

		string_clear(new_string);

		for (size_t j = 0; j < len && error == false; j++)
		{
			if (new_string[j] != '\0')
			{
				printf("	Error with operation [STRING_CLEAR]\n");
				error = true;
			}
		}
		free(new_string);
	}

	error = false;
	for (size_t i = 0; i < 20 && error == false; i++)
	{
		char buffer[40];
		char verified_buffer[40];

		string_copy(base_string[i], buffer);
		strcpy(verified_buffer, base_string[i]);

		if (strcmp(buffer, verified_buffer) != 0)
		{
			printf("	Error with operation [STRING_COPY] with string [%s] -> result [%s] - espected [%s]\n", base_string[i], buffer, verified_buffer);
			error = true;
		}
	}
	
	char* buffer = (char*)malloc(sizeof(char) * 40);
	char* verified_buffer = (char*)malloc(sizeof(char) * 40);

	error = false;
	for (size_t i = 0; i < 20 && error == false; i++)
	{
		memset(buffer, 0, 40);
		memset(verified_buffer, 0, 40);
		
		size_t len = generate_nbr(1, 5);

		string_numerous_copy(base_string[i], buffer, len);
		strncpy(verified_buffer, base_string[i], len);

		if (strcmp(buffer, verified_buffer) != 0)
		{
			printf("	Error with operation [STRING_COPY] with string [%s] -> result [%s] - espected [%s]\n", base_string[i], buffer, verified_buffer);
			error = true;
		}
	}

	error = false;
	for (size_t i = 0; i < 20 && error == false; i++)
	{
		memset(buffer, 0, 40);
		memset(verified_buffer, 0, 40);

		size_t len = generate_nbr(1, 5);

		strncpy(buffer, base_string[(i + 1) % 20], len);
		strncpy(verified_buffer, base_string[(i + 1) % 20], len);

		string_concatenation(base_string[i], buffer);
		strcat(verified_buffer, base_string[i]);

		if (strcmp(buffer, verified_buffer) != 0)
		{
			printf("	Error with operation [STRING_CONCATENATION] with string [%s] -> result [%s] - espected [%s]\n", base_string[i], buffer, verified_buffer);
			error = true;
		}
	}

	error = false;
	for (size_t i = 0; i < 20 && error == false; i++)
	{
		memset(buffer, 0, 40);
		memset(verified_buffer, 0, 40);

		size_t len = generate_nbr(1, 5);

		strncpy(buffer, base_string[(i + 1) % 20], len);
		strncpy(verified_buffer, base_string[(i + 1) % 20], len);

		string_numerous_concatenation(base_string[i], buffer, len);
		strncat(verified_buffer, base_string[i], len);

		if (strcmp(buffer, verified_buffer) != 0)
		{
			printf("	Error with operation [STRING_NUMEROUS_CONCATENATION] with string [%s] -> result [%s] - espected [%s]\n", base_string[i], buffer, verified_buffer);
			error = true;
		}

	}

	error = false;
	for (size_t i = 0; i < 20 && error == false; i++)
	{
		char* awnser = string_research(base_string[i], "est");

		if (awnser != strstr(base_string[i], "est"))
		{
			printf("	Error with operation [STRING_RESEARCH] with string [%s] -> result [%s] - espected [%s]\n", base_string[i], awnser, strstr(base_string[i], "est"));

			error = true;
		}
	}

	error = false;
	for (size_t i = 0; i < 20 && error == false; i++)
	{
		char* awnser = string_reverse_search(base_string[i], "est");

		if (awnser != last_strstr(base_string[i], "est"))
		{
			printf("	Error with operation [STRING_REVERSE_RESEARCH] with string [%s] -> result [%s] - espected [%s]\n", base_string[i], awnser, last_strstr(base_string[i], "est"));

			error = true;
		}
	}

	error = false;
	for (size_t i = 2; i < 20 && error == false; i++)
	{
		char* awnser = string_join(base_string[i], base_string[(i + 1) % 20]);
		memset(buffer, 0, 40);
		strcpy(buffer, base_string[i]);
		strcat(buffer, base_string[(i + 1) % 20]);

		if (awnser == NULL  || strcmp(awnser, buffer) != 0)
		{
			printf("	Error with operation [STRING_REVERSE_RESEARCH] with string [%s] and [%s] -> result [%s] - espected [%s]\n", base_string[i], base_string[(i + 1) % 20], awnser, buffer);

			error = true;
		}
		free(awnser);
	}

	for (size_t i = 2; i < 20; i++)
	{
		free(base_string[i]);
	}

	free(buffer);
	free(verified_buffer);

	LEAVE_TEST("STRING PART");
}