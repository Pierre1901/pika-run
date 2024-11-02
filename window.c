/*
** Pika run
** Angeline
** File description:
** window.c
*/

#include "my.h"

int init_window(creator_t *button)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow *window = sfRenderWindow_create(mode, "Pika Run", sfResize | sfClose, NULL);
    sfEvent event;
    init_play_button_rec(button);
    int game = 0;

    if (!window)
        return 84;
    while(sfRenderWindow_isOpen(window)){
        while(sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
            handle_event_in_menu(&event, window, button, &game);

        }
        if (game)
            return 0;

        sfRenderWindow_clear(window, sfWhite);
        draw_button(button, window);
        sfRenderWindow_display(window);
    }

    sfRenderWindow_destroy(window);
    return 0;
}