/*
** EPITECH PROJECT, 2025
** my_print_alpha
** File description:
** print the alphabet
*/

#include <unistd.h>
#include "./my.h"

int my_print_alpha(void)
{
    int i = 97;

    while (i != 123) {
        my_putchar(i);
        i += 1;
    }
    return (0);
}
