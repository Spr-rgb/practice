//Write Concept, Theory, algorithm, Flowchart and C Program   to implement a Stack using a static array, with the operations Pop and Display

#include <stdio.h>
#include <conio.h>
#define MAX 5

void main() {
    int stack[MAX], top = -1, choice, item, i;
    clrscr();

    while(1) {
        printf("\n1. Push\n2. Pop\n3. Display\nEnter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            if(top == MAX - 1)
                printf("Stack is Full!\n");
            else {
                printf("Enter item: ");
                scanf("%d", &item);
                top++;
                stack[top] = item;
            }
        }
        else if(choice == 2) {
            if(top == -1)
                printf("Stack is Empty!\n");
            else {
                printf("Deleted item: %d\n", stack[top]);
                top--;
            }
        }
        else if(choice == 3) {
            if(top == -1)
                printf("Stack is Empty!\n");
            else {
                printf("Stack elements: ");
                for(i = top; i >= 0; i--)
                    printf("%d ", stack[i]);
                printf("\n");
            }
        }
        else
            printf("Invalid choice!\n");
    }

    getch();
}