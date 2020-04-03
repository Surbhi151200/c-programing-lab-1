#include <stdio.h>
  int main()
 {
       int sp,cp,p,l;
       printf("Enter Cp  of the  product:”);
      scanf("%d",&cp);
      printf("Enter Sp of the product : ");                
      scanf(“%d”,&sp);
      p=sp-cp; l=cp-sp; if(cp>sp) 
{ 
       printf("\n\t Loss is :%d",l); }
  else
       { 

      printf("\n\t Profit is : %d",p); }
return 0; 
}


