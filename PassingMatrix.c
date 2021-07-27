/*Date:15th of June
*This Program Is Made Only TO Understand The Concept Of Passing Arrays To Functions
*And I Will Also Make Use Of The Random Fuction In Range.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int PrintArray(int size,int Array[*]);//THe Only Valid Syntax For Passing A Variable Length Array.

int main (){

  int Array[10],Size=10,x;
  srand(time(NULL));

  for(int i = 0;i<10;i++){
    Array[i]= rand() % 11 + 10;
  }//for
  PrintArray(Size,Array);
return 0;
}//main

int PrintArray(int Size,int Array[Size]){
  for(int i = 0;i<Size;i++){
    printf("%5d",Array[i]);
  }
}
