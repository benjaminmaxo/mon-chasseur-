/*
** EPITECH PROJECT, 2025
** my_strncat
** File description:
** RTFM
*/

#include <stddef.h>
#include "./my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int len_dest = my_strlen(dest);
    int len_tot = len_dest + my_strlen(src);
    int i = nb;
    int j = 0;

    while (i != len_tot){
        dest[len_dest + j] = src[i];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}
