/*
** EPITECH PROJECT, 2025
** my_put_nbr_unsigned
** File description:
** c'est le my put nbr mais pour le flag u du my print f
*/

#include <unistd.h>
#include "./my.h"

unsigned int my_put_nbr_unsigned(unsigned int nb)
{
    char b;

    if (nb > 0){
        b = ((nb % 10) + 48);
        my_put_nbr_unsigned(nb / 10);
        my_putchar(b);
    }
    return 0;
}
