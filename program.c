#include <stdio.h>

int main()
{
  int n;
  int i;
  int j;

  printf("\n\n\nEnter the number of Rows:\t");
  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      if (j == n - 1 || j == n - i - 1 || i == n - 1)
      {
        printf("*");
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }

  return 0;
}