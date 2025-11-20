/*
** EPITECH PROJECT, 2025
** zrg
** File description:
** zrg
*/

#include "./my.h"
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>

static char *putcoma(int coma, char *the_string, int *i)
{
    if (coma == 1){
        *i += 1;
        the_string[*i] = '.';
    }
    return the_string;
}

static char *nbr_into_str(int64_t nb, int coma, int i, char *the_string)
{
    uint64_t a;

    if (nb < 0)
        nbr_into_str(-nb, coma, i, the_string);
    if (nb >= 10){
        a = nb % 10;
        nb = nb / 10;
        the_string[i] = 48 + a;
        the_string = putcoma(coma, the_string, &i);
        the_string = nbr_into_str(nb, coma - 1, i + 1, the_string);
        return the_string;
    }
    if (nb < 10){
        the_string[i] = 48 + nb;
    }
    the_string[i + 1] = '\0';
    return the_string;
}

static int64_t int_nb(double nb)
{
    if (nb < 1){
        while (nb < 100000000){
            nb *= 10;
        }
    }
    if (nb > 1)
        nb *= 1000000;
    return nb;
}

static char *nbr_string(double nb)
{
    uint64_t my_int = 0;
    char *str = NULL;
    int i = 0;
    int coma = 6;
    int pass = 0;

    if (nb < 1){
        nb += 1;
        pass = 1;
    }
    nb = int_nb(nb);
    my_int = (uint64_t) nb;
    str = malloc((sizeof(char *) * int_len(my_int, 0)) + 2);
    str = my_revstr(nbr_into_str(my_int, coma, i, str));
    if (pass == 1)
        str[0] = '0';
    return str;
}

static int point_to_end(char *str, int j)
{
    while (str[j]){
        if (str[j] >= 49 && str[j] <= 57)
            return j;
        j++;
    }
    return j;
}

int too_wide(double nb)
{
    int64_t maxvalup = 9223372036854775800;
    int64_t maxvaldown = -9223372036854775800;

    if (nb > maxvalup || nb < maxvaldown)
        return 1;
    return 0;
}

void call(double nb, int j)
{
    if (nb < 0){
        if (j > 6)
            my_put_scientific(-nb);
        else
            my_putfloat(-nb);
    } else {
        if (j > 6)
            my_put_scientific(nb);
        else
            my_putfloat(nb);
    }
}

void call_maj(double nb, int j)
{
    if (nb < 0){
        if (j > 6)
            my_put_scientific(-nb);
        else
            my_putfloat(-nb);
    } else {
        if (j > 6)
            my_put_scientific_maj(nb);
        else
            my_putfloat(nb);
    }
}

void chose_type(double nb)
{
    char *str = NULL;
    int i = 0;
    int j = 0;

    if (too_wide(nb) == 1){
        write(2, "infinit", 7);
        return;
    }
    str = nbr_string(nb);
    while (str[i]){
        if (str[i] == '.' && nb < 1){
            j = i;
            j = point_to_end(str, j);
        }
        i++;
    }
    call(nb, j);
}

void chose_type_maj(double nb)
{
    char *str;
    int i = 0;
    int j = 0;

    if (too_wide(nb) == 1){
        write(2, "infinit", 7);
        return;
    }
    my_strcpy(str, nbr_string(nb));
    while (str[i]){
        if (str[i] == '.' && nb < 1){
            j = i;
            j = point_to_end(str, j);
        }
        i++;
    }
    call_maj(nb, j);
}
