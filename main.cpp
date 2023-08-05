#include <allegro.h>

int main() {
	allegro_init();
	install_keyboard();
	
	set_color_depth(32);
	set_gfx_mode(GFX_AUTODETECT_WINDOWED, 640, 700, 0, 0);
	
	BITMAP *buffer = create_bitmap(640,700);
}
END_OF_MAIN();


