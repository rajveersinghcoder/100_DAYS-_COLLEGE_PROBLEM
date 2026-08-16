// Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include<stdio.h>

int main(){

    char a;
    char e;
    char i;
    char o;
    char u;

    printf("Enter the Character :");
    scanf("%c" ,&a);

    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u'){

        printf("The character is vowel\n");
    }
   else { 
    
    printf("The character is consonant\n");

   }
      return 0;

}