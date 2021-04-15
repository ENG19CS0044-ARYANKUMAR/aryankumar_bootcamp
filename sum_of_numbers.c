//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
#include<math.h>
void main() {
    int m; 
    printf("Enter the number of no.s: \n");
    scanf("%d",&m);
    int s=0,y;
    for(int i=0;i<m;i++) {
        scanf("%d",&y);
        s+=y;
    }
    printf("Required sum is %d ",s);
}
