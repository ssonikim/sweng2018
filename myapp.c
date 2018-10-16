#include "func1.h"
#include "func2.h"
#include <stdio.h>


void preprocess()
{
  printf("do some preprocessing\n");
}
int main(void)
{
  preprocess();
  foo1();
  foo2();
  return 0;
}
