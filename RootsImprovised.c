#include <stdio.h>
#include <math.h>

int main () {

  printf("\n***This Program Tells The Nature Of The Roots And The Roots Of A Quadratic Expression Of The Form ax^2+bx+c!***");
  int a,b,c,x,y,z;
  printf("\nEnter the values of a,b,c:");
  scanf("%d %d %d",&a ,&b ,&c );

  x=b*b-4*a*c;
  if(x > 0)
  printf("\nThe Quadratic Expression has Real And Distinct Roots!");
  else if (x == 0)
  printf("\nThe Quadratic Expression has Real And Equal Roots!");
  else
  printf("\nThe Quadratic Expression has Imaginary Or No Roots!");


  y= (-b-sqrt(x))/2*a;
  z= (-b+sqrt(x))/2*a;
  if(x > 0 || x ==0)
  printf("\nThe Roots Are %d And %d!",y,z);



return 0;
}
