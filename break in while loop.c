#include <stdio.h>

int main() {
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
