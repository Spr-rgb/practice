//Write Concept, Theory, algorithm, Flowchart and C Program  to Develop a Student Result Management System that can efficiently store student records, maintain their subject-wise marks, and display their results when required. Perform Operation 1) Create 2)  Search 3) Print/Display  

#include <stdio.h>
#include <conio.h>

void main() {
    int roll, sroll;
    char name[20];
    float marks;


    printf("Enter Roll No: ");
    scanf("%d", &roll);
    printf("Enter Name: ");
    scanf("%s", name);
    printf("Enter Marks: ");
    scanf("%f", &marks);

    printf("\n--- Student Record Created ---");

    printf("\n\nEnter Roll No to Search: ");
    scanf("%d", &sroll);

    if(sroll == roll) {
        printf("\nRecord Found!");
        printf("\nName: %s", name);
        printf("\nRoll No: %d", roll);
        printf("\nMarks: %.2f", marks);
    } else {
        printf("\nRecord Not Found!");
    }

    printf("\n\n--- Displaying Student Record ---");
    printf("\nName: %s", name);
    printf("\nRoll No: %d", roll);
    printf("\nMarks: %.2f", marks);

    getch();
}