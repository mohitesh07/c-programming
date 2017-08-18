/*The lenght and breadth of the rectangle and the radius of the circle are input
through the keyboard. Write a program to calculate the area and perimeter of the
rectangle, and the area and circumference of the circle.*/
/*Author:M.C.Agarwal  Date:18.08.2017*/

#include<stdio.h>

int main()
{
  float l,b,r,ar,pr,ac,pc;
  printf("-------INPUT--------\n");
  printf("-------Rectangle----\n");
  printf("Length(cm) : ");
  scanf("%f",&l);
  printf("Breadth(cm) : ");
  scanf("%f",&b);
  printf("------Circle--------\n");
  printf("Radius(cm) : ");
  scanf("%f",&r);
  printf("\n");

  /*  calculations  */
  ar=l*b;
  pr=2*(l+b);
  ac=3.14*r*r;
  pc=2.0*3.14*r;

  printf("--------OUTPUT--------\n");
  printf("Area of rectangle= %fcm2\n",ar);
  printf("Perimeter of rectangle= %fcm\n",pr);
  printf("Area of circle= %fcm2\n",ac);
  printf("Circumference of circle= %fcm\n",pc);

  return 0;
}
