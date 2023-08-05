#include <allegro.h>
#define MAXFILAS 20 //eje y
#define MAXCOLS  31 //eje x

BITMAP *buffer;
BITMAP *roca;


char mapa[MAXFILAS][MAXCOLS] = {
  "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX",
  "X  o |o o o XXXXX o o o| o  X",
  "X XXX XXXXX XXXXX XXXXX XXX X",
  "XoXXX XXXXX XXXXX XXXXX XXXoX",
  "X      o|o   o o   o|o      X",
  "XoXXXoXX XXXXXXXXXXX XXoXXXoX",
  "X    |XX    |XXX|    XX     X",
  "XoXXXoXXXXXX XXX XXXXXXoXXXoX",
  "X XXXoXX ooo|ooo|ooo XXoXXX X",
  " o   |XX XXXXXXXXXXX XX|   o ",
  "X XXXoXX XXXXXXXXXXX XXoXXX X",
  "XoXXXoXX oo |ooo|ooo XXoXXXoX",
  "X XXXoXXXXXX XXX XXXXXXoXXX X",
  "X     XX     XXX     XX     X",
  "X XXXoXX XXXXXXXXXXX XXoXXX X",
  "XoXXX| o| o o o o o |o |XXXoX",
  "X XXXoXXXX XXXXXXXX XXX XXX X",
  "XoXXXoXXXX          XXX XXXoX",
  "X  o |o o  XXXXXXXX o o| o  X",
  "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX",
};

void dibujar_mapa(){
	int row,col;
	
	for (row = 0; row < MAXFILAS; row++){
		for(col = 0; col < MAXCOLS; col++){
			if(mapa[row][col] == 'X'){
				draw_sprite(buffer, roca, col*30, row*30);	
			};	
		};	
	};
};

void pantalla(){
	blit(buffer,screen,0,0,0,0,880,600);	
};

int main() {
	allegro_init();
	install_keyboard();
	
	set_color_depth(32);
	set_gfx_mode(GFX_AUTODETECT_WINDOWED, 880, 600, 0, 0);
	
	buffer = create_bitmap(880,600);
	roca = load_bitmap("roca.bmp",NULL);
	
	while(!key[KEY_ESC]){
		dibujar_mapa();
		pantalla();
	};
}
END_OF_MAIN();


