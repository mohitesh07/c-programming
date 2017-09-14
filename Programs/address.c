
/* Write a program (in C) for address calculation of an element in 2 dimentional   array(row major order and column major order).
   Author:Mohitesh Ch Agarwal
   Date:31.08.2017 */

#include<stdio.h>

void input(int*,int*,int*,int*);

int main()
{
	int a[10][10],ch;
	int i,j,r,c;
	unsigned int add;

	/* getting input from the user */
	input(&i,&j,&r,&c);

	unsigned int b=(unsigned int)&a[0][0];//calculating the base address

	printf("Press 1 for row major wise\n");
	printf("Press 2 for column major wise\n");
	scanf("%d",&ch);

	switch(ch)
	{
	case 1:
	add=b+sizeof(int)*((i-0)*c+(j-0));
	printf("BASE ADDRESS: %d\n",b);
	printf("ADRESS OF a[%d][%d]: %d\n",i,j,add);
	break;
	case 2:
	add=b+sizeof(int)*((i-0)+(j-0)*r);
	printf("BASE ADDRESS: %d\n",b);
	printf("ADRESS OF a[%d][%d]: %d\n",i,j,add);
	break;
	default:
	printf("Invalid Entry");
	}//end of switch case
}//end of main

void input(int *i,int *j,int *r,int *c)
{
	printf("Enter the number of rows of the matrix: ");
	scanf("%d",r);
	printf("Enter the number of columns of the matrix: ");
	scanf("%d",c);
	printf("To calculate the address of a[i][j]\n");
	printf("i= ");
	scanf("%d",i);
	printf("j= ");
	scanf("%d",j);
}//end of input
