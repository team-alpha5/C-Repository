#include <stdio.h>

int main() {

  int a,b,c;

  printf("\t****This Program Prints The Greatest Of The Three Numbers!***''");

  printf("\n\n\n\tEnter The Three Numbers:");
  scanf("%d %d %d",&a,&b,&c);

  if(a>b && a>c)
  printf("\n\n\n\t%d Is The Greatest Of The Three Numbers!",a);
  else if(b>a && b>c)
  printf("\n\n\n\t%d Is The Greatest Of The Three Numbers!",b);
  else
  printf("\n\n\n\t%d Is  The Greatest Of The Three Numbers!",c);

return 0;
}
