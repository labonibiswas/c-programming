#include<stdio.h>

int main(){
    int num,count=0;
    printf("enter a number: ");
    scanf("%d",&num);
    if(num==0){
        count=1;
    }else{
        while (num!=0)
        {
            num /=10;
            count++;
        }    
    }
    printf("number of digit in the number is %d",count);    
    return 0;
}