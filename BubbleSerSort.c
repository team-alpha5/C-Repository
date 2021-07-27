#include <stdio.h>

int main () {

  int Array[50];
  int i,j,Key,Size,Temp;

  printf("Enter Size:");
  scanf("%d",&Size);

  printf("\nEnter The Elements:");
  for(i=0;i<Size;i++){
    scanf("%d",&Array[i]);
  }
  for(i=0;i<Size;i++){
    for(j=1;j<Size-i;j++){
      if(Array[j-1]>Array[j]){
        Temp = Array[j-1];
        Array[j-1] = Array[j];
        Array[j]=Temp;
      }
    }
  }
//Binary Search

for(i=0;i<Size;i++){
  printf("%d ",Array[i]);
}

printf("\nEnter The Element  You Want To Search:");
scanf("%d",&Key);

int Low=0,Mid,High,Found=0;
High = Size;

while(Low<=High){

 Mid = (Low + High)/2;

  if(Key == Array[Mid]){
    printf("\nElement Found At %d",Mid+1);
    Found = 1;
    break;
  }
  else if(Key<Array[Mid]){
    High = Mid-1;
  }
  else if(Key>Array[Mid]){
    Low = Mid + 1;
  }

}

}
