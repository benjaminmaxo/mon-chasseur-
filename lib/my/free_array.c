/*
** EPITECH PROJECT, 2025
** read by
** File description:
** cecilia
*/

#include <stdlib.h>

void free_array(char **array)
{
    for (int i = 0; array[i];i++)
        free(array[i]);
    free(array);
}
