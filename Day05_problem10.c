// Write a program to calculate simple and compound interest for given principal, rate, and time.

#include<stdio.h>
#include<math.h>

int main(){

    float p;
    float r;
    float t;

    printf("Enter principal :");
    scanf("%f" ,&p);

    printf("Enter rate of interest :");
    scanf("%f" ,&r);

    printf("Enter time :");
    scanf("%f" ,&t);

    printf("Simple Interest = %f\n" ,(p*r*t)/100);

    printf("Compund Interest = %f" , p * pow ((1 + r / 100), t) - p); 



    return 0;

}