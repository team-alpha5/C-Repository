#include <stdio.h>

int main () {

  FILE *spFile;

  spFile = fopen("TEXT.txt","r");
  if(!spFile){
    printf("Hey, Yo Your File Couldn't Be Opened.");
  }
  else
  printf("\n Your File Has Successfully Been Opened In Read Mode");

  fclose(spFile);
}
