#include "processor.h"

int num[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
volatile int solution[9][9];
volatile int board[9][9];
volatile int type[9][9];

// To generate a 9*9 board with no same number on a line or in a 3*3 square.
void generateSolution() {
//
}

//generate the board for user input
void generateBoard(int vacancy) {
//
}

//To a random number from a list a non-repeat random number from 1 to 9.
int randomNum(int c) {
//
}

// To check if the number generated can fit into its position.
bool check(int i, int k) {
	return (checkRow(i) && checkColumn(k) && checkSquare(i, k));
}


// To check if the number generated can fit into its row.
bool checkRow(int row) {
//
}

// To check if the number generated can fit into its column.
bool checkColumn(int col) {
//
}

//To check if the number generated can fit into its 3*3 square.
bool checkSquare(int i, int k) {
//
}
