/*Write a program to convert user input distance in K.m. to meter, feet, inch, c.m.*/
/*Author:M.C.Agarwal Date:18.08.2017*/

#include<stdio.h>

int main()
{
  float km,m,ft,in,cm;
  printf("Enter the distance in K.m. ");
  scanf("%f",&km);

  /*  calculations  */
  m=km*1000.0;
  ft=km*3280.84;
  in=km*39370.1;
  cm=km*100000;

  printf("%fK.m.=%fm\n%fK.m.=%fft\n%fK.m.=%fin\n%fK.m.=%fcm\n",km,m,km,ft,km,in,km,cm);
  return 0;
}
