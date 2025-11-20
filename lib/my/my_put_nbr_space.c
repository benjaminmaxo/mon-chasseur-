/*
** EPITECH PROJECT, 2025
** flag espace
** File description:
** flag espace
*/

#include <unistd.h>
#include "./my.h"

int my_put_nbr_space(int nb)
{
    char b;

    if (nb > 0){
        my_putchar(' ');
        b = ((nb % 10) + 48);
        my_put_nbr_space(nb / 10);
        my_putchar(b);
    }
    if (nb < 0){
        my_putchar('-');
        nb = nb * -1;
        my_put_nbr_space(nb);
    }
    return 0;
}
