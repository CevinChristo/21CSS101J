#include <stdio.h>

int main() {
 printf("RA2211042010002\n\n"); 
  int i;  
  for (i = 0; i < 15; i++) {
    if (i == 8) {
      break;
    }
    printf("%d\n", i);
  } 
  return 0;
}
