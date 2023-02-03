#include <stdio.h>

int main ()
{
  int n = 5;
  int i = 1;
  int sum = 0;

  
  while(i <= n) {
    sum += i*i*i;
    i++;
  }

  printf("Sum is: %i\n", sum);
  return 0;
}