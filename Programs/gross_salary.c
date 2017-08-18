/*Ramesh's basic salary is input through the keyboard. His dearness allowance is
 40% of his basic pay, and house rent allowance is 20% of basic pay. Write a
 program to calculate his gross salary*/
/*Author:M.C.Agarwal Date:18.08.2017*/

#include<stdio.h>

int main()
{
  int bp;
  float da,hr,gs;

  printf("Enter your basic pay Rs");
  scanf("%d",&bp);

  /*Calculating the G.S.*/
  da=0.40*bp;
  hr=0.20*bp;
  gs=bp+da+hr;

  printf("Salary Information:\nBaic Pay: Rs%d\nDearness Allowance: Rs%f\nHouse rent: Rs%f\nGross Salary: Rs%f",bp,da,hr,gs);
  return 0;
}
