//Write Concept, Theory, algorithm, Flowchart and C Program  to implement and understand the working of the Binary Search algorithm for finding a specific element in a sorted list or array .
#include <stdio.h>
#include <conio.h>

void main() {
    int a[10], n, i, key, low, high, mid;
   

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(a[mid] == key) {
            printf("Element found!");
            break;
        }
        else if (key < a[mid])
        {
             high = mid - 1;
        }
           
        else if (key > a[mid])
        {
            low = mid + 1;
        }
        
           
        else {
            printf("Element not found!");
        }
    }

   
    getch();
}