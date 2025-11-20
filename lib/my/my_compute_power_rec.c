/*
** EPITECH PROJECT, 2025
** my_compute_power_rec
** File description:
** return the power
*/

int my_compute_power_rec(int nb, int p)
{
    if (p == 1)
        return nb;
    if (nb > 2147483647)
        return 0;
    return nb * my_compute_power_rec(nb, p - 1);
}
