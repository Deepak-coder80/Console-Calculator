/*
====================================================================
Project Name : Sample Console Calculator
Created By   : Deepak M S (GitHub:Deepak-coder80)
Version      : 2.0
Description  : This is a sample console calculator by c programming
=====================================================================
*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
   int choice,n;
   float a,b;
   
   printf("\t\t\t\t\t\t************************************************\n");
   printf("\t\t\t\t\t\t\tHai Welcome to the console calculator\n");
   printf("\t\t\t\t\t\t************************************************\n");

   do{

      printf("\nEnter two numbers");
      scanf("%f%f",&a,&b);
      printf("\n Enter 1 for Addition \n Enter 2 for Subtraction \n Enter 3 for Multiplication \n Enter 4 for Quotient of Division \n\n Enter Your Choice:");
      scanf("%d",&choice);


      switch(choice){
      case 1:
         printf("\nSum = %.2f\n",(a+b));
         break;
      case 2:
         printf("\nDifference = %.2f\n",(a-b));
         break;
      case 3:
         printf("\nProduct = %.2f\n",(a*b));
         break;
      case 4:
         printf("\nQuotient of Division = %.3f\n",(a/b));
         break;
      
      default:
         printf("\nInvlaid Entry\n");

      };

      printf("\nDo you want to continue?\n If yes, enter 1 else enter 0:");
      scanf("%d",&n);
      

   }while(n==1);
    return 0;
}
