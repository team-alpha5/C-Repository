//Date: 16th June
#include <stdio.h>
#define Size 10

char Sort(char* pArray);
void printData(char* Array);

int main() {
  char Array[10] = {'k','m','u','i','r','e','t','q','z','g'};
  Sort(Array);
  printData(Array);

return 0;
}//main

void printData(char* Array){
  for(int i=0;i<10;i++){
    printf("%5c",Array[i]);
  }
}

char Sort(char* Array){
  int Temp;
  for(int i=0;i<Size-1;i++){
    for(int j=0;j<Size-1-i;j++){//this line is very important!
      if((int)Array[j]>(int)Array[j+1]){
        Temp = Array[j];
        Array[j] = Array[j+1];
        Array[j+1] = Temp;
      }
    }
  }
}
