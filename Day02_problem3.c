// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>

int main(){

   float l;
   float b;

    printf("Enter the length of rectangle :\n");
    scanf("%f" ,&l);

    printf("Enter the breadth of rectangle :\n");
    scanf("%f" ,&b);

    printf("The perimeter of the rectangle is %f\n" ,2*(l+b));
    printf("The area of the rectangle is %f\n" ,(l*b));

    return 0;
}