#include <stdio.h>
#include <math.h>

int NatureOfRoots(int a,int b,int c);
int Roots(int a,int b,int c);

int main () {

  int a,b,c; //These Are The Coeffs Of A Quadratic Equation Of The Form ax^2+bx+c=0
  printf("Enter The Coefficient Values a,b,c Of ax^2+bx+c.\n");
  scanf("%d %d %d",&a,&b,&c);

  NatureOfRoots(a,b,c);

  Roots(a,b,c);

return 0;
}

int NatureOfRoots(int a,int b,int c) {

  int bsqr,FourTimesac,x;
  bsqr = b*b;
  FourTimesac = 4*a*c;
  x = bsqr-FourTimesac;

  if(x > 0)
  printf("The Quadratic Expression Has Real And Distinct Roots!");
  else if(x == 0)
  printf("The Quadratic Expression Has Real And Unique Roots!");
  else
  printf("The  Quadratic Expression Has Imaginary Roots!");

return 0;
}

int Roots(int a,int b,int c){

  int x,Rzap,Rwap;
  int bsqr,FourTimesac;
  bsqr = b*b;
  FourTimesac = 4*a*c;
  x=bsqr-FourTimesac;
  Rzap= (-b-sqrt(x))/2*a;
  Rwap= (-b+sqrt(x))/2*a;

  printf("\nThe Roots Are %d and %d",Rzap,Rwap);
}
