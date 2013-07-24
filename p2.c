#include <stdio.h>

int main() {
  long p1 = 1;
  long p2 = 1;
  long c = 2;
  long sum = 0;
  while (c < 4000000) {
    if (c % 2 == 0) {
      sum += c;
    }
    p1 = p2;
    p2 = c;
    c = p1 + p2; 
  }
  printf("%ld", sum);
  return 0;
}
