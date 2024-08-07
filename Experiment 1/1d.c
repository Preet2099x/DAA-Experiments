#include<stdio.h>
int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int value,pos;
    printf("Enter element to be inserted: ");
    scanf("%d",&value);
    printf("Enter position to be inserted : ");
    scanf("%d",&pos);
    if(pos>=0 && pos<10){
        a[pos] = value;
        for(int i=0;i<10;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
    }
    else{
        printf("Index out of range");
    }
    return 0;
}