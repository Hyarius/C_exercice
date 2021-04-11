#pragma once

#include <stdbool.h>
#include <stdio.h>

#define NO_AWNSER 0

int addition(int a, int b);
int soustraction(int a, int b);
int multiplication(int a, int b);
int division(int a, int b);

char* create_string(int size);

void initiate();
bool check_operation();
bool check_creation_string();
