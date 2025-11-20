/*
** EPITECH PROJECT, 2025
** my_put nbr long
** File description:
** my_putnbr mais au lieu de prendre des int ça prend des longint
*/

#include <unistd.h>
#include "./my.h"

long int my_put_nbr_long(long int nb)
{
    char b;

    if (nb > 0){
        b = ((nb % 10) + 48);
        my_put_nbr_long(nb / 10);
        my_putchar(b);
    }
    if (nb < 0){
        my_putchar('-');
        nb = nb * -1;
        my_put_nbr_long(nb);
    }
    return 0;
}
