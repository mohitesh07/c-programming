/* Write a program to calculate the aggregate and percentage of marks in five
  subjects input by the user  */
/* Author:M.C.Agarwal Date:18.08.2017 */

#include<stdio.h>

int main()
{
  int s1,s2,s3,s4,s5,agg;
  float per;
  printf("Enter the marks of five subjects ");
  scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);

  /*  Calculating the aggregate and percentage  */
  agg=s1+s2+s3+s4+s5;
  per=agg/5.0;

  printf("----REPORT CARD----\n");
  printf("Aggregate=%d\n",agg);
  printf("Percentage=%f%%\n",per);
  return 0;
}
