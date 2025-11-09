//Write Concept, Theory, algorithm, Flowchart and C Program  to display the following patterns like Diamond shape with numbers.
#include<stdio.h>
#include<comcat.h>
main()
{
    int i, j, space, n;

    printf("Enter number of rows (for top half): ");

    scanf("%d", &n);

    //Upper half
    for(i=1; i<n; i++) 
    {    
        for(space=1; space <n-i; space++)
        printf(" ");
        for(j = 1; j <= i; j++)
       printf("%d ", j);
        printf("\n"); 
    }
    //Lower half
    for(i=n; i>=1; i--)
    {    
        for(space=1; space <n-i; space++)
        printf(" ");
        for(j = 1; j <= i; j++)
        printf("%d ", j);
        printf("\n"); 
    }
}