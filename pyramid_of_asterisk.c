//Write Concept, Theory, algorithm, Flowchart and C Program  to display the following patterns like Pyramid with an asterisk.
#include<stdio.h>
#include<conio.h>
int main()
{
  int i,j,space,rows;
  printf("Enter number of rows: ");
  scanf("%d",&rows);
  for(i=1;i<=rows;i++)
  {
    for(space=1;space<=rows-i;space++)
    printf(" ");
    for(j=1;j<=2*i-1;j++)
      printf("*");
    printf("\n");
  }
getch();
return 0;
}