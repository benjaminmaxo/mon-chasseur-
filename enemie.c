/*
** EPITECH PROJECT, 2025
** for
** File description:
** ceci
*/

int anime_sprite(sfSprite *duck, int *x_pos)
{
    int max_len = 330;
    int add = 110;
    
    if (x_pos + add > 330){
        sfSprite_setTextureRect(duck, {{0, 0}, {110, 100}});
        return 0;
    }
    sfSprite_setTextureRect(duck, {{x_pos + add, 0}, {110, 100}});
    return 0;
}
