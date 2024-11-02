/*
** EPITECH PROJECT, 2024
** B-MUL-200-LIL-2-1-mypaint-rafael.vandaepel
** File description:
** my.h
*/

#include "stdlib.h"
#include "stdio.h"
#include "SFML/Graphics.h"
#include "unistd.h"
#include "time.h"
#include "string.h"

#ifndef MY_H
#define MY_H

#define MAX 10

typedef struct button_s {
    sfRectangleShape *rect;
    sfBool (*is_clicked)(struct button_s *, sfMouseButtonEvent);
    sfBool (*is_hover)(struct button_s *, sfMouseMoveEvent);
    sfTexture *texture;
    int is_actif;
    int view;
} button_s;


typedef struct creator_t {
    button_s *button[MAX];
    int count;
} creator_t;


//window.c
int init_window(creator_t *button);

//creator.c
creator_t *init_button(void);
sfBool is_button_clicked(button_s *button, sfMouseButtonEvent event);
sfBool is_button_hover(button_s *button, sfMouseMoveEvent event);
void add_button(creator_t *button_creator, button_s *button);
void draw_button(creator_t *button_creator, sfRenderWindow *window);
void destroy_button(creator_t *button_creator);
void create_and_add_button(creator_t *button_creator,
                           sfVector2f position, sfVector2f size);
int create_all_buttons(creator_t *button_creator);


//handle_event.c
void handle_event_in_menu(sfEvent *event, sfRenderWindow *window, creator_t *button, int *game);

#endif
