#include<stdio.h>

//22. Write a program for addition of two matrices of any order in C.

int main(){
    int r1, r2, c1, c2 ;

    printf("enter number of rows in the matrix A : ");
    scanf("%d",&r1);
    printf("enter number of columns in the matrix A : ");
    scanf("%d",&c1);
    

    printf("enter number of rows in the matrix B : ");
    scanf("%d",&r2);
    printf("enter number of columns in the matrix B : ");
    scanf("%d",&c2);

    if( r1 != r2 || c1 != c2){
        printf("invalid input for addition of two matrix the order of the matrix must be same...");
        return 0;
    }

    int A[r1][c1],B[r2][c2];
    for(int i=0; i<r1; i++){
        for (int j = 0; j < c1; j++)
        {
            printf("enter element at index A[%d][%d] : ", i,j);
            scanf("%d",&A[i][j]);
        }
        
    }

    for(int i=0; i<r2; i++){
        for (int j = 0; j < c2; j++)
        {
            printf("enter element at index B[%d][%d] : ",i,j);
            scanf("%d",&B[i][j]);
        }
        
    }
    int sum[r1][c1];
    for(int i=0; i<r1; i++){
        for (int j = 0; j < c1; j++)
        {
             sum[i][j] = A[i][j] + B[i][j];
            
        }
        
    }

    printf("addition of the two matrix is: \n");

    for(int i=0; i<r2; i++){
        for (int j = 0; j < c2; j++)
        {
            printf(" %d",sum[i][j]);
        }
        printf("\n");
        
    }
}