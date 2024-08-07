#include<stdio.h>

void printOdd(int start, int end) {
    if(start>end)
        return;

    if(start%2!=0)
        printf("%d ",start);
    printOdd(start+1,end);
}

void printEven(int start, int end) {
    if(start>end)
        return;

    if(start%2==0)
        printf("%d ",start);    
    printEven(start+1,end);
}

int main() {
    int start,end;
    printf("Enter starting range: ");
    scanf("%d",&start);
    printf("Enter ending range: "); 
    scanf("%d",&end);
    printf("The odd numbera are: ");
    printOdd(start,end);
    printf("\nThe even numbers are: ");
    printEven(start,end);
}