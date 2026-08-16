 //utes:seconds formatWrite a program to input time in seconds and convert it to hours:min.

 #include<stdio.h>

 int main(){

    int H; //Hours
    int M; //Minutes
    int S; //Seconds
    int R; // Remaining

    printf("Enter time in Seconds :");
    scanf("%d" ,&S);

    H = S / 3600;
    R = S % 3600;
    M = R / 60;

    printf("Time = %d:%02d\n", H, M);

    return 0;
 }


