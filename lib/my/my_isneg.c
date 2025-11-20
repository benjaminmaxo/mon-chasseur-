/*
** EPITECH PROJECT, 2025
** is neg
** File description:
** verify if the number is positive or negative
*/
#include <unistd.h>
#include "./my.h"

int my_isneg(int n)
{
    if (n < 0){
        my_putchar('N');
    } else {
        my_putchar('P');
    }
    return 0;
}
