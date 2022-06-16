/* Write a program to make simple calculator using switch */ 

#include <stdio.h>
#include <math.h>
int main()
 {
    char op;
    int num1, num2;
    printf ("Enter an operator (+, -, *,\): ");
    scanf ("%c", &op);
    printf ("Enter number 1: ");
    scanf ("%d", &num1);
    printf ("Enter number 2:");
    scanf ("%d", &num2);

    switch (op)
	 {
    case '+':
        printf ("%d + %d = %d", num1, num2, num1 + num2);
        break;
    case '-':
        printf ("%d - %d = %d",  num1, num2, num1 - num2);
        break;
    case '*':
        printf ("%d * %d = %d",  num1, num2, num1 * num2);
        break;
    case '/':
        printf ("%d / %d = %d",  num1, num2, num1 / num2);
        break;
    default:
        printf ("Invaild number");
    }
}
