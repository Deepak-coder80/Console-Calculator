/*
====================================================================
Project Name : Sample Console Calculator
Created By   : Deepak M S (GitHub:Deepak-coder80)
Version      : 1.1.4
Description  : This is a sample console calculator by c programming
=====================================================================
*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
   int choice;
   float a,b;
   int n;
   printf("\t\t\t\t\t\t************************************************\n");
   printf("\t\t\t\t\t\t\tHai Welcome to the console calculator\n");
   printf("\t\t\t\t\t\t************************************************\n");

   do{
   printf("Enter two numbers");
   scanf("%f%f",&a,&b);
   printf(" Enter 1 for Addition \n Enter 2 for Subtraction \n Enter 3 for Multiplication \n Enter 4 for Quotient of Division \n Enter Your Choice:");
   scanf("%d",&choice);


   switch(choice){
   case 1:
       printf("Sum = %.2f\n",(a+b));
       break;
    case 2:
       printf("Difference = %.2f\n",(a-b));
       break;
    case 3:
       printf("Product = %.2f\n",(a*b));
       break;
    case 4:
       printf("Quotient of Division = %.3f\n",(a/b));
       break;
   
    default:
        printf("Invlaid Entry");

   };

   printf("Do you want to continue?\n If yes, enter 1 else enter 0:");
   scanf("%d",&n);

   }while(n==1);
    return 0;
}
