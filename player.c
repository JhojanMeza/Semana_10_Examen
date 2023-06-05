#include "player.h"
#include "maze.h"
#include <stdio.h>

int playerX = 0;
int playerY = 0;
int numMoves = 0;

void movePlayer(char direction) {
    int newX = playerX;
    int newY = playerY;

    switch (direction) {
        case 'w':
            newX--;
            break;
        case 's':
            newX++;
            break;
        case 'a':
            newY--;
            break;
        case 'd':
            newY++;
            break;
    }

    if (isValidMove(newX, newY)) {
        playerX = newX;
        playerY = newY;
        numMoves++;
    } else {
        printf("Movimiento inválido\n");
    }
}

int hasWon() {
    return (playerX == MAZE_SIZE - 1 && playerY == MAZE_SIZE - 1);
}

int getNumMoves() {
    return numMoves;
}