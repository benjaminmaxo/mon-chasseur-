/*
** EPITECH PROJECT, 2025
** kngzze
** File description:
** zegzeg
*/

#include "./my.h"
#include <unistd.h>

void my_putnbr(int64_t i)
{
    uint64_t a;

    if (i < 0){
        my_putchar('-');
        my_putnbr(-i);
        return;
    }
    if (i >= 10){
        a = i % 10;
        i = i / 10;
        my_putnbr(i);
        my_putchar(48 + a);
        return;
    }
    if (i < 10)
        my_putchar(48 + i);
}

static void putcoma(int64_t nb, int coma)
{
    if (coma == 0)
        my_putchar('.');
}

static void my_printfloat(int64_t nb, int coma)
{
    uint64_t a;

    if (nb < 0){
        my_putchar('-');
        my_printfloat(-nb, coma);
        return;
    }
    if (coma >= 0 || nb >= 10){
        a = nb % 10;
        nb = nb / 10;
        my_printfloat(nb, (coma - 1));
        my_putchar(48 + a);
        putcoma(nb, coma);
        return;
    }
    if (nb < 10 && nb != 0)
        my_putchar(48 + nb);
}

void my_putfloat(double nb)
{
    int64_t my_int = 0;
    int coma = 6;
    int64_t mavvalup = 9223372036854775800;
    int64_t maxvaldown = -9223372036854775800;

    nb *= my_compute_power_rec(10, coma);
    my_int = (int64_t) nb;
    if (my_int > mavvalup || my_int < maxvaldown){
        write(2, "infinit", 7);
        return;
    }
    my_printfloat(my_int, coma);
}
