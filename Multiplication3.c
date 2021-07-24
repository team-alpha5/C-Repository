#include <stdio.h>

int main () {

  int Num,i=0;

  printf("\n\t***This Program Prints The  Multiplicative Table FOr A Number 'N'!***");
  printf("\n\nEnter The Value Of 'N':");
  scanf("%d",&Num);

  do{
    printf("\n\n%d X %d = %d",Num,i,Num*i);
    i++;
  }while(i <= 10);

return 0;
}
