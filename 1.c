#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x , salary ;
    printf("Enter your working hours:");
    scanf("%d",&x);
    salary = x*50;
    if (x>=40)
    {
        printf("The salary is:%d",salary);
    }
    else
    {
      printf("The salary is :%d",salary-(salary*10/100));
    }
    return 0;
}
