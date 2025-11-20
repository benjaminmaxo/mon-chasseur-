/*
** EPITECH PROJECT, 2025
** put nbr long long
** File description:
** put nbr long mais au lieu de prendre des long int ça prend des longlong
*/

#include <unistd.h>
#include "./my.h"

long long int my_put_nbr_long_long(long long int nb)
{
    char b;

    if (nb > 0){
        b = ((nb % 10) + 48);
        my_put_nbr_long_long(nb / 10);
        my_putchar(b);
    }
    if (nb < 0){
        my_putchar('-');
        nb = nb * -1;
        my_put_nbr_long_long(nb);
    }
    return 0;
}
