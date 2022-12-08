#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Enter the result of 3x4:");
    scanf("%d",&x);
    while(x!=12)
    {
        printf("TRy again\n");
    printf("Enter the result of 3x4:");
    scanf("%d",&x);
    }
    printf("Thanks!");


    return 0;
}
