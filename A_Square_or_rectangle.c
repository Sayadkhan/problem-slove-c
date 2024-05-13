#include <stdio.h>

int main()
{
  int test;

  scanf("%d", &test);

  for (int i = 0; i < test; i++)
  {

    int x, y;
    scanf("%d %d", &x, &y);

    if (x == y)
    {
      printf("Square\n");
    }
    else
    {
      printf("Rectangle\n");
    }
  }

  return 0;
}