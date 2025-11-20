/*
** EPITECH PROJECT, 2025
** my H
** File description:
** lib
*/

#ifndef MY_H_
    #define MY_H_
    #define ABS(nb) (nb < 0) ? (-nb) : (nb)
    #include <stdint.h>

void my_putchar(char);
int my_isneg(int);
void my_putnbr(int64_t);
void my_swap(int *, int *);
int my_putstr(char const *);
int my_strlen(char const *);
int my_getnbr(char const *);
void my_sort_int_array(int *, int);
int my_compute_power_rec(int, int);
int my_compute_square_root(int);
int my_is_prime(int);
int my_find_prime_sup(int);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *, char const *, int);
char *my_revstr(char *);
char *my_strstr(char *, char const *);
int my_strcmp(char const *, char const *);
int my_strncmp(char const *, char const *, int);
char *my_strupcase(char *);
char *my_strlowcase(char *);
char *my_strcapitalize(char *);
int my_str_isalpha(char const *);
int my_str_isnum(char const *);
int my_str_islower(char const *);
int my_str_isupper(char const *);
int my_str_isprintable(char const *);
int my_showstr(char const *);
int my_showmem(char const *, int);
char *my_strcat(char *, char const *);
char *my_strncat(char *, char const *, int);
void my_putfloat(double);
void my_putscience(double);
void my_put_scientific(double);
int int_len(int64_t nb, int roll);
void my_put_scientific_maj(double);
int my_printf(char const *format, ...);
void chose_type(double);
void chose_type_maj(double);
int my_put0(unsigned int);
int my_put_nbr_octa(unsigned int);
unsigned int my_put_nbr_hexa_maj(unsigned int);
unsigned int my_put_nbr_hexa_min(unsigned int);
unsigned int my_put_nbr_unsigned(unsigned int);
char **my_str_to_word_array(char *, char);
int my_show_word_array(char *const *);
void free_array(char **);

#endif /* MY_H_ */
