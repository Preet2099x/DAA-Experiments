#include<stdio.h>
int summation(int n) {
    if(n==0)
        return 0;
    else
        return n+summation(n-1);
}

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int ans = summation(n);
    printf("Sum = %d ", ans);

    return 0;
}