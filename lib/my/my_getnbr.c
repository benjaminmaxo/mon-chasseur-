/*
** EPITECH PROJECT, 2025
** zpinvz
** File description:
** vzevzeo
*/

#include <stdio.h>
#include "./my.h"

int my_getnbr(char const *str)
{
    int res = 0;
    int i = 0;

    while (str[i]){
        if (str[i] < 48 && str[i] > 57){
            i++;
            continue;
        }
        res *= 10;
        res += str[i] - 48;
        i++;
    }
    return res;
}
