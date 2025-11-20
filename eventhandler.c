/*
** EPITECH PROJECT, 2025
** for
** File description:
** ceci
*/

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System/Vector2.h>
#include <time.h>

#include "./include/my.h"
#include "./include/structsprite.h"
#include "./include/framebuffer.h"

int mouse_on(sfSprite *duck, sfEvent event, sfVector2f *HB_marv, sfVector2i *WD)
{
    if (WD->x > HB_marv->x && WD->x < HB_marv->x + (110) &&
        WD->y > HB_marv->y && WD->y < HB_marv->y + (110))
        sfSprite_setPosition(duck, (sfVector2f){(-110 * 3),
                1080 / 2});
    return 0;
}

int event_wheel(sfRenderWindow *window, sfSprite *duck)
{
    sfEvent event;
    sfVector2f HB_marv = {(sfSprite_getPosition(duck).x),
        (sfSprite_getPosition(duck).y)};
    sfVector2i WD = {sfMouse_getPositionRenderWindow(window).x,
        sfMouse_getPositionRenderWindow(window).y};

    if (sfSprite_getPosition(duck).x > 1920.0)
        sfSprite_setPosition(duck, (sfVector2f){0, 1080 / 2});
    HB_marv = (sfVector2f){(sfSprite_getPosition(duck).x),
        (sfSprite_getPosition(duck).y)};
    WD = (sfVector2i){(sfMouse_getPositionRenderWindow(window).x),
        (sfMouse_getPositionRenderWindow(window).y)};
    while (sfRenderWindow_pollEvent(window, &event)){
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
        if (event.type == sfEvtMouseButtonPressed){
            mouse_on(duck, event, &HB_marv, &WD);
        }
    }
    return 0;
}
