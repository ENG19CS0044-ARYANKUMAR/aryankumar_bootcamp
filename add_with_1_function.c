//Write a program to add two user input numbers using one function.
#include<stdio.h>
void main() {
int n1, n2, sum;
printf("Enter number1: ");
scanf("%d", &n1);
printf("Enter number2: ");
scanf("%d", &n2);
sum = n1 + n2;
printf("Sum of %d and %d is %d", n1, n2, sum);
}
