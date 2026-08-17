// Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*#include<stdio.h>
 int main(){
    char ch = 'r';
    printf("The character is %c\n" , ch);
    printf("The value of character is %d\n" , ch);

    if (ch>=97 && ch<=122)
    printf("The character is a lowercase character");

    else{

        printf("The character is not a lowercase character");

    }


    return 0;
}*/

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter the character: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("Lowercase character\n");
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("Uppercase character\n");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special character\n");
    }

    return 0;
}


