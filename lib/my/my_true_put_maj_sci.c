/*
** EPITECH PROJECT, 2025
** zbzbzfb
** File description:
** zbzbzdb
*/

#include "./my.h"
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stddef.h>

static char *put_coma(int coma, char *the_string, int *i)
{
    if (coma == 1){
        *i += 1;
        the_string[*i] = '.';
    }
    return the_string;
}

static char *base_nbr_into_str(int64_t nb, int coma, int i, char *the_string)
{
    uint64_t a;

    if (nb < 0)
        base_nbr_into_str(-nb, coma, i, the_string);
    if (nb >= 10){
        a = nb % 10;
        nb = nb / 10;
        the_string[i] = 48 + a;
        the_string = put_coma(coma, the_string, &i);
        the_string = base_nbr_into_str(nb, coma - 1, i + 1, the_string);
        return the_string;
    }
    if (nb < 10){
        the_string[i] = 48 + nb;
    }
    return the_string;
}

static char *scientific(int64_t nb, int roll_max, int i, char *the_string)
{
    uint64_t a;

    if (nb < 0){
        my_putchar('-');
        scientific(-nb, roll_max, i, the_string);
        return the_string;
    }
    if (nb >= 10){
        a = nb % 10;
        nb = nb / 10;
        the_string[i] = 48 + a;
        scientific(nb, roll_max + 1, i + 1, the_string);
        return the_string;
    }
    if (nb < 10){
        the_string[i] = '.';
        the_string[i + 1] = 48 + nb;
    }
    return the_string;
}

static int where_coma(char *the_string)
{
    int i = 0;

    while (the_string[i]){
        if (the_string[i] == '.')
            return i;
        i++;
    }
    return i;
}

static int exposant(int coma1, int coma2)
{
    int res = coma1 - coma2;

    if (res <= 10)
        my_putchar('0');
    return res;
}

static void minus_plus(int64_t the_comparant)
{
    my_putchar('E');
    if (the_comparant < 1)
        my_putchar('-');
    else
        my_putchar('+');
}

static int64_t int_nb(double nb, int *expoffset)
{
    if (nb < 1){
        while (nb < 100000000){
            nb *= 10;
            expoffset += 1;
        }
    }
    if (nb > 1)
        nb *= 1000000;
    return nb;
}

void my_put_scientific_maj(double nb)
{
    int64_t my_int = 0;
    int64_t the_comparant = (int64_t) nb;
    int roll_max = 0;
    char *str_base = NULL;
    char *str_scic = malloc(sizeof(char) * 9);
    int i = 0;
    int coma = 6;
    int expoffset = 0;
    int expo = 0;

    nb = int_nb(nb, &expoffset);
    my_int = (int64_t) nb;
    str_base = malloc((sizeof(char) * int_len(my_int, 0)) + 2);
    str_base = my_revstr(base_nbr_into_str(my_int, coma, i, str_base));
    str_scic = my_revstr(scientific(my_int, roll_max, i, str_scic));
    str_scic[8] = '\0';
    my_putstr(str_scic);
    minus_plus(the_comparant);
    expo = exposant(where_coma(str_base), where_coma(str_scic)) - expoffset;
    my_putnbr(ABS(expo));
}
