#include <stdio.h>
int main(){
float principle, time, rate, SI;

printf("Enter principle: ");
scanf("%f", &principle);
printf("Enter time: ");
scanf("%f", &time);
printf("Enter rate: ");
scanf("%f", &rate);

SI = (principle * time * rate) / 100;
printf("Simple interest = %d" , SI);

return 0;
}

