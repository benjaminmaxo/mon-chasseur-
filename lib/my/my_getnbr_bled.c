/*
** EPITECH PROJECT, 2025
** zpinvz
** File description:
** vzevzeo
*/

#include <stdio.h>
#include "./my.h"

int my_getnbr_bled(char *str)
{
    int res = 0;
    int i = 0;
    int added = 0;
    
    while (str[i]){
        if (added > 0){
            res *= 10;
            res += str[i] - 48;
        } else {
            res += str[i] - 48;
            added += 1;
        }
        i++;
    }
}
