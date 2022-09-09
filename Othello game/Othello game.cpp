/* Othello Game
Author:Opeoluwa Akinola
*/
#include <stdio.h>
#include <time.h>
#include "board.h"
#include "player.h"
#include "gamePlay.h"


int main(void) {
    initialiseGame(); // initialise the game

    // request the names of each player
    printf("Enter name of Player 1 (Black):");
    scanf("%s", p1.name);
    printf("Enter name of Player 2 (White):");
    scanf("%s", p2.name);

    // print the board at the start
    printBoard();
    printf("%s goes first\n", p1.name); // player one goes first

    // play the game until the board is filled up
    while (numOfTiles != SIZE * SIZE) {
        // check if player one has valid moves to play
        if (movesAvailable(p1.color))
            playPlayer(p1);
        // check if player two has valid moves to play
        if (movesAvailable(p2.color))
            playPlayer(p2);
        // if neither have valid moves to play, break out of loop. Game ends
        if (!movesAvailable(p1.color) && !movesAvailable(p2.color))
            break;
    }

    printf("Game Over!\n");

    // declare the winner
    if (p2.score > p1.score) {
        printf("%s wins!!!\n", p2.name);
    }
    else if (p1.score > p2.score) {
        printf("%s wins!!!\n", p1.name);
    }
    else {
        printf("Game was a ti!!\n");
    }

    // write the game details to a file on the disk
    FILE* fp;
    time_t t = time(NULL);
    time(&t);
   
   

   fp= fopen("C:\Users\oakinola\PycharmProjects\Users\othello-results.txt", "a");

    fprintf(fp, "\nGame played on %s\n", ctime(&t));
    fprintf(fp, "Player 1: %s \tScore: %d\n"
        "Player 2: %s \tScore: %d\n", p1.name,
        p1.score, p2.name, p2.score);
    return 0;
}