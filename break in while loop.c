#include <stdio.h>

int main() {
  printf("RA2211042010002\n\n");
  int i = 0;  
  while (i < 15) {
    if (i == 8) {
      break;
    }
    printf("%d\n", i);
    i++;
  }   
  return 0;
}
