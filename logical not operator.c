#include <stdio.h>

int main() {
  int x = 6;
  int y = 3;
  
  // Returns false (0) because ! (not) is used to reverse the result
  printf("%d", !(x > 3 && x < 8));
  return 0;
}
