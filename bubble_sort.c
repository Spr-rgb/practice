//Write Concept, Theory, algorithm, Flowchart and C Program  to implement and understand the working of the Bubble Sort algorithm for arranging elements of an array in ascending or descending order.

#include <stdio.h>
#include <conio.h>

void main() {
    int a[10], n, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("Sorted elements:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    getch();
}