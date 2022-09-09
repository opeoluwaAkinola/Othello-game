//Created by Opeoluwa Akinola
#define __STDC_WANT_LIB_EXT1__ 1
#include <stdbool.h>
#ifndef OTHELLO_BOARD_H
#define OTHELLO_BOARD_H
/*
Declare a struct for a player
*/
typedef struct players {

	int score; //a player score
	char name[30];
	char color;
} players;
//player p1, p2;
//game is only played with two players so declar each player
//player p1, p2;
//int numOfTiles;

//global variable to hold the input of a player as game progresses
//char slot[3];
//players p1, p2;

//using a 2d-array for the board
//char board[SIZE][SIZE];
#endif //OTHELLO_BOARD_H

/*
* Functions declaration
*/
players p1, p2;



bool validMove(char color, int dRow, int dCol, int row, int col);
bool lineCheck(char color, int dRow, int dCol, int row, int col);

bool checkMove(char color, const char input[]);
void playerMove(char color, const char input[]);

bool checkInput(const char input[]);
bool isNotEmpty(const char input[]);