#include <stdio.h>

int main () {

  int Mat1[10][10],Mat2[10][10],MulMat[10][10],m1,m2,n1,n2,i,j,k;

  printf("***This Is A Matrix Multiplication Program!***");

  printf("\n\n   Enter The Size Of The First Matrix(m1 x n1):");
  scanf("%d%d",&m1,&n1);

  printf("\n\n   Enter The Size Of The second Matrix(m2 x n2):");
  scanf("%d%d",&m2,&n2);

  if(n1 == m2){

  printf("\n\n\n   Enter The Elements Of The First Matrix:");
   for(i=0;i<m1;i++){
     for(j=0;j<n1;j++){
       printf("\n [%d][%d]:",i+1,j+1);
       scanf("%d",Mat1[i][j]);
     }
   }

   printf("\n\n   Enter The Elements Of The Second Matrix:");
    for(i=0;i<m2;i++){
      for(j=0;j<n2;j++){
        printf("\n [%d][%d]:",i+1,j+1);
        scanf("%d",Mat2[i][j]);
      }
    }
    //The Main For Loop For Multiplication Of The  Two Matrices!
    for(i=0;i<m1;i++){
      for(j=0;j<n2;j++){
        MulMat[i][j]=0;
         for(k=0;k<n2;k++){
           MulMat[i][j]+=Mat1[i][k]*Mat2[k][j];
         }
      }
    }

 for(i=0;i<m1;i++){
   for(j=0;j<n2;j++){
     printf("%d",MulMat[i][j]);
   }
 }

  }
  else
  printf("n1 ANd m2 Should Be Equal!");

return 0;
}
