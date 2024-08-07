#include <stdio.h>
int main()
{
    int i,n,min,max;

    printf("Enter no of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    min = arr[0];
    max = arr[0];

    for(i=0; i<n; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("Max: %d \n",max);
    printf("Min: %d",min);
    
}