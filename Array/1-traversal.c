#include<stdio.h>
int main()
{
    int a[5], i;
    printf("Enter five numbers: ");

    for( i = 0; i < 5; i++)
    {
        scanf("%d",& a[i]);
    }
    printf("\nThe numbers you have entered are: ");

    for( i = 0; i < 5; i++)
    {
        printf("\n%d", a[i]);
    }
    printf("\n");
    return 0;
}