/*Program to read and display a 2 dimensional array*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],i,j;
	clrscr();
	printf("Enter the matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d ",&a[i][j]);
	}
	printf("\n The matrix is:");
	for(i=0;i<3;i++)
	{
	     printf("\n");
	     for(j=0;j<3;j++)
	     {
		 printf("\t %d",a[i][j]);
	     }
	}
getch();
}
