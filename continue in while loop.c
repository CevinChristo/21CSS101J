#include <stdio.h>

int main() {
  int i = 0;
  
  while (i < 17) {
    if (i == 7) {
      i++;
      continue;
    }
    printf("%d\n", i);
    i++;
  } 
  
  return 0;
}
