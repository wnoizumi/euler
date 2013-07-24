#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  long long int NUM = 600851475143;
  double square = sqrt(NUM);
  long int limit = ceil(square);
  int *not_prime = (int*)calloc(limit+1, sizeof(int));
  printf("calloc");
  int i = 2;
  int j = 2;
  int v = 4;  
  while (i <= limit) {
    j = i;
    if (i * j > limit)
      break;      
    do {
      v = i * j;
      not_prime[v] = 1;      
      j++;
    } while (i * j < limit);
    do {
      i++;
    } while(not_prime[i] && i <= limit);     
  }

  for (i = 2; i <= limit; i++) {
    if (not_prime[i] == 0 && NUM % i == 0)
      printf("%d\n", i);
  }
  
  return 0;
}
