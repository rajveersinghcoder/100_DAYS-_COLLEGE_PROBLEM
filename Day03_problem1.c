// Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>

int main(){   //F = (C × 9/5) + 32

    float c;

    printf("Enter the tempeature in Celsius :");
    scanf("%f" ,&c);

    printf("The temperature in Fahrenheit is %f" ,(c*9/5)+32);


    return 0;
}