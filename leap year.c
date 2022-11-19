#include <stdio.h>

int main()
{
    printf("RA2211042010002\n\n");
    printf("enter year");
    int a;
    scanf("%d",&a);
    if(a%4==0)
    {
        printf("It is a leap year");
    }
    else
    {
        printf("It is not a leap year");
    }
}
