#include<stdio.h>
int main()
{
    int i,j;
    printf("Enter any number\n");
    scanf("%d",&i);
    for(j=2;j<=i/2;j++)
    {
        if(i%j==0)
        {
            printf("It is not a prime number");
            return 0;
        }

    }
    printf("It is a prime number");
    return 0;
}