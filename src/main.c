#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "processor.h"
#include "address_map_arm.h"
#include "interrupt.h"
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

volatile int pixel_buffer_start;

/*******************************
* full code at https://drive.google.com/file/d/1K-S1KLoBfYj3WHoUh6Pk2IfDN84gmUdT/view?usp=sharing
*******************************/

int main(int argc, char** argv)
{
	srand(time(NULL));

	volatile bool home = true, choose_mode = false, play = false, checking = false, rule = false, refresh = false;
	volatile bool play_win = false, play_lose = false;
	volatile int mistake = 0;

	volatile int* pixel_ctrl_ptr = (int*)0xFF203020;

	// set front pixel buffer to start of FPGA On-chip memory 
	*(pixel_ctrl_ptr + 1) = 0xC8000000;
	// swap the front/back buffers to set the front buffer location 
	wait_for_vsync();
	/* initialize a pointer to the pixel buffer, used by drawing functions */
	pixel_buffer_start = *pixel_ctrl_ptr;
	clear_screen(); // pixel_buffer_start points to the pixel buffer
	/* set back pixel buffer to start of SDRAM memory */
	*(pixel_ctrl_ptr + 1) = 0xC0000000;
	pixel_buffer_start = *(pixel_ctrl_ptr + 1);
	clear_screen(); // pixel_buffer_start points to the pixel buffer


	disable_A9_interrupts();
	set_A9_IRQ_stack(); // initialize the stack pointer for IRQ mode
	config_GIC(); // configure the general interrupt controller
	config_keyboard(); // configure the PS/2 keyboard
	config_mouse(); // configure the PS/2 mouse
	reset_mouse();

	enable_A9_interrupts(); // enable interrupts

	draw_home();

	volatile int x = rand() % 111;
	volatile int y = rand() % 173;
	volatile int move_x = (rand() % 2) * 2 - 1;
	volatile int move_y = (rand() % 2) * 2 - 1;

	while (1) {
		plot_pixel(mouse_x, mouse_y, 0x0);


		if (home) {
			if (left_click) {

			}
		}
		else if (choose_mode) {
			if (!refresh) {
				draw_mode();
				refresh = true;
			}
			if (left_click) {

				//

			}
		}
		else if (play) {
			if (!refresh) {
				clear_screen();
				draw_board();
				refresh = true;
			}
			if (left_click) {


				//
			}
		}
		else if (checking) {
			mistake = checkButton();
			if (mistake == 0) {
				play_win = true;
				checking = false;
			}
			else if (left_click) {
				clear_screen();
				play_lose = true;
				checking = false;
			}
		}
		else if (play_win) {
			fireworks();
			if (left_click) {
				draw_home();
				home = true;
				play_win = false;
			}
		}
		else if (play_lose) {
			//
			wait_for_vsync();
			if (left_click) {
				draw_home();
				home = true;
				play_lose = false;
			}
		}
		else if (rule) {
			if (!refresh) {
				clear_screen();
				plot_image(3, 0, 0);
				plot_image(16, 36, 41);
				refresh = true;
			}

			if (left_click) {
				//
			}
		}
	}

}

