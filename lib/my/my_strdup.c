/*
** EPITECH PROJECT, 2025
** my_strdup
** File description:
** allocates memory and copies the string given as argument
*/

#include <stddef.h>
#include <stdlib.h>
#include "./my.h"

char *my_strdup(char const *src)
{
    char *res = NULL;
    int i = 0;

    res = malloc(sizeof(char) * (my_strlen(src) + 1));
    while (src[i]){
        res[i] = src[i];
        i++;
    }
    res[i] = '\0';
    return res;
}
