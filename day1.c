Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19
/*
#include <stdio.h>

int main() 
{
    int a = 3;
    int b = 4;
    int sum;

    sum = a + b;

    printf("sum=%d", sum);

    return 0;
} 
    #include <stdio.h>

int main() 
{
    int a = -1;
    int b = 20;
    int sum;

    sum = a + b;

    printf("sum=%d", sum);

    return 0;
}
