#include <stdio.h>

int main() {
  int x = 6;
  int y = 3;
  
  // Returns 1 (true) because one of the conditions are true (6 is greater than 3, but 6 is not less than 4)
  printf("%d", x > 3 || x < 4);
  return 0;
}
