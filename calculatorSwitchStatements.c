//calculator

#include <stdio.h>

int main () {

double first, second;
char oper;

printf("Enter your first number: ");
if (scanf("%lf", &first) != 1) {
    printf("Invalid Input! Please enter a number!\n");
    return 1;
}


printf("Kindly enter your operation (+, -, *, /): ");
scanf(" %c", &oper);

printf("Enter your second number: ");
if (scanf("%lf", &second) != 1) {
    printf("Invalid Input! Please enter a number!\n");
    return 1;
}



    switch (oper) {
        case '+':
            printf("\nThe sum of %.2lf and %.2lf is %.2lf", first, second, first+second);
            break;
        case '-':
            printf("\nThe difference of %.2lf subtracted by %.2lf is %.2lf", first, second, first-second);
            break;
        case '/':
            printf("\nThe quotient of %.2lf divided %.2lf is by %.2lf", first, second, first/second);
            break;
        case '*':
            printf("\nThe product of %.2lf and %.2lf is %.2lf", first, second, first*second);
            break;
        default:
            printf("\nError! Please enter a valid operation.");
    }








return 0;
}



