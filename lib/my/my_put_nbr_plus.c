/*
** EPITECH PROJECT, 2025
** my_put_nbr_plus
** File description:
** pour le print f %+
*/

#include <unistd.h>
#include "./my.h"

int my_put_nbr_plus(int nb)
{
    char b;

    if (nb > 0){
        my_putchar('+');
        b = ((nb % 10) + 48);
        my_put_nbr_plus(nb / 10);
        my_putchar(b);
    }
    if (nb < 0){
        my_putchar('-');
        nb = nb * -1;
        my_put_nbr_plus(nb);
    }
    return 0;
}
