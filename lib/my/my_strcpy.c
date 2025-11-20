/*
** EPITECH PROJECT, 2025
** strcpy
** File description:
** copy a chaine of character into an other
*/

#include "./my.h"

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
