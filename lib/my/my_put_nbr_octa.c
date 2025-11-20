/*
** EPITECH PROJECT, 2025
** my_put_nbr_octa
** File description:
** c'est comme le myputnbr mais la c'est pas en decimal mais en octal
*/

#include <unistd.h>
#include "my.h"
#include <stdio.h>

int my_put_nbr_octa(unsigned int nb)
{
    char b;

    if (nb > 0){
        b = ((nb % 8) + 48);
        my_put_nbr_octa(nb / 8);
        my_putchar(b);
    }
    return 0;
}
