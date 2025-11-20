/*
** EPITECH PROJECT, 2025
** my_str_isaplpha
** File description:
** read the man
*/

#include "./my.h"

int my_str_isaplpha(char const *str)
{
    int n = my_strlen(str);

    for (int i = 0; i < n; i++){
        if (!((65 <= str[i] && str[i] <= 90)))
            return 0;
        if (((97 <= str[i] && str[i] <= 122)))
            return 0;
    }
    return 1;
}
