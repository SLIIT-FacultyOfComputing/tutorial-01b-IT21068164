/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main()
{
    float sub1, sub2; 
    float total, average;

    /* Input marks*/
    printf("Enter marks of first subject: \n");
    scanf("%f", &sub1);
    printf("Enter marks of second subject: \n");
    scanf("%f", &sub2);

    /* Calculate total and average*/
    total = sub1 + sub2;
    average = total / 2.0;
    
    /* Print average */
      printf("Average marks = %.2f\n", average);
    
  return 0;
}

