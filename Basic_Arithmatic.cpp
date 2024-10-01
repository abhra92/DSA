/*
                                                                                                        Date-24/07/2024
Write a c program to implement Basic arithmatic operation like Addition, subtraction,divison using user defined function respectvely. Here give provision to insert input values form user-end at Runtime
*/
#include <stdio.h>
#include <conio.h>
void sum();
void sub();
void mul();
void div();

int main()
{
    sum();
    sub();
    mul();
    div();
    getch();
    return 0;
}

void sum()
{
    int x, y, sum;
    printf("\nEnter the value of x :");
    scanf("%d", &x);
    printf("\nEnter the value of y :");
    scanf("%d", &y);
    sum = x + y;
    printf("\nThe Addition of x+y = %d\n", sum);
}
void sub()
{
    int x, y, sub;
    printf("\nEnter the value of x :");
    scanf("%d", &x);
    printf("\nEnter the value of y :");
    scanf("%d", &y);
    sub = x - y;
    printf("\nThe Subtraction of x-y = %d\n", sub);
}
void mul()
{
    int x, y, mul;
    printf("\nEnter the value of x :");
    scanf("%d", &x);
    printf("\nEnter the value of y :");
    scanf("%d", &y);
    mul = x * y;
    printf("\nThe Multiplication of x*y = %d\n", mul);
}
void div()
{
    int x, y, div;
    printf("\nEnter the value of x :");
    scanf("%d", &x);
    printf("\nEnter the value of y :");
    scanf("%d", &y);
    div = x / y;
    printf("\nThe Division of x/y = %d\n", div);
}