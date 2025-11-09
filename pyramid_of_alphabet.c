//Write Concept, Theory, algorithm, Flowchart and C Program  to display the following patterns like Pyramid using the alphabet.
#include<stdio.h>
#include<conio.h>
int main()
{
  int i, j, space, rows;
  char ch;
  printf("Enter number of rows: ");
  scanf("%d", &rows);
  for(i = 1; i <= rows; i++)
  {
    ch = 'A';
    for(space = 1; space <= rows - i; space++)
      printf(" ");
    for(j = 1; j <= i; j++)
    {
      printf("%c ", ch);
      ch++;
    }
    printf("\n");
  }
  getch();
  return 0;  
}