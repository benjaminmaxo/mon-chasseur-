/*
** EPITECH PROJECT, 2025
** my_put_nbr_hexa_min
** File description:
** c'est un my_put_nbr mais celui-la est pour les nb en hexa min
*/

#include <unistd.h>
#include "my.h"
#include <stdio.h>

unsigned int my_put_nbr_hexa_min(unsigned int nb)
{
    char b;

    if (nb > 0){
        b = ((nb % 16) + 48);
        if (b > 57)
            b = b + 39;
        my_put_nbr_hexa_min(nb / 16);
        my_putchar(b);
    }
    return 0;
}
