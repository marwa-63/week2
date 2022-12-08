#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("enter number:");
    scanf("%d",&x);
    for(int i=1;i<=12;i++)
    {
        printf(" %d*%d=%d\n",i,x,i*x);
    }

    return 0;
}
