#include <stdio.h>

int Pow(int x,int n);

int main ()  {

 int x,n,Summation=0,i=0;

  printf("Enter The Value Of 'x':");
  scanf("%d",&x);

  printf("\n\nEnter The Value Of 'n':");
  scanf("%d",&n);

  while(i<=n){
    Summation += Pow(x,i);
    i++;
  }

  printf("%d",Summation);

return 0;
}

int Pow (int x,int n){

int i=0,Power=1;

while (i<n){

  Power *= x ;
  i++;
}
return Power;
}
