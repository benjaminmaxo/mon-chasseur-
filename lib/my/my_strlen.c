/*
** EPITECH PROJECT, 2025
** my_strlen
** File description:
** just_a_len_for_str
*/

#include <stddef.h>

int my_strlen(char const *str)
{
    int count = 0;

    if (str == NULL)
        return 0;
    while (str[count]){
        count += 1;
    }
    return count;
}
