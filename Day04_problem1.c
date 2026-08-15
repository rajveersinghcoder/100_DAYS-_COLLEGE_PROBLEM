// Write a program to swap two numbers without using a third variable.

#include<stdio.h>

int main(){

    int a;
    int b;

    printf("Enter the fisrt number :");
    scanf("%d" ,&a);

    printf("Enter the second number :");
    scanf("%d" ,&b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("After swapping:\n");
    printf("First number %d\n" ,a);
    printf("Second number %d\n" ,b);



    return 0;
}