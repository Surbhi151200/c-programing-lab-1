#include<stdio.h>

  int isDigit(char ch)
  {
    return(ch>='0' && ch<='9');
  }
   
  int isDigit(char ch)
   {
      if(ch>='0' && ch<='9')
   return(1);
 else
return(0);
   
   }
   
int main()
{
  char ch;
 
  printf("\n Enter a single value : ");
  scanf("%c",&ch);
 
  if(isDigit(ch))
printf("\n The value is digit !!");

  return(0);
 }
 
 //0 is false and any other number is tru
