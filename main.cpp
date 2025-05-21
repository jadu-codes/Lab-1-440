#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>

int main() {
    if (!al_init()) return -1;
    al_init_primitives_addon();

    ALLEGRO_DISPLAY* display = al_create_display(800, 600);
    al_clear_to_color(al_map_rgb(255, 255, 255));

    al_draw_line(100, 100, 700, 100, al_map_rgb(255, 0, 0), 3.0);

    al_flip_display();
    al_rest(5);

    al_destroy_display(display);
    return 0;
}
