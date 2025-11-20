/*
** EPITECH PROJECT, 2025
** zoeiphgzobi
** File description:
** kgsuefozeug
*/

#include "./my.h"
#include <stdarg.h>
#include <stdio.h>

static void type2(char const *format, int i, va_list lst)
{
    if (format[i + 1] == '%')
        my_putchar('%');
    if (format[i + 1] == 'o')
        my_put_nbr_octa(va_arg(lst, int));
    if (format[i + 1] == 'u')
        my_put_nbr_unsigned(va_arg(lst, int));
    if (format[i + 1] == 'x')
        my_put_nbr_hexa_min(va_arg(lst, int));
    if (format[i + 1] == 'X')
        my_put_nbr_hexa_maj(va_arg(lst, int));
}

static void type(char const *format, int i, va_list lst)
{
    if (format[i + 1] == 's')
        my_putstr(va_arg(lst, char *));
    if (format[i + 1] == 'c')
        my_putchar((char) va_arg(lst, int));
    if (format[i + 1] == 'i')
        my_putnbr(va_arg(lst, int));
    if (format[i + 1] == 'd')
        my_putnbr(va_arg(lst, int));
    if (format[i + 1] == 'f' || format[i + 1] == 'F')
        my_putfloat((double) va_arg(lst, double));
    if (format[i + 1] == 'e')
        my_put_scientific((double) va_arg(lst, double));
    if (format[i + 1] == 'E')
        my_put_scientific_maj((double) va_arg(lst, double));
    if (format[i + 1] == 'g')
        chose_type((double) va_arg(lst, double));
    if (format[i + 1] == 'G')
        chose_type_maj((double) va_arg(lst, double));
    type2(format, i, lst);
}

static int length_modifier(char const *format, int i, va_list lst)
{
    if (format[i + 1] == 'h' && format[i + 2] == 'h')
        i += 2;
    if (format[i + 1] == 'l' && format[i + 2] == 'l')
        i += 2;
    if (format[i + 1] == 'h')
        i++;
    if (format[i + 1] == 'l')
        i++;
    if (format[i + 1] == 'L')
        i++;
    if (format[i + 1] == 'j')
        i++;
    if (format[i + 1] == 't')
        i++;
    return i;
}

static int precision(char const *format, int i, va_list lst)
{
    if (format[i + 1] == '.' && format[i + 2] >= '0' && format[i + 2] <= '9'){
        if (format[i + 1] == '.' && format[i + 2] == '0'){
            i += 2;
            i = length_modifier(format, i, lst);
            return i;
        }
        i += 2;
    }
    return i;
}

static int flag(char const *format, int i, va_list lst)
{
    if (format[i + 1] == '#'){
        i++;
        precision(format, i, lst);
    }
    return i;
}

int my_printf(char const *format, ...)
{
    va_list lst;

    va_start(lst, format);
    for (int i = 0; format[i]; i++){
        if (format[i] == '%'){
            i = flag(format, i, lst);
            i = precision(format, i, lst);
            i = length_modifier(format, i, lst);
            type(format, i, lst);
            i++;
        } else {
            my_putchar(format[i]);
        }
    }
    va_end(lst);
    return 0;
}
