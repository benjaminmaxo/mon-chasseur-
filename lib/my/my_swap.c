/*
** EPITECH PROJECT, 2025
** my_swap
** File description:
** swap the value of 2 interger
*/

void my_swap(int *a, int *b)
{
    int the_swap;
    int my_a = *a;
    int my_b = *b;

    the_swap = my_b;
    my_b = my_a;
    my_a = the_swap;
    *a = my_a;
    *b = my_b;
}
