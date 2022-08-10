#include "interrupt.h"
/*******************************
* full code at https://drive.google.com/file/d/1842Y5Qt3fQgoy4brRb4W8Kj3wfP6stGu/view?usp=sharing
*******************************/

/*********************************************************************************
 * Global variables
 ********************************************************************************/
volatile unsigned char keyboard_input = 0;
volatile int input_num = -1; // initialized with an invalid num first
volatile int left_click = 0;
volatile unsigned short mouse_x = 0; // x coordinate of the mouse
volatile unsigned short mouse_y = 0; // y coordinate of the mouse
volatile signed short temp_x = 0;
volatile signed short temp_y = 0;

/*********************************************************************************
 * References
 ********************************************************************************/

 // [1] Using the ARM Generic Interrupt Controller. Altera Corporation, 2015.
 // [2] "PS/2 Controller on DE1-SoC Computer", Www-ug.eecg.utoronto.ca, 2022. [Online]. 
 //		Available: http://www-ug.eecg.utoronto.ca/desl/nios_devices_SoC/dev_ps2.html. [Accessed: 14- Apr- 2022].
 // [3] DE1-SoC Computer System with ARM* Cortex* A9. Intel Corporation - FPGA University Program, 2017.
 // [4] "PS/2 Mouse - OSDev Wiki", Wiki.osdev.org, 2019. [Online]. Available: https://wiki.osdev.org/PS/2_Mouse. [Accessed: 14- Apr- 2022].

 /*********************************************************************************
  * Initialize the exception vector table
  ********************************************************************************/
  // Define the IRQ exception handler
void __attribute__((interrupt)) __cs3_isr_irq(void) {
//
}
// Define the remaining exception handlers
void __attribute__((interrupt)) __cs3_reset(void) {
	while (1);
}
void __attribute__((interrupt)) __cs3_isr_undef(void) {
	while (1);
}
void __attribute__((interrupt)) __cs3_isr_swi(void) {
	while (1);
}
void __attribute__((interrupt)) __cs3_isr_pabort(void) {
	while (1);
}
void __attribute__((interrupt)) __cs3_isr_dabort(void) {
	while (1);
}
void __attribute__((interrupt)) __cs3_isr_fiq(void) {
	while (1);
}

/*
* Turn off interrupts in the ARM processor
*/
void disable_A9_interrupts(void) {
//
}

/*
* Initialize the banked stack pointer register for IRQ mode
*/
void set_A9_IRQ_stack(void) {
//
}
/*
* Turn on interrupts in the ARM processor
*/
void enable_A9_interrupts(void) {
//
}

/*
* Configure the Generic Interrupt Controller (GIC)
*/
void config_GIC(void) {

//
}
/*
* Configure registers in the GIC for an individual Interrupt ID. We
* configure only the Interrupt Set Enable Registers (ICDISERn) and
* Interrupt Processor Target Registers (ICDIPTRn). The default (reset)
* values are used for other registers in the GIC
*/
void config_interrupt(int N, int CPU_target) {
//
}

void config_keyboard() {
//
}

void config_mouse() {
//
}

void reset_mouse() {
//
}

void keyboard_ISR() {
//
}

void mouse_ISR() {
//
}
