#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x , y , z;
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);
    printf("Enter the third number: ");
    scanf("%d", &z);
    if (x>y&&x>z)
        printf("The maximum number is:%d",x);
    else if (y>x&&y>z)
        printf("The maximum number is:%d",y);
    else
        printf("The maximum number is:%d",z);
    return 0;
}
