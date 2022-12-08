#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0 ,x;
    float avg;
   for(int i=1;i<=10;i++)
   {
       printf("Enter number %d:",i);
       scanf("%d",&x);
       sum+=x;
   }
   avg=sum/10;
   printf("The sum of the numbers is :%d\n",sum);
   printf("The sum of the average is :%f\n",avg);

    return 0;
}
