#include<stdio.h>

int main(){
    int n;
    printf("enter number of element in the array : ");
    scanf("%d",&n);
    int arr[n];

    printf("enter %d numbers : ",n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("original array : ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    int start = 0;
    int end = n-1;
    while(start<end){
        int temp=arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    printf(" reverse array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
}