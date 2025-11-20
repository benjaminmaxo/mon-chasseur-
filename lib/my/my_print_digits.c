/*
** EPITECH PROJECT, 2025
** my_print_digits
** File description:
** print number 1 to 10
*/
#include <unistd.h>
#include "./my.h"

int my_print_digits(void)
{
    int i = 48;

    while (i != 58){
        my_putchar(i);
        i += 1;
    }
    return (0);
}
