//Write Concept, Theory, algorithm, Flowchart and C Program  to implement a Queue using a static array with the operations Enqueue, dequeue and Display.

#include <stdio.h>
#include <conio.h>
#define MAX 5

void main() {
    int queue[MAX], front = -1, rear = -1, choice, item, i;


    while(1) {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\nEnter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {   // Enqueue
            if(rear == MAX - 1)
                printf("Queue is Full!\n");
            else {
                printf("Enter item: ");
                scanf("%d", &item);
                if(front == -1)
                    front = 0;
                rear++;
                queue[rear] = item;
            }
        }

        else if(choice == 2) {  // Dequeue
            if(front == -1 || front > rear)
                printf("Queue is Empty!\n");
            else {
                printf("Deleted item: %d\n", queue[front]);
                front++;
            }
        }

        else if(choice == 3) {  // Display
            if(front == -1 || front > rear)
                printf("Queue is Empty!\n");
            else {
                printf("Queue elements: ");
                for(i = front; i <= rear; i++)
                    printf("%d ", queue[i]);
                printf("\n");
            }
        }

        else
            printf("Invalid choice!\n");
    }

    getch();
}
