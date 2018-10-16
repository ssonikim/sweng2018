#include "func1.h"
#include "func2.h"
#include <stdio.h>

void postprocess()
{
  printf("do some postprocess");
}

void preprocess()
{
  printf("do some preprocessing\n");
}
int main(void)
{
  preprocess();
  foo1();
  foo2();
  postprocess();
  return 0;
}
