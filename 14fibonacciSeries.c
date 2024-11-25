#include<stdio.h>

int main(){
    int term, first=0, second=1, next;
    printf("enter the number of terms : ");
    scanf("%d",&term);

    printf("the fibonacci series is : %d %d", first, second);
    for(int i =0; i<=term; i++){
        next = first + second;
        first = second;
        second = next;
        printf(" %d",next);
    }
}