//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main() {
    char op;
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Enter operator (+,-,*,/,%%): ");
    scanf(" %c", &op);

    switch(op) {
        case '+': printf("%.2f\n", a+b); break;
        case '-': printf("%.2f\n", a-b); break;
        case '*': printf("%.2f\n", a*b); break;
        case '/': 
            if(b!=0) printf("%.2f\n", a/b);
            else printf("Cannot divide by zero\n");
            break;
        case '%': 
            if((int)b!=0) printf("%d\n", (int)a % (int)b);
            else printf("Cannot divide by zero\n");
            break;
        default: printf("Invalid operator\n");
    }

    return 0;
}
