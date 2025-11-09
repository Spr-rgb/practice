//Write Concept,Theory, algorithm, Flowchart and C Program   to check for balanced parentheses (including (),{},[])using a stack.

#include <stdio.h>
#include <conio.h>
#include <string.h>

#define MAX 50

void main() {
    char exp[MAX], stack[MAX];
    int top = -1, i;


    printf("Enter expression: ");
    gets(exp);

    for(i = 0; exp[i] != '\0'; i++) {
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
            stack[++top] = exp[i];
        else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']') {
            if(top == -1) {
                printf("Not Balanced");
                getch();
                return;
            }
            if((exp[i] == ')' && stack[top] != '(') ||
               (exp[i] == '}' && stack[top] != '{') ||
               (exp[i] == ']' && stack[top] != '[')) {
                printf("Not Balanced");
                getch();
                return;
            }
            top--;
        }
    }

    if(top == -1)
        printf("Balanced");
    else
        printf("Not Balanced");

    getch();
}