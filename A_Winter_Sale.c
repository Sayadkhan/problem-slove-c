#include <stdio.h>

int main()
{
  int x, a;
  scanf("%d %d", &x, &a);

  float sum = 1 - (x / 100.00);

  float price = a / sum;

  printf("%.2f\n", price);
}