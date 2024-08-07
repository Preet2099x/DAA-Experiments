#include<stdio.h>
int factorial(int n)
{
    if(n<=1)
        return 1;
    else
        return n*factorial(n-1);
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    int ans = factorial(n);
    printf("The Factorail of %d: %d",n,ans);

    return 0;
}
    