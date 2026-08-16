// Write a program to input an integer and check whether it is even or odd using if–else.

#include<stdio.h>

int main(){

    int n;
    int even;
    int odd;


    printf("Enter the integer :");
    scanf("%d" ,&n);
 
    if (n % 2 ==0){
       printf("The number is even\n");
    
    } else 
    printf("the number is odd\n");

   return 0;

}