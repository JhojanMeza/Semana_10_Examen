#ifndef MAZE_H
#define MAZE_H
#define MAZE_SIZE 5

extern int maze[MAZE_SIZE][MAZE_SIZE];

void printMaze();

int isValidMove(int x, int y);

#endif