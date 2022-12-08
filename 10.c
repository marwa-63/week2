#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, pass;
    printf("Enter your ID:");
    scanf("%d",&x);
    while(x!=70305)
    {
        printf("Wrong ID,Enter correct ID:");
        scanf("%d",&x);
    }
    if(x==70305)
    {
        printf("Enter your password:");
        scanf("%d",&pass);
    }
        if(pass==1587935070)
        {
            printf("Welcome!");
        }
        else{
            for(int i=0;i<2;i++)
            {
             printf("Enter your correct password:");
        scanf("%d",&pass);
        if(pass==1587935070)
        {
            printf("Welcome!");
            break;
        }
            if(i==1)
            printf("No more tries\nYour are not registered!");
            }
            }
    return 0;
}
