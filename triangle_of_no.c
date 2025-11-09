//Write a  Concept, Theory, algorithm, Flowchart and C Program to display the following patterns like Right-angle triangle with a number.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i, j, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    getch();
    return 0;
}