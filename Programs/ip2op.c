#include<stdio.h>

/*copy input to output; version 2*/
main()
{
  int c;

  while((c=getchar())!=EOF)
    putchar(c);
  printf("Hello, world");
}
