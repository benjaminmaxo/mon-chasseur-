/*
** EPITECH PROJECT, 2025
** my_strcat
** File description:
** RTFM
*/

#include <stddef.h>
#include <stdio.h>
#include "./my.h"

char *my_strcat(char *dest, char const *src)
{
    int len_dest = my_strlen(dest);
    int len_tot = len_dest + my_strlen(src);
    int i = 0;
    int j = 0;

    while (i != len_tot){
        dest[len_dest + j] = src[i];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}
