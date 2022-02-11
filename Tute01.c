/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int counter=1,total;
   float avg,mark;
  
   while(counter<=2){
   printf("Enter marks of two subjects:");
   scanf("%f",&mark);
   total=total+mark;
   
   counter=counter+1;
   }
   
   avg=(float)total/2.0;
   printf("average is %.2f\n",avg);
   
  
  return 0;
}

