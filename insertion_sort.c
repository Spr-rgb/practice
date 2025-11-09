//Write Concept, Theory, algorithm, Flowchart and C Program  to implement and understand the working of the Insertion Sort algorithm for arranging elements of an array in ascending or descending order.


#include <stdio.h>
#include <conio.h>

void main() {
    int a[10], n, i, j, key;
    

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 1; i < n; i++) {
        key = a[i];
        j = i - 1;

        while(j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }

    printf("Sorted elements:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    getch();
}