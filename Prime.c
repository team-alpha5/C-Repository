#include <stdio.h>

int main () {

  int Prime = 1,Num,i,j;
  printf("Enter A Number:");
  scanf("%d",&Num);

  for(i=2;i<=Num/2;i++){
    if(Num%i == 0){
      Prime=0;
      break;
    }
  }

  if(Num == 1){
    printf("\nNumber Is Neither Prime Nor Composite LoL");
  }
  else if(Prime == 1){
    printf("\n The Number Is A Prime  Number!");
  }
  else
  printf("\n The Number Is Not A Prime Number!");
}
