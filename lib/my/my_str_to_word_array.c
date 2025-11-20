/*
** EPITECH PROJECT, 2025
** only
** File description:
** ceci
*/

#include <stddef.h>
#include <stdlib.h>
#include "./my.h"

static char *strdup_type0(char *dest, char *src, int *i, char noe)
{
    int j = 0;

    dest = malloc(sizeof(char) * (my_strlen(src) + 1));
    while (src[*i] != noe){
        dest[j] = src[*i];
        j += 1;
        *i += 1;
    }
    dest[j] = '\0';
    return dest;
}

char **my_str_to_word_array(char *string, char noe)
{
    char **charizard = malloc(sizeof(char *) * my_strlen(string));
    int j = 0;
    int i = 0;

    while (string[i] && my_strlen(string) > i){
        if (string[i] != noe){
            charizard[j] = strdup_type0(charizard[j], string, &i, noe);
            i++;
        }
        j++;
    }
    charizard[j - 1] = NULL;
    return charizard;
}
