// Write a program to input two numbers and display their sum.

#include<stdio.h>

int main(){

    float a;
    float b;

    printf("Enter the value of a :\t");
    scanf("%f" ,&a);

    printf("Enter the value of b :\t");
    scanf("%f" ,&b);

    printf("The sum of the numbers a and b is %f\n" ,(a+b));


    return 0;

}