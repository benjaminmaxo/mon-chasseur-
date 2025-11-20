/*
** EPITECH PROJECT, 2025
** for
** File description:
** ceci
*/

#ifndef STRUCTSPRITE_H_
    #define STRUCTSPRITE_H_
    #include <SFML/Graphics.h>

struct sprites {
    sfSprite *sprite;
};

int event_wheel(sfRenderWindow *, sfSprite *);

#endif    /* STRUCTSPRITE_H_ */
