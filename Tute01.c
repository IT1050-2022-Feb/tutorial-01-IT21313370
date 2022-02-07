/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
  float mark1, mark2, avg;

  printf("Enter Subject 1 Marks: ");
  scanf("%f", &mark1);
  printf("Enter Subject 2 marks:  ");
  scanf("%f", &mark2);

  avg = ( mark1 + mark2 ) / 2;

  printf("\nAverage of the two marks is %.2f", avg);
  
  return 0;
}

