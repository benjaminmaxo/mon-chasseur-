/*
** EPITECH PROJECT, 2025
** my_revstr
** File description:
** reverse a character chaine
*/

static int my_strlene(char *str)
{
    int i = 0;

    while (str[i])
        i++;
    return i;
}

char *my_revstr(char *str)
{
    char swap;
    int i = 0;
    int len = (my_strlene(str) - 1);

    while (i < len){
        swap = str[i];
        str[i] = str[len];
        str[len] = swap;
        i++;
        len--;
    }
    return str;
}
