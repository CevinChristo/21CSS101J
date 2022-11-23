#include <stdio.h>
void main() {
  printf("RA2211042010002\n\n");
  int number;
  printf("enter the number : ");
  scanf("%d",&number);
  if (number % 5 == 0 ) {
  printf("The number is divisible by 5\n"); 
  }
  else {
  printf(" The number is not divisible by 5 ");
  }
}
