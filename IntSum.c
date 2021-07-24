#include <stdio.h>

int main () {
  int Num,Sum=0,Remainder;

  printf("Enter An Integer:");
  scanf("%d",&Num);

  while(Num != 0){
    Remainder = Num%10;
    Sum += Remainder;
    Num = Num/10;
  }
  printf("\n%d",Sum);

return 0;
}
