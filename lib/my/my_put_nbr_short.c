/*
** EPITECH PROJECT, 2025
** put nbr pour les short
** File description:
** jsp
*/

#include <unistd.h>
#include "./my.h"

long long int my_put_nbr_short(short int nb)
{
    char b;

    if (nb > 0){
        b = ((nb % 10) + 48);
        my_put_nbr_short(nb / 10);
        my_putchar(b);
    }
    if (nb < 0){
        my_putchar('-');
        nb = nb * -1;
        my_put_nbr_short(nb);
    }
    return 0;
}
