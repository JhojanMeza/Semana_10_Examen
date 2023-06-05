#include "maze.h"
#include <stdio.h>

int maze[MAZE_SIZE][MAZE_SIZE] = {
    {0, 1, 0, 0, 0},
    {0, 1, 1, 1, 0},
    {0, 0, 0, 0, 0},
    {0, 1, 0, 1, 0},
    {1, 0, 0, 1, 0}
};

void printMaze() {
    for (int i = 0; i < MAZE_SIZE; i++) {
        for (int j = 0; j < MAZE_SIZE; j++) {
            if (maze[i][j] == 1)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }
}

int isValidMove(int x, int y) {
    if (x < 0 || y < 0 || x >= MAZE_SIZE || y >= MAZE_SIZE)
        return 0;  // Movimiento inválido si está fuera de los límites del laberinto

    if (maze[x][y] == 1)
        return 0;  // Movimiento inválido si hay una pared

    return 1;  // Movimiento válido
}
