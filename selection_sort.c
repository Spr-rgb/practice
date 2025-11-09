//Write Concept, Theory, algorithm, Flowchart and C Program  to implement and understand the working of the Selection Sort algorithm for arranging elements of an array in ascending or descending order.



#include <stdio.h>
#include <conio.h>

void main() {
    int a[10], n, i, j, temp, min;
    

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n - 1; i++) {
        min = i;
        for(j = i + 1; j < n; j++) {
            if(a[j] < a[min])
                min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    printf("Sorted elements:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    getch();
}
