#include <stdio.h>

int main () {

  int n,i=0,a=0,b=1,Sum=0;
  printf("***This Program Prints The First n Fibonacci Series Of Numbers!***");
  printf("\nEnter The Value Of n:");
  scanf("%d",&n);

  while (i < n){
    printf(" %d ",a);
    Sum=a+b;
    a=b;
    b=Sum;
    i++;
  }


return 0;
}
