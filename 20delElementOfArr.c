#include<stdio.h>

int main(){
    int n;
    printf("enter number of element in array: ");
    scanf("%d",&n);
    int arr[n];

    printf("enter %d numbers: ",n);

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int pos;
    printf("enter position of element to be deleted: ");
    scanf("%d",&pos);

    if (pos<0 || pos>n)
    {
        printf("invalid input");
    }else{
        for(int i=pos-1; i<n; i++){
            arr[i]=arr[i+1];
            n--;
        }
    }

    printf("array after deletion is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
}