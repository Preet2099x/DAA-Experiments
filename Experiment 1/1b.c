#include<stdio.h>
int main(){
    int n,i,sum=0;
    int avg = 0;
    printf("Enter no of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements: ");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    avg = sum/n;
    printf("Sum = %d",sum);
    printf("\nAverage = %d",avg);
}