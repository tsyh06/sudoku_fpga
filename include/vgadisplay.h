#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "processor.h"
#include "global.h"

extern volatile int pixel_buffer_start;


void plot_image(int name, int x, int y);
void plot_pixel(int x, int y, short int line_color);
void draw_line(int a, int b1, int b2, bool horziontal, short int colour);
void clear_screen();
void clear_part(int x1, int y1, int x2, int y2);
void wait_for_vsync();
void draw_home();
void draw_mode();
void fireworks();
void lose_game(int* x, int* y, int* move_x, int* move_y);
void draw_board();
int checkButton();
