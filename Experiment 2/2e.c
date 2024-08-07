#include <stdio.h>

int sumofdigits(int n)
{
    if(n == 0)
        return 0;
    else
        return (n % 10) + sumofdigits(n / 10);
}

int main()
{
    printf("Preet AJU/220501 \n");
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of digits of %d = %d\n", n, sumofdigits(n));
    return 0;
}

