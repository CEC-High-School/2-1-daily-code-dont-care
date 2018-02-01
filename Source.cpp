#include<allegro5\allegro.h>
#include<allegro5/allegro_primitives.h>
#include<iostream>
using namespace std;

int main() {

	ALLEGRO_DISPLAY *display = NULL;

	al_init();

	al_init_primitives_addon();

	display = al_create_display(500, 500);
	al_clear_to_color(al_map_rgb(0, 0, 0));

	al_flip_display();


	al_draw_filled_rounded_rectangle(50, 50, 450, 450, 50, 60, al_map_rgb(0, 255, 855));
	al_draw_line(250, 0, 250, 450, al_map_rgb(0, 0, 0), 50);
	al_draw_filled_ellipse(255, 500, 400, 400, al_map_rgb(500, 236, 365));
	
	al_flip_display();

	al_rest(10);

	al_destroy_display(display);

	return 0;
}