/* Write a program in C for address calculation of an element in 2D array
   Author:Mohitesh Ch Agarwal
   Date:1.09.2017 */

#include<stdio.h>
#include<stdlib.h>
void input(int sp[20][3]);
void display(int sp[20][3]);
void add(int sp1[20][3],int sp2[20][3],int sp3[20][3]);

int main()
{

	/* declaring the sparse matrices */
	int sp1[20][3],sp2[20][3],sp3[20][3];

	/* accepting the sparse matrices */
	printf("Enter the first sparse matrix\n");
	input(sp1);
	printf("Enter the second sparse matrix\n");
	input(sp2);

	/* adding the sparse matrix */
	add(sp1,sp2,sp3);

	/* printing the sparse matrix */
	printf("First sparse matrix is\n");
	display(sp1);
	printf("Second sparse matrix is\n");
	display(sp2);
	printf("Third sparse matrix is\n");
	display(sp3);
}//end of main
void input(int sp[20][3])
{
	int i,j,k,t,r,c;

	printf("Enter r and c: ");
	scanf("%d %d",&r,&c);
	printf("Enter the data\n");
	k=1;

	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
		{
			scanf("%d",&t);
			if(t!=0)
			{
				sp[k][2]=t;
				sp[k][0]=i;
				sp[k][1]=j;
				k++;
			}
		}
	sp[0][0]=r;
	sp[0][1]=c;
	sp[0][2]=k-1;
}//end of input function

void display(int sp[20][3])
{


	int r=sp[0][0],c=sp[0][1],k=1,i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
				if(sp[k][0]==i && sp[k][1]==j)
				{
					printf("%d \t",sp[k][2]);
					k++;
				}
				else
					printf("0 \t");
		}
		printf("\n");
	}
}//end of display

void add(int sp1[20][3],int sp2[20][3],int sp3[20][3])
{
	int i,j,k;
	if((sp1[0][0]!=sp2[0][0])||(sp1[0][1]!=sp2[0][1]))
	{
		printf("Invalid matrix size\n");
		exit(0);
	}
	i=1;j=1;k=1;
	int size1=sp1[0][2],size2=sp2[0][2];

	while(i<=size1 && j<=size2)
	{
		if(sp1[i][0]<sp2[j][0])
		{
			sp3[k][0]=sp1[i][0];
			sp3[k][1]=sp1[i][1];
			sp3[k++][2]=sp1[i++][2];
		}
		else if(sp1[i][0]>sp2[j][0])
		{
			sp3[k][0]=sp2[j][0];
			sp3[k][1]=sp2[j][1];
			sp3[k++][2]=sp2[j++][2];
		}
		else
		{
			if(sp1[i][1]<sp2[j][1])
			{
				sp3[k][0]=sp1[i][0];
				sp3[k][1]=sp1[i][1];
				sp3[k++][2]=sp1[i++][2];
			}
			else if(sp1[i][1]>sp2[j][2])
			{
				sp3[k][0]=sp2[j][0];
				sp3[k][1]=sp2[j][1];
				sp3[k++][2]=sp3[j++][2];
			}
			else
			{
				sp3[k][0]=sp1[i][0];
				sp3[k][1]=sp1[i][1];
				sp3[k++][2]=sp1[i][2]+sp2[j][2];
				i++;j++;
			}
		}//end of else
	}//end of while

	while(i<=size1)
	{
		sp3[k][0]=sp1[i][0];
		sp3[k][1]=sp1[i][1];
		sp3[k++][2]=sp1[i++][2];
	}
	while(j<=size2)
	{
		sp3[k][0]=sp2[j][0];
		sp3[k][1]=sp2[j][1];
		sp3[k++][2]=sp2[j++][2];
	}

	sp3[0][0]=sp1[0][0];
	sp3[0][1]=sp1[0][1];
	sp3[0][2]=k-1;
}//end of add function
