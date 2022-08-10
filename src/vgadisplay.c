#include "vgadisplay.h"
/* Screen size. */
#define RESOLUTION_X 320
#define RESOLUTION_Y 240

//colour
#define WHITE 0xFFFF
#define YELLOW 0xFFE0
#define RED 0xF800
#define GREEN 0x07E0
#define BLUE 0x001F
#define CYAN 0x07FF
#define MAGENTA 0xF81F
#define GREY 0xC618
#define PINK 0xFC18
#define ORANGE 0xFC00

/* case 1-14: title and buttons
*  case 2x: fireworks
*  case 3x: numbers
*  case 4x: new number enter by user
*/
void plot_image(int name, int x, int y) {
	volatile int* pixel_ctrl_ptr = (int*)0xFF203020;
	*(pixel_ctrl_ptr + 1) = 0xC8000000;
	int i, j;
	switch (name)
	{
	case 1: //title
		//
		break;
	case 2: //lose
		//
		break;
	case 3: //back arrow
		//
		break;
	case 4: //wrong cross
		//
		break;
	case 5: //easy
		//
		break;
	case 6://expert
		//
		break;
	case 7://medium
		//
		break;
	case 8://eazy press
		//
		break;
	case 9://expert press
		//
		break;
	case 10: //medium press
		//
		break;
	case 11: //help
		//
		break;
	case 12: //help press
		//
		break;
	case 13: //new game
		//
		break;
	case 14: //new game press
		//
		break;

	case 15: //check
		//
		break;

	case 16: //rule
		//
		break;

	case 21:
		//
		break;
	case 22:
		//
		break;
	case 23:
		//
		break;
	case 24:
		//
		break;
	case 25:
		//
		break;
	case 26:
		//
		break;
	case 27:
		//
		break;
	case 28:
		//
		break;

	case 31:
		//
		break;
	case 32:
		//
		break;
	case 33:
		//
		break;
	case 34:
		//
		break;
	case 35:
		//
		break;
	case 36:
		//
		break;
	case 37:
		//
		break;
	case 38:
		//
		break;
	case 39:
		//
		break;

	case 41:
		//
		break;
	case 42:
		//
		break;
	case 43:
		//
		break;
	case 44:
		//
		break;
	case 45:
		//
		break;
	case 46:
		//
		break;
	case 47:
		//
		break;
	case 48:
		//
		break;
	case 49:
		//
		break;
	default:
		break;
	}


}

void plot_pixel(int x, int y, short int line_color)
{
	*(short int*)(pixel_buffer_start + (y << 10) + (x << 1)) = line_color;
}

void draw_line(int a, int b1, int b2, bool horziontal, short int colour) {
//

}

void clear_screen() {
//
}

void clear_part(int x1, int y1, int x2, int y2) {
//
}

void wait_for_vsync() {
//
}

void draw_home() {
//
}

void draw_mode() {
//
}

void fireworks() {
//
}

void lose_game(int* x, int* y, int* move_x, int* move_y) {
//

}

void draw_board() {
//
}

int checkButton() {
//
}
