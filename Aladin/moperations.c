#include<stdio.h>
void display(int rows, int cols, int matrix[rows][cols]);
void addmatrix(int rows,int cols,int matrix1[rows][cols],int matrix2[rows][cols]);
void transpose(int rows, int cols, int matrix[rows][cols]);
int main() {

    int i, j, rows, cols,r2,c2;
    printf("enter number of rows");
    scanf("%d", &rows);
    printf("enter number of columns");
    scanf("%d", &cols);
    int matrix[rows][cols];
    printf("\nenter elements");
    for (j = 0;j < rows;j++) {
        for (i = 0;i < cols;i++) {
            scanf("%d", &matrix[j][i]);
        }
    }
    printf("\nmatrix 1:");
    display(rows, cols, matrix);
    printf("enter number of rows of matrix 2");
    scanf("%d", &r2);
    printf("enter number of columns of matrix 2");
    scanf("%d", &c2);
    int matrix2[r2][c2];
    printf("\nenter elements of matrix 2:");
    for (i = 0;i < r2;i++) {
        for (j = 0;j < c2;j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    printf("\nmatrix 2:");
    display(r2,c2,matrix2);
    if (rows == r2 && cols == c2) {
        addmatrix(rows, cols, matrix, matrix2);
    } else {
        printf("\nCannot add matrices: dimensions do not match.\n");
    }
    transpose(rows,cols,matrix);
    return 0;
}
void display(int rows, int cols, int matrix[rows][cols]) {
    int i, j;
    printf("\nentered matrix");
    for (j = 0;j < rows;j++) {
        printf("\n");
        for (i = 0;i < cols;i++) {
            printf("%d\t", matrix[j][i]);
        }
    }

}
void addmatrix(int rows,int cols,int matrix1[rows][cols],int matrix2[rows][cols]){
    int j,i;
    printf("sum of matrix");
    for(j = 0;j < rows;j++) {
        printf("\n");
        for(i = 0;i < cols;i++){
            printf("%d\t",matrix1[j][i]+matrix2[j][i]);

        }
    }
}