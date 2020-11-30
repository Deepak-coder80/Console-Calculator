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
   int choice;
   float a,b,ans;
   printf("                             ************************************************\n");
   printf("                                 Hai Welcome to the console calculator\n");
   printf("                             ************************************************\n");
   printf("Enter two numbers");
   scanf("%f%f",&a,&b);
   printf(" Press 1 for Addition \n Press 2 for Subtraction \n Press 3 for Multiplication \n Press 4 for Division \n Enter Your Choice:");
   scanf("%d",&choice);


   switch(choice){
   case 1:
       ans=a+b;
       printf("The Sum is %f",ans);
       break;
    case 2:
       ans=a-b;
       printf("The Difference is %f",ans);
       break;
    case 3:
       ans=a*b;
       printf("The Product is %f",ans);
       break;
    case 4:
       ans=a/b;
       printf("The Result of Division is %f",ans);
       break;
    default:
        printf(" Fool!!");

   };
    return 0;
}
