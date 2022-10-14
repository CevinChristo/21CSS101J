#include<stdio.h>
int main() {
printf("RA2211042010002\n\n"); 
  int meters;
  float feet;
  printf("enter the value for meters = ");
  scanf("%d" , &meters);
  feet = meters * 3.28084; 
  printf("%d meters are equal to %.2f feet" , meters , feet);
  return 0;
}
