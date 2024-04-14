#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DEFAULT_ENERGY 20
#define COST_ENERGY 1

void createBoard(char board[][4]) {
    // Initialize the board
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            board[i][j] = '_';
        }
    }

    // Place the tortoise randomly
    int tortoiseX = rand() % 4;
    int tortoiseY = rand() % 4;
    board[tortoiseX][tortoiseY] = '@';

    // Place mulberries randomly
    int numMulberries = 4 * 4 * 0.15;
    for (int i = 0; i < numMulberries; i++) {
        int x, y;
        do {
            x = rand() % 4;
            y = rand() % 4;
        } while (board[x][y] != '_');
        board[x][y] = '*';
    }

    // Place pits randomly
    int numPits = 4 * 4 * 0.05;
    for (int i = 0; i < numPits; i++) {
        int x, y;
        do {
            x = rand() % 4;
            y = rand() % 4;
        } while (board[x][y] != '_');
        board[x][y] = 'O';
    }
}

void printBoard(char board[][4]) {
    printf("\n");
    printf("+++++++++++++++++++\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
    printf("+++++++++++++++++++\n");
}

void updateBoard(char board[][4], int *energy, int *mulberries) {
    int x, y;
    // Find the current position of the tortoise
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (board[i][j] == '@') {
                x = i;
                y = j;
                break;
            }
        }
    }

    // Check for pit fall
    if (board[x][y] == 'O') {
        printf("GAME OVER!\n");
        exit(0);
    }
}

void move(char board[][4], int *energy, char direction) {
    int x, y;
    // Find the current position of the tortoise
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (board[i][j] == '@') {
                x = i;
                y = j;
                break;
            }
        }
    }

    *energy = *energy - COST_ENERGY;

    switch (direction) {
        case 'N':
            if (x > 0) {
                board[x][y] = '_';
                board[x - 1][y] = '@';
            }
            break;
        case 'S':
            if (x < 3) {
                board[x][y] = '_';
                board[x + 1][y] = '@';
            }
            break;
        case 'E':
            if (y < 3) {
                board[x][y] = '_';
                board[x][y + 1] = '@';
            }
            break;
        case 'W':
            if (y > 0) {
                board[x][y] = '_';
                board[x][y - 1] = '@';
            }
            break;
        default:
            break;
    }
}

void eat(char board[][4], int *energy, char direction, int *mulberry) {
    int x, y;
    // Find the current position of the tortoise
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (board[i][j] == '@') {
                x = i;
                y = j;
                break;
            }
        }
    }

    *energy += 10;

    switch (direction) {
        case 'N':
            if (x > 0 && board[x - 1][y] == '*') {
                board[x - 1][y] = '_';
                (*mulberry)--;
            }
            break;
        case 'S':
            if (x < 3 && board[x + 1][y] == '*') {
                board[x + 1][y] = '_';
                (*mulberry)--;
            }
            break;
        case 'E':
            if (y < 3 && board[x][y + 1] == '*') {
                board[x][y + 1] = '_';
                (*mulberry)--;
            }
            break;
        case 'W':
            if (y > 0 && board[x][y - 1] == '*') {
                board[x][y - 1] = '_';
                (*mulberry)--;
            }
            break;
        default:
            break;
    }
}

int main(void) {
    srand(time(NULL));
    char board[4][4];
    int energy = DEFAULT_ENERGY;
    int mulberry = 4 * 4 * 0.15;

    createBoard(board);

    printf("Welcome tp the game.\n");

    while (1) {
        printBoard(board);

        if (energy <= 0) {
            printf("You've run out of energy, you lose.\n");
            break;
        } else if (mulberry == 0) {
            printf("YOU WON THE GAME.\n");
            break;
        }

        char selectedAction, selectedDirection;
        printf("Time = %d Energy level: %d\n", DEFAULT_ENERGY - energy + 1, energy);
        printf("Select an action to do (M/E): ");
        scanf(" %c", &selectedAction);

        if (selectedAction == 'M') {
            printf("Enter a direction to move to  (W/E/N/S): ");
            scanf(" %c", &selectedDirection);
            move(board, &energy, selectedDirection);
        } else if (selectedAction == 'E') {
            printf("Enter direction to eat (W/E/N/S): ");
            scanf(" %c", &selectedDirection);
            eat(board, &energy, selectedDirection, &mulberry);
        } else {
            printf("Please enter a valid action.\n");
        }

        updateBoard(board, &energy, &mulberry);
    }

    return 0;
}