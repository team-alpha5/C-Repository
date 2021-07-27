#include <stdio.h>

int main () {
  int i,j;
  int Matrix[3][3];

  printf("Enter The Values Of A 3X3 Matrix:");
    for(i=0;i<3;i++){
      for(j=0;j<3;j++){
        scanf("%d",&Matrix[i][j]);
      }
    }

  printf("\nThe Matrix Is:");

  for(i=0;i<3;i++){
    printf("\n");
    for(j=0;j<3;j++){
      printf("\t%d",Matrix[i][j]);
    }
  }

return 0;
}
