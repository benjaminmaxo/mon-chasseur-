/*
** EPITECH PROJECT, 2025
** my_print_revalpha
** File description:
** alphabet reverse
*/
#include <unistd.h>
#include "./my.h"

int my_print_revalpha(void)
{
    int i = 122;

    while (i != 96){
        my_putchar(i);
        i -= 1;
    }
    return (0);
}
