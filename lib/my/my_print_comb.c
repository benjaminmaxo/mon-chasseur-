/*
** EPITECH PROJECT, 2025
** my_print_comb
** File description:
** order in assendent order number composed by 3 digits
*/

#include <unistd.h>
#include "./my.h"

static void myputcharmultiple(int nb1, int nb2, int nb3)
{
    my_putchar(nb1 + '0');
    my_putchar(nb2 + '0');
    my_putchar(nb3 + '0');
    if (nb1 == 7 && nb2 == 8 && nb3 == 9){
        return;
    }
    my_putchar(',');
    my_putchar(' ');
}

static int while_of_the_3rd(int nb1, int nb2, int nb3)
{
    while (nb3 != 9){
        nb3++;
        if (nb1 != nb2 && nb1 != nb3 && nb2 != nb3 && nb1 < nb2 && nb2 < nb3){
            myputcharmultiple(nb1, nb2, nb3);
        }
    }
    return 0;
}

static int while_of_the_1st_and_2nd(int nb1, int nb2, int nb3)
{
    while (nb1 != 7){
        nb1++;
        nb2 = 0;
        while (nb2 != 8){
            nb2++;
            nb3 = 0;
            while_of_the_3rd(nb1, nb2, nb3);
        }
    }
    return 0;
}

int my_print_comb(void)
{
    int nb1 = -1;
    int nb2 = -1;
    int nb3 = -1;

    while_of_the_1st_and_2nd(nb1, nb2, nb3);
    return 0;
}
