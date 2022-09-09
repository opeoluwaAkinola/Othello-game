//Created by Opeoluwa Akinola

#include <stdio.h>
#include "board.h"
#include "player.h"


/* Function to print the board using the 2d array*/
void printBoard() {
	printf("\nScores: %s (Black): %d\t %s (White): %d\n\n", p1.name, p1.score, 
		p2.name, p2.score);
	puts("	a	b	c	d	e	f	g	h");
	for (int i = 0; i < SIZE; i++) {
		printf(" ");
		for (int j = 0; j < SIZE; j++) {
			printf("	---");
		}
		puts(" ");
		printf("%d|", i + 1);
		for (int j = 0; j < SIZE; j++) {
			printf("	%c", board[i][j]);
		}
		printf("\n");
	}
	for (int j = 0; j < SIZE; j++) {
		printf("	---");
	
	}
	printf("\n");
	puts("	a	b	c	d	e	f	g	h");
	printf("\n");
}// End of print board function

//Function to initialise the board at the start of the game
void initialiseBoard(char arr[SIZE][SIZE]) {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			//set each 'tile' on the board to empty
			arr[i][j] = ' ';
		}
	}
	//since it is Othello, there are 4 pieces already in the board at the start of the game
	arr[3][3] = 'W';
	arr[3][4] = 'B';
	arr[4][3] = 'B';
	arr[4][4] = 'W';
} //end of initialise board function

/*Function to update the score of both players as the game progresses*/
void updateScore() {
	//variable to hold the score each time it's run.Set to 0
	int x = 0, y = 0;
	for (int row = 0; row < SIZE; row++) {
		for (int col = 0; col < SIZE; col++) {
			//count the number if Black on the board
			if (board[row][col] == 'B')
				x++;
			// count the number of white on the  board
			if (board[row][col] == 'W')
				y++;
		}
	}
	//set player 1 core to the number of Black tiles
	p1.score = x;
	//set player 2 score to the number of white tiles
	p2.score = y;

}

