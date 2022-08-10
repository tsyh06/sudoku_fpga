#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>


extern volatile int solution[9][9];
extern volatile int board[9][9]; //the board display for user
extern volatile int type[9][9]; //determine if a grid is editable (true->not editable)


void generateSolution();
void generateBoard(int vacancy);
bool check(int i, int k);
bool checkRow(int row);
bool checkColumn(int col);
bool checkSquare(int i, int k);
int randomNum(int c);
