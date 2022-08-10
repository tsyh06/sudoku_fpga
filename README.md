# Sudoku

A sudoku game that runs on the FPGA board written in C. This is a collaboration of work of Tracy Sun and Angela Yu.

## Disclaimer of the code

This project is an academic project for ECE243, University of Toronto. Due to Academic Integrity concerns, we cannot share the full version of the code to prevent students from copying. Other are welcome to request the full code.

## Running on the website

The game can be ran on website using [CPUlator](https://cpulator.01xz.net/?sys=arm-de1soc). Please select C as the language.

## Instructions

![sudoku instruction](https://user-images.githubusercontent.com/109006994/183327357-c8969013-b33b-4b9f-9592-7144ed42ef54.jpg)

1. Use keyboard to choose which number to input (valid numbers are 1-9)
2. Use mouse to select a spot on the game board by left-clicking. The number will be filled into that spot after the click.
3. If you want to change one of the filled numbers, repeat steps 1 and 2 on the spot you want to modify
4. Click "Check" botton to compare your answer with the correct solution

## Attribution Table

|**Tasks**|**Contributor**|
| --- | --- |
|Sudoku game algorithm|Tracy|
|VGA display|Tracy, Angela|
|PS/2 Mouse & Keyboard|Angela|
|Test and debug|Tracy, Angela|

## References

[1] Using the ARM Generic Interrupt Controller. Altera Corporation, 2015. 

[2] "PS/2 Controller on DE1-SoC Computer", Www-ug.eecg.utoronto.ca, 2022. [Online]. Available: http://www-ug.eecg.utoronto.ca/desl/nios_devices_SoC/dev_ps2.html. [Accessed: 14- Apr- 2022].

[3] DE1-SoC Computer System with ARM* Cortex* A9. Intel Corporation - FPGA University Program, 2017. 

[4] "PS/2 Mouse - OSDev Wiki", Wiki.osdev.org, 2019. [Online]. Available: https://wiki.osdev.org/PS/2_Mouse. [Accessed: 14- Apr- 2022].
