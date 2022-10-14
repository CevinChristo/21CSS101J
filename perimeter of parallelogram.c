#include <stdio.h>
int main(){
  printf("RA2211042010002\n\n"); 
    float num1, num2, perimeter;
    printf("Enter the length of adjacent sides of the parallelogram: ");
    scanf("%f %f", &num1, &num2);
    perimeter = 2 * (num1 + num2);
    printf("Perimeter of the parallelogram is: %.2f", perimeter);
    return 0;
}
