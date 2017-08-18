/*  Two numbers are input through the keyboard into two locations C and D. Write
a program to interchange the contents of C and D   */
/* Author:M.C.Agarwal Date:18.08.2017 */

#include<stdio.h>

int main()
{
  int c,d;

  printf("----INPUT----\n");
  printf("C=");
  scanf("%d",&c);
  printf("D=");
  scanf("%d",&d);

  /*swapping*/
  c=(c+d)-(d=c);

  printf("----OUTPUT----\n");
  printf("C=%d\n",c);
  printf("D=%d\n",d);

  return 0;
}
