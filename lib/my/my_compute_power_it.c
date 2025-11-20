/*
** EPITECH PROJECT, 2025
** my_compute_power_it
** File description:
** function power
*/

int my_compute_power_it(int nb, int p)
{
    int res = 1;
    int stop = p;
    int i = 0;

    while (i != stop){
        res = res * nb;
        if (res > 2147483647)
            return 0;
        i++;
    }
    return res;
}
