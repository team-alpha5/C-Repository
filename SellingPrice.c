#include <stdio.h>

int main () {
  float cp,sp,pp;
  printf("cp:");
  scanf("%f",&cp);
  printf("\npp:");
  scanf("%f",&pp);

  sp = cp*((100+pp)/100);

  printf("SP is %.2f",sp);

return 0;
}
