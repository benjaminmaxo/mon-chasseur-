/*
** EPITECH PROJECT, 2025
** meme chose que le put nbr mais pour les short short
** File description:
** r
*/

#include <unistd.h>
#include "./my.h"

short int my_put_nbr_short_short(short int nb)
{
    char b;

    if (nb > 0){
        b = ((nb % 10) + 48);
        my_put_nbr_short_short(nb / 10);
        my_putchar(b);
    }
    if (nb < 0){
        my_putchar('-');
        nb = nb * -1;
        my_put_nbr_short_short(nb);
    }
    return 0;
}
