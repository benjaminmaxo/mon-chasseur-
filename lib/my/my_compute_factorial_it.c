/*
** EPITECH PROJECT, 2025
** my_compute_factorial_it
** File description:
** return the cactorial of a nubmer
*/

int my_compute_factorial_it(int nb)
{
    int start = 1;
    int pas = nb;
    int res = nb;

    if (nb < 0)
        return 1;
    if (nb > 12)
        return 0;
    while (start < pas){
        res = res * start;
        start += 1;
    }
    return res;
}
