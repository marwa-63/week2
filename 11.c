#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x;

  printf("Enter the height of the pyramid:  ");
  scanf("%d", &x);

  for (int i = 1 ; i <= x; i++ )
    {
      for ( int j = 1 ; j <= x-i; j++ )
      {
      	printf(" ");
      }
      for (int k = 1; k <= (2 * i - 1); k++)
      {
   	printf("*");
      }
      printf("\n");
    }
  return 0;
}

