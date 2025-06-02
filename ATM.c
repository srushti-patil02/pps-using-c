#include<stdio.h>
int main ()
{
   int pin,i,x=1976;
   
   printf("pin must be correct");
   for(i=1;i<=3;i++)
   {
      printf("Enter your ATM pin:");
      scanf("%d",& pin);
      
      if(pin==x)
      {
         printf("\n collect your cash");
         break;
      }
      else if (i==3)
      { 
         printf("ATM has been blocked");
      }   
      else if (x!=pin)
      {
         printf("\n Incorrect pin please try after 24 hours");
      }  
   }   
   return 0;
}
