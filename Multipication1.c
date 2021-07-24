#include <stdio.h>

int main () {

  int Num,i=0;

  printf("\n\tThis Program Prints The Multipicative Table Upto 10 Numbers Of A Number 'N'!");
  printf("\n\nEnter The Value Of 'N':");
  scanf("%d",&Num);

  while(i <= 10){
    printf("\n\n%d X %d = %d",Num,i,Num*i);
    i++;
  }





return 0;
}
