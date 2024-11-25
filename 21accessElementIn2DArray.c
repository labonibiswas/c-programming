#include<stdio.h>


//21. Write a Program to access an element in 2-D Array.

int main(){
    int rows, cols,i,j;
    int row_index,col_index;

    printf("enter number of rows: ");
    scanf("%d", &rows);

    printf("enter number of cols: ");
    scanf("%d", &cols);
    int arr[rows][cols];

    for(i=0; i<rows; i++){
        for ( j = 0; j < cols; j++)
        {
            printf("enter element at arr[%d][%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }
        
    }

    printf("enter the row index of the element to access from(0 - %d)",rows-1);
    scanf("%d",&row_index);
    printf("enter the column index of the element to access from(0 - %d)",cols-1);
    scanf("%d",&col_index);


    if (row_index >= 0 && row_index < rows && col_index >= 0 && col_index < cols) {
        // Access and print the element
        printf("The element at [%d][%d] is: %d\n", row_index, col_index, arr[row_index][col_index]);
    } else {
        printf("Invalid indices! Please enter indices within the range.\n");
    }
}