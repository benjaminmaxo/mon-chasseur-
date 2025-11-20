/*
** EPITECH PROJECT, 2025
** my_evil_str
** File description:
** reverse_the_character_chaine
*/

static int my_strlen_remastered(char const *str)
{
    int count = 0;

    while (str[count] != '\0'){
        count += 1;
    }
    return count;
}

static void my_remastered_swap(char *a, char *b)
{
    char the_swap;
    char my_a = *a;
    char my_b = *b;

    the_swap = my_b;
    my_b = my_a;
    my_a = the_swap;
    *a = my_a;
    *b = my_b;
}

char *my_evil_str(char *str)
{
    int i = 0;
    int end = my_strlen_remastered(str) - 1;

    while (i < end){
        my_remastered_swap(&str[i], &str[end]);
        i += 1;
        end -= 1;
    }
    return str;
}
