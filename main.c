/*
** EPITECH PROJECT, 2025
** rebe
** File description:
** efbef
*/

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System/Vector2.h>
#include <time.h>

#include "./include/my.h"
#include "./include/framebuffer.h"
#include "./include/structsprite.h"

sfRenderWindow *window_create(sfRenderWindow *window, sfVideoMode *mode)
{
    window = sfRenderWindow_create(*mode, "My_Hunter", sfResize |
        sfClose, NULL);
    if (!window)
        return NULL;
    return window;
}

sfTexture *texture_create(char *imagepath)
{
    sfTexture *texture = sfTexture_createFromFile(imagepath, NULL);

    if (!texture)
        return NULL;
    return texture;
}

int opened_window(sfRenderWindow *window, sfSprite *sprite, sfSprite *duck)
{
    sfClock *clock = sfClock_create();
    float second = 0;
    int x_pos = 0;

    sfSprite_setPosition(duck, (sfVector2f){0, 1080 / 2});
    sfSprite_setScale(duck, (sfVector2f){1, 1});
    sfSprite_setTextureRect(duck, {{0, 0}, {110, 110}});
    while (sfRenderWindow_isOpen(window)){
        second = sfClock_getElapsedTime(clock).microseconds / 1000000.0;
        event_wheel(window, duck);
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        sfRenderWindow_drawSprite(window, duck, NULL);
        if (second > 0.0002){
            anime_sprite(duck, &x_pos);
            sfSprite_move(duck, (sfVector2f){1, 0});
            sfClock_restart(clock);
        }
        sfRenderWindow_display(window);
    }
    return 0;
}

int main(void)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow *window = window_create(window, &mode);
    sfTexture *background = texture_create("./picture/romaricwpp.png");
    sfTexture *mouvable = texture_create("./picture/duck.png");
    sfSprite *sprite = sfSprite_create();
    sfSprite *duck = sfSprite_create();

    sfSprite_setTexture(sprite, background, sfTrue);
    sfSprite_setTexture(duck, mouvable, sfTrue);
    opened_window(window, sprite, duck);
    sfSprite_destroy(sprite);
    sfTexture_destroy(background);
    sfSprite_destroy(duck);
    sfTexture_destroy(mouvable);
    sfRenderWindow_destroy(window);
    return EXIT_SUCCESS;
}
