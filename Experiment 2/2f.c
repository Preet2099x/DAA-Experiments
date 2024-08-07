#include<stdio.h>
int fib (int n) {
    if (n == 0 || n == 1) 
        return n;
    else
        return fib(n-1) + fib(n-2);
}

int main() {
    printf("Preet AJU/220501 \n");
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    
    int i=0;
    while (i < n) {
        printf("%d ", fib(i));
        i++;
    }
    printf("\n");
    return 0;
