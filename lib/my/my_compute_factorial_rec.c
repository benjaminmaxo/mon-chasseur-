/*
** EPITECH PROJECT, 2025
** my_compute_factorial_rec
** File description:
** return_the_factorial_of_the_nuber
*/

int my_compute_factorial_rec(int nb)
{
    if (nb == 0)
        return 1;
    if (nb > 12)
        return 0;
    return nb * my_compute_factorial_rec(nb - 1);
}
