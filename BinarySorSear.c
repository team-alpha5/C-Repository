#include <stdio.h>

int main () {

int Array[20];
int i,j,k,l,Temp;

printf("Enter 10 Elements to Sort In Ascending Order\n");
for(l=0;l<10;l++){
  scanf("%d",&Array[l]);
}

for(i=0;i<9;i++){

  for(j=0;j<9-i;j++){
    if(Array[j]>Array[j+1]){
      Temp= Array[j];
      Array[j] = Array[j+1];
      Array[j+1] = Temp;
    }
  }
}

for(k=0;k<10;k++){
  printf("%d  ",Array[k]);
}

int a,b,Found,Low,High,Mid,Zeus;
Found=0;
Zeus=20;

Low=0;
High=10;

while(Low<=High){

  Mid=(Low+High)/2;

  if(Zeus == Array[Mid]){
    printf("Meow At %d",Mid);
    Found=1;
    break;
  }
  else if (Zeus<Array[Mid]){
    High=Mid-1;
  }
  else if (Zeus>Array[Mid]){
    Low=Mid+1;
  }
}
if (!Found){
  printf("Not Found");

}

return 0;
}
