#include<stdio.h>

int main()
{
  printf("RA2211042010002\n\n");
  int side, Volume;
  printf("Side = ");
  scanf("%d", &side);
  
  Volume = side* side*side;
  printf("Volume: %d", Volume);
}
