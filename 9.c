#include <stdio.h>
#include <stdlib.h>

int main()
{
     int x, f=1;
    printf("Enter number:");
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        f*=i;
    }
   printf("The factorial of %d is:%d",x,f);
    return 0;
}
