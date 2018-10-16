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
void turbo_on()
{
  printf("turbo on\n");
}
void turbo_off()
{
  printf("turbo off\n");
}
int main(void)
{
  preprocess();
  turbo_on();

  func1();
  func2();

  turbo_off();
  postprocess();

  return 0;
}
