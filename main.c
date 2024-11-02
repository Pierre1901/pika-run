/*
** Pika Run
** File description:
** main.c
*/

#include "my.h"

void show_help(void)
{
    puts("ceci est un jeu spécialement pour toi mon coeur <3\nla règle est simple ! \nALLER LE PLUS LOIN POSSIBLE \nUtilise [ESPACE] pour sauter");
}

int main(int argc, char **argv)
{
    if (argc == 2 && strcmp(argv[1], "-h") == 0) {
        show_help();
        return 0;
    }
    if (argc != 1)
        return 1;
    creator_t *button = init_button();
    create_all_buttons(button);
    init_window(button);
}