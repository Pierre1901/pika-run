/*
** Pika run
** Angeline
** File description:
** init_rec.c
*/

#include "my.h"

void init_play_button_rec(creator_t *button)
{
    button->button[0]->texture =  sfTexture_createFromFile("res/play_button.png", NULL);
    sfRectangleShape_setTexture(button->button[0]->rect, button->button[0]->texture, sfTrue);
}
