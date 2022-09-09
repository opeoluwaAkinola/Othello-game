//Created by Opeoluwa Akinola

#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include "player.h"
/*
#ifndef OTHELLO_BOARD_H

#define OTHELLO_BOARD_H
// variable to keep track of the number of tiles on the board
int numOfTiles;

//global variable to hold the input of a player as game progresses
char slot[3];

#endif //OTHELLO_BOARD_H
*/
//function declaration
int numOfTiles;

//global variable to hold the input of a player as game progresses

char slot[3];
bool movesAvailable(char color);
void initialiseGame(void);
void playPlayer(players p);

