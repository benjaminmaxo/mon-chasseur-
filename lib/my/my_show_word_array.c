/*
** EPITECH PROJECT, 2025
** my show to word array
** File description:
** displays the content of an array of words
*/

#include <unistd.h>
#include "./my.h"

int my_show_word_array(char *const *tab)
{
    int i = 0;
    int j = 0;

    while (tab[i]){
        my_putstr(tab[i]);
        my_putchar('\n');
        i++;
    }
    return 0;
}
