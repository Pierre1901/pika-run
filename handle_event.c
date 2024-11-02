/*
** Pika Run
** Angeline
** File description:
** handle_event.c
*/

#include "my.h"

void handle_event_in_menu(sfEvent *event, sfRenderWindow *window, creator_t *button_creator, int *game)
{
    if (event->type == sfEvtMouseButtonPressed) {
        for (int i = 0; i < button_creator->count; i++) {
            if (button_creator->button[0]->is_clicked(button_creator->button[0], event->mouseButton)) {
                *game = 1;
                sfRectangleShape_setOutlineThickness(button_creator->button[i]->rect, 1.0f);
            }
        }
    }
    if (event->type == sfEvtMouseMoved) {
        for (int i = 0; i < button_creator->count; i++) {
            if (button_creator->button[i]->is_hover(button_creator->button[i], event->mouseMove))
                sfRectangleShape_setOutlineThickness(button_creator->button[i]->rect, 3.0f);
            else {
                sfRectangleShape_setOutlineThickness(button_creator->button[i]->rect, 1.0f);
            }

        }
    }
}