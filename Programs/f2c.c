/*  Write a program to convert temperature from F to C  */
/*  Author:M.C.Agarwal Date:18.08.2017  */

#include<stdio.h>

int main()
{
  float f,c;
  printf("Enter the temperature in fahrenheit ");
  scanf("%f",&f);

  /*  Converting temperature from F to C  */
  c=((f-32)*5)/9;

  printf("The temperature in centigrade %f",c);
  return 0;
}
