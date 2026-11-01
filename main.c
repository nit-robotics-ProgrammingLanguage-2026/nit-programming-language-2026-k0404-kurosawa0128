gi#include <stdio.h>

int main(void) {
  int x;
  double result;
  scanf("%d", &x);
  result = 1.0 / ((double)x + 100);
  printf("%.15f\n", result);
    
    return 0;
}
