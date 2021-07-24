#include <stdio.h>

int main () {
  float si,p,t,r;
  printf("Enter Principal amount: ");
  scanf("%f",&p);
  printf("\nEnter Annual Intrest Rate: ");
  scanf("%f",&r);
  printf("\nEnter The Time Period(in Years): ");
  scanf("%f",&t);

  si = (p*t*r)/100;

  printf("\n%.2f",si);

return 0;
}
