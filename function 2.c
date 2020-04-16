#include<stdio.h>
#include "allfunc.c"

void printstars(int); //function prototype


int main()
{
  printstars(10); // calling the functions, using the function
  printf("\n Hello World !!");
  printstars(20);
 
  return(0);
 }
 
void printstars(int num)// declaration and definition of the function
{
int i;
printf("\n");
for(i=1;i<=num;i++)
printf("*");

}
