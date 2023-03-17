#include <string.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*string_nconcat - concatenates n bytes of a string to another string
* @s1: string to append to
* @s2: string to concatenate from
* @n: number of bytes from s2 to concatenate to s1
* *
**Return: pointer to the resulting string
*/

char* string_nconcat(char* s1, char* s2, unsigned int n)
{
char* result = (char*) malloc(strlen(s1) + n + 1);
	if (result == NULL) 
{
        return NULL;
}
    strcpy(result, s1);
    strncat(result, s2, n);
    return result;
}

int main() 
{
    char string1[50] = "Hello, ";
    char string2[] = "World!";
    unsigned int n = 3;
    char* concatenatedString = string_nconcat(string1, string2, n);
    if (concatenatedString != NULL) {
        printf("Concatenated String: %s\n", concatenatedString);
        free(concatenatedString);
    }
    return 0;
}
