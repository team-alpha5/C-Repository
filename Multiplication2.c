#include <stdio.h>

int main () {

  int Num,i;

  printf("\t\t***This Program Prints The Multiplicative Table of A Number 'N'!***");
  printf("\nEnter The Value Of 'N':");
  scanf("%d",&Num);

  for(i=0;i<=10;++i)

    printf("\n\t%d X %d = %d",Num,i,Num*i);



return 0;
}
