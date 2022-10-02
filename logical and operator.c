#include <stdio.h>

int main() {
  int x = 8;
  int y = 3;
  
  // Returns 1 (true) because 8 is greater than 3 AND 8 is less than 10
  printf("%d", x > 3 && x < 10);
  return 0;
}
