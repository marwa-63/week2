#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Enter your grade:");
    scanf("%d", &x);
    if (x>=85)
    {
        printf("Your rating is Excellent");
    }
    else if (x>=75)
    {
        printf("Your rating is Very good");
    }
    else if (x>=65)
    {
    printf("Your rating is Good");
    }
    else if (x>=50)
    {
           printf("Your rating is Fair");
    }
    else
        {
           printf("Your rating is Fail");
    }
    return 0;
}
