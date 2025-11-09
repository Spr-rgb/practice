//Write Concept, Theory, algorithm, Flowchart and C Program   to implement and understand  a Stack using a static array, with the operations Push, pop and Display



#include <stdio.h>
#include <conio.h>

void main() {
    int a[20], n, i, key, found = 0;
    

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(a[i] == key) {
            printf("\nElement found at position %d", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("\nElement not found!");

    getch();
}