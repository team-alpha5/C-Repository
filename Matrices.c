#include <stdio.h>

int main () {
 int i;
  int Mat[3][3];

  printf("Enter The First Row Elements:");
  for(i=0;i<3;i++){
    scanf("%d",&Mat[0][i]);
  }

  printf("Enter The Second row Elements:");
  for(i=0;i<3;i++){
    scanf("%d",&Mat[1][i]);
  }

    printf("Enter The Third Row Elements:");
    for(i=0;i<3;i++){
      scanf("%d",&Mat[2][i]);
    }

  printf("The Matrix Is :\n");
  for(i=0;i<3;i++){
    printf("\t %d",Mat[0][i]);
  }
  printf("\n");
  for(i=0;i<3;i++){
    printf("\t %d",Mat[1][i]);
  }
  printf("\n");
  for(i=0;i<3;i++){
    printf("\t %d",Mat[2][i]);
  }

return 0;
}
