#include <stdio.h>
void main() {
  printf("RA2211042010002\n\n");
  int number;
  printf("enter the number : ");
  scanf("%d",&number);
  if (number % 7 == 0 ) {
  printf("The number is divisible by 7"); 
  }
  else {
  printf(" The number is not divisible by 7 ");
  }
}
