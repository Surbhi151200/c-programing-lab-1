#include <stdio.h>
int main()
{
    int a,b,i;
    printf("\n\t Enter starting range  :   ");
    scanf("%d",&a);
    printf("\n\t Enter Ending range  :   ");
    scanf("%d",&b);
    printf("\n\n\t All even numbers in the given range are  :  ");
    for(i=a;i<=b;i++)
       {
           if((i%2)==0)
              printf("\n\t\t%d",i);
       }
    printf("\n\n\t All odd numbers in the given range are  :  ");
    for(i=a;i<=b;i++)
       {
           if((i%2)!=0)
              printf("\n\t\t%d",i);
       }
    return 0;
}

