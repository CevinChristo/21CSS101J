#include<stdio.h>

int main() {
printf("RA2211042010002\n\n");
  
float kelvin,celsius;
printf("Enter value of kelvin:");
scanf("%f", &kelvin);
celsius=kelvin+273.15;
printf("%0.2f Kelvin is %0.2f Celsius", kelvin , celsius);
}
