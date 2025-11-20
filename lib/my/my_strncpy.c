/*
** EPITECH PROJECT, 2025
** my_strncpy
** File description:
** copy a string to a certain point
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (i < n){
        dest[i] = src[i];
        i++;
    }
    return dest;
}
