/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int i,s1,s2;
   float mark,sum=0,avg;
   printf("Enter marks of two subjects:");
   scanf("%f",mark);
   printf("enter mark of subject 1");
   scanf("%d",&s1);
   printf("enter mark of subject 2")
   scanf("%d",&s2);
   sum=s1+s2;
   printf("total mark =\n");
   scanf("%f",&sum);
   avg=sum/2.0;
   printf("average is :");
   scanf("%f",&avg);
  
  return 0;
}

