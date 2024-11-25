#include<stdio.h>
//23. Write a Program to multiply two 3 X 3 Matrices.

int main(){
    int r1=3,r2,c1=3,c2;
    r2=r1;
    c2=c1;
    int a[r1][c1];
    int b[r2][c2];
    printf("input for matrix 1 : ");
    
    for(int i=0; i<r1; i++){
        for (int j = 0; j < c1; j++)
        {
            printf("enter element at index a[%d][%d] : ", i,j);
            scanf("%d",&a[i][j]);
        }
    }

    
    for(int i=0; i<r1; i++){
        for (int j = 0; j < c1; j++)
        {
            printf("enter element at index b[%d][%d] : ", i,j);
            scanf("%d",&b[i][j]);
        }
    }     

    int mul[r1][c1];
    for(int i=0; i<r1; i++){
        for (int j = 0; j < c1; j++)
        {
            mul[i][j] = a[i][j] * b[i][j];
        }
    }

    printf("multiplication is :  \n");
    for(int i=0; i<r1; i++){
        for (int j = 0; j < c1; j++)
        {
            printf(" %d",mul[i][j]);
        }
        printf("\n");
    }        
}