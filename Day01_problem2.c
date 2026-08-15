// Write a program to input two numbers and display their sum, difference, product, and quotient.

#include<stdio.h>

int main(){

    int a;
    int b;

    printf("Enter the value of a :\t");
    scanf("%d" ,&a);

    printf("Enter the value of b :\t");
    scanf("%d" ,&b);

    printf("The sum of the numbers a and b is %d\n" ,(a+b));

    printf("The difference of numbers a and b is %d\n" ,(a-b));

    printf("The product of the numbers a and b is %d\n" ,(a*b));

    
    if (b == 0) {
        printf("The quotient when a divided by b is undefined \n");
    } else {
        printf("The quotient when a divided by b is %d\n", (a / b));
    }

    return 0;
}
  