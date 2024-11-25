#include<stdio.h>

int main(){
    int start, end,i;

    printf("enter a starting number: ");
    scanf("%d",&start);
    printf("enter a ending number: ");
    scanf("%d",&end);
    for(i=start ; i>end ; i-=2){
        printf("%d ",i);
    }
}