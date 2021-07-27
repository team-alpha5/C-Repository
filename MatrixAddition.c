#include <stdio.h>
#define Row 4
#define Col 4

int main () {

  int Mat0[Row][Col],Mat1[Row][Col],Sum[Row][Col];
  int m,n;

  printf("Enter The Size Of The Matrix mxn:");
  scanf("%d %d",&m,&n);

  printf("\n Enter The 1st Matrix Values:\n");
  for(int i=0;i<m;i++){
    for(int j=0;j<=n;j++){
      if(j!=n){
      printf("\t Element[%d][%d]=",i,j);
            scanf("%d",&Mat0[i][j]);
    }
    else{
      printf("\n");
    }
    }
  }

  printf("\n Enter The 2nd Matrix Values:\n");
  for(int i=0;i<m;i++){
    for(int j=0;j<=n;j++){
      if(j!=n){
      printf("\t Element[%d][%d]=",i,j);
            scanf("%d",&Mat1[i][j]);
    }
    else{
      printf("\n");
    }
    }
  }

  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      Sum[i][j]=Mat0[i][j] + Mat1[i][j];
    }
  }
  printf("\nThe Addition Of Both The Matrix Results Is A Matrix:\n");
  for(int i=0;i<m;i++){
    for(int j=0;j<=n;j++){
      if(j!=n){
      printf("\t%d",Sum[i][j]);
    }
    else{
      printf("\n");
    }
    }
  }

return 0;
}
