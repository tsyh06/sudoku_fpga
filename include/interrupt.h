#include <stdio.h>
#include "address_map_arm.h"


extern volatile unsigned char keyboard_input = 0;
extern volatile int input_num = -1; // initialized with an invalid num first
extern volatile int left_click = 0;
extern volatile unsigned short mouse_x = 0; // x coordinate of the mouse
extern volatile unsigned short mouse_y = 0; // y coordinate of the mouse
extern volatile signed short temp_x = 0;
extern volatile signed short temp_y = 0;

void disable_A9_interrupts();
void set_A9_IRQ_stack();
void enable_A9_interrupts();
void config_GIC();
void config_interrupt(int N, int CPU_target);
void config_keyboard();
void config_mouse();
void reset_mouse();

void keyboard_ISR();
void mouse_ISR();
