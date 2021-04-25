/*
====================================================================
Project Name : Sample Console Calculator
Created By   : Deepak M S (GitHub:Deepak-coder80)
Version      : 1.0.0
Description  : This is a sample console calculator by c programming
=====================================================================
*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
   char choice;
   float a,b,ans;
   printf("                             ************************************************\n");
   printf("                                 Hai Welcome to the console calculator\n");
   printf("                             ************************************************\n");
   printf("Enter two numbers");
   scanf("%f%f",&a,&b);
   printf(" enter '+' for Addition \n Enter '-' for Subtraction \n Enter '*' for Multiplication \n Enter '/' for Division \n  Enter Your Choice:");
   scanf("%c",&choice);


   switch(choice){
   case '+':
       ans=a+b;
       printf("The Sum is %.2f",ans);
       break;
    case '-':
       ans=a-b;
       printf("The Difference is %.2f",ans);
       break;
    case '*':
       ans=a*b;
       printf("The Product is %.2f",ans);
       break;
    case '/':
       ans=a/b;
       printf("Quotient is %.3f",ans);
       break;
    default:
        printf("Invlaid Entry");

   };
    return 0;
}
