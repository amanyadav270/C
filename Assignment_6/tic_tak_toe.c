#include <stdio.h>

//declaration
void print_arr(char arr[3][3]);
int winner_check(char arr[3][3], char player);
int draw_check(char arr[3][3]);
void move(char arr[3][3], char player);
int valid_move(char arr[3][3], int r, int c);

//main function
int main() {
    char arr[3][3]= { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
    char currentPlayer= 'O';
    printf("Welcome to Tic Tac Toe!\n");
    while (1) {
        printf("Player %c turn:\n", currentPlayer);
        move(arr, currentPlayer);
        print_arr(arr);
        if (winner_check(arr, currentPlayer)) {
            printf("!!!Player %c wins!!!\n", currentPlayer);
            break;
        }
        if (draw_check(arr)) {
            printf("!!!Draw!!!\n");
            break;
        }
        if (currentPlayer == 'O') {
            currentPlayer = 'X';
        } else {
            currentPlayer = 'O';
        }
    }
    return 0;
}
//prints the matrix
void print_arr(char arr[3][3]) {
    printf("\n");
    for (int i=0;i<3; i++) {
        for (int j=0;j<3;j++) {
            printf(" %c ", arr[i][j]);
            if (j<2) printf("|");
        }
        printf("\n");
    }
    printf("\n");
}
//checks if anyone win
int winner_check(char arr[3][3], char player) {
    for (int i=0;i<3;i++) {
        if ((arr[i][0] == player && arr[i][1] == player && arr[i][2]== player) || (arr[0][i]== player && arr[1][i]== player && arr[2][i] == player)) { 
            return 1;
        }
    }
    if ((arr[0][0]==player && arr[1][1]== player && arr[2][2] == player) || (arr[0][2]== player && arr[1][1]== player && arr[2][0] == player)){ 
        return 1;
    }
    return 0;
}
//checks if match is draw
int draw_check(char arr[3][3]) {
    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            if (arr[i][j]==' ') {
                return 0;
            }
        }
    }
    return 1;
}
void move(char arr[3][3],char player) {
    int r, c;
    while (1) {
        printf("Enter r(1-3) and c(1-3): ");
        scanf("%d %d", &r, &c);
        r--; 
        c--;

        if (valid_move(arr, r, c)) {
            arr[r][c] = player;
            break;
        } else {
            printf("Invalid move!Try again.\n");
        }
    }
}
//checks if move is valid
int valid_move(char arr[3][3], int r, int c) {
    return (r>=0&& r<3 && c>=0 && c<3 && arr[r][c]==' ');
}
