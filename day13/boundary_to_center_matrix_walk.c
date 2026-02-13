#include <stdio.h>

int main() {
    int row, col;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);

    int matrix[row][col];

    printf("Enter matrix elements:\n");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int top = 0;
    int bottom = row - 1;
    int left = 0;
    int right = col - 1;

    printf("Spiral order:\n");

    while(top <= bottom && left <= right) {

        // Left → Right
        for(int i = left; i <= right; i++) {
            printf("%d ", matrix[top][i]);
        }
        top++;

        // Top → Bottom
        for(int i = top; i <= bottom; i++) {
            printf("%d ", matrix[i][right]);
        }
        right--;

        // Right → Left
        if(top <= bottom) {
            for(int i = right; i >= left; i--) {
                printf("%d ", matrix[bottom][i]);
            }
            bottom--;
        }

        // Bottom → Top
        if(left <= right) {
            for(int i = bottom; i >= top; i--) {
                printf("%d ", matrix[i][left]);
            }
            left++;
        }
    }

    return 0;
}
