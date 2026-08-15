// Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>

int main(){

    float r;
 

    printf("Enter the radius of circle :");
    scanf("%f" ,&r);

    printf("The circumference of circle is %f\n" ,(2*3.141592653*r));
     
    printf("The area of circle is %f" ,3.141592653*r*r);


    return 0;
}