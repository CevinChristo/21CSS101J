#include <stdio.h>
int main() {
   printf("RA2211042010002\n\n");
    int num;
    printf("Enter an integer:\n");
    scanf("%d", &num);
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    
    return 0;
  }
