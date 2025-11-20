/*
** EPITECH PROJECT, 2025
** my_putstr
** File description:
** print_chained_character
*/

#include "./my.h"

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0'){
        my_putchar(str[i]);
        i += 1;
    }
    return 0;
}
