#include <stdio.h>
#define Size 10
int BubbleSort(int* Array);
int printArray(int* Array);

int main () {

  int Array[Size]={6,65,45,35,689,3,25,415,33,10};
  BubbleSort(Array);
  printArray(Array);

return 0;
}

int BubbleSort(int* Array){
  int Temp;
  for(int i=0;i<Size-1;i++){
    for(int j=0;j<Size-1-i;j++){//this line is very important!
      if(Array[j]>Array[j+1]){
        Temp = Array[j];
        Array[j] = Array[j+1];
        Array[j+1] = Temp;
      }
    }
  }
}

int printArray(int* Array){
  for(int i=0;i<Size;i++){
    printf("%5d",Array[i]);
  }
}

//fist try
/*#include <stdio.h>

int main () {

  int Array[10];
  int i,j,Temp;

  printf("Enter 10 Elements:\n");
  for(i=0;i<10;i++){
    scanf("%d",&Array[i]);
  }

  for(i=0;i<9;i++){
    for(j=1;j<10-i;j++){
      if(Array[j-1]>Array[j]){
        Temp = Array[j];
        Array[j] = Array[j-1];
        Array[j-1]=Temp;
      }
    }
  }
  printf("\n");
  for(i=0;i<10;i++){
    printf("%d ",Array[i]);
  }
}
*/
