#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>

int main() {
    if (!al_init()) return -1;
    al_init_primitives_addon();

    ALLEGRO_DISPLAY* display = al_create_display(800, 600);
    if (!display) return -1;

    al_clear_to_color(al_map_rgb(255, 255, 255)); // background

    // House body - rectangle
    al_draw_filled_rectangle(300, 300, 500, 500, al_map_rgb(200, 0, 0));

    // Roof - triangle
    al_draw_filled_triangle(300, 300, 400, 200, 500, 300, al_map_rgb(100, 50, 0));

    // Door - makes arectangle
    al_draw_filled_rectangle(370, 400, 430, 500, al_map_rgb(80, 40, 0));

    // Window - makes a circle
    al_draw_filled_circle(350, 350, 20, al_map_rgb(0, 0, 255));

    al_flip_display(); // show it
    al_rest(5); // wait 5 seconds then goes away

    al_destroy_display(display);
    return 0;
}
