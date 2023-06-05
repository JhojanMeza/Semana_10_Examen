#include <stdio.h>
#include "maze.h"
#include "player.h"

void juegoNuevo();

int main() {
    int opcion;

    do {
        printf("Bienvenidos al juego del laberinto!\n");
        printf("1. Jugar\n");
        printf("2. Creditos\n");
        printf("3. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                juegoNuevo();
                break;
            case 2:
                printf("Créditos del juego\n");
                break;
            case 3:
                printf("¡Hasta luego!\n");
                break;
            default:
                printf("Opción inválida\n");
                break;
        }

        printf("\n");
    } while (opcion != 3);

    return 0;
}

void juegoNuevo() {
    char movimiento;

    do {
        printMaze();
        printf("Ingrese su movimiento (w: arriba, s: abajo, a: izquierda, d: derecha): ");
        scanf(" %c", &movimiento);

        movePlayer(movimiento);
    } while (!hasWon());

    printf("\n");
    printMaze();
    printf("Movimientos: %d\n", getNumMoves());

    if (getNumMoves() <= 8)
        printf("¡Eres un Pro!\n");
    else if (getNumMoves() <= 15)
        printf("¡Eres novato!\n");
    else
        printf("¡Eres un noob!\n");
}