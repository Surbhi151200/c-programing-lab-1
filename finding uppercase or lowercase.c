#include<stdio.h>
#include<ctype.h>
int main()
{
	char n;
	printf(" Enter an alphabet  :  ");
	scanf("%c",&n);
	if(isupper(n))
   	printf(" Uppercase alphabet");
     	else
       	if(islower(n))
         	printf(" lowercase alphabet");
	return 0;
}
