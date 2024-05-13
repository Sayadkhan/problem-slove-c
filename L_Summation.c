#include <stdio.h>

void fun(int arr[], int n, int i, long long int *summation)
{
  if (i == n)
  {
    return;
  }

  *summation += arr[i];
  fun(arr, n, i + 1, summation);
}

int main()
{
  int n;
  scanf("%d", &n);
  int arr[n];

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  long long int summation = 0;
  fun(arr, n, 0, &summation);

  printf("%lld\n", summation);

  return 0;
}