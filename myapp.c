#include "func1.h"
#include "func2.h"
#include <stdio.h>

//void foo1();
//void foo2();

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
  turbo_on();

  func1();
  func2();

  turbo_off();

  return 0;
}
