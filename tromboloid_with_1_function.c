//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
void main() {
float h, d, b, vol;
printf("Enter the parameters h, d, b respectively: \n");
scanf("%f%f%f", &h, &d, &b);
vol = (0.333)*((h*d*b)+(d/b));
printf("The volume is %f", vol);
}
