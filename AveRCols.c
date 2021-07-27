#include <stdio.h>

int  main() {

  int i,j,jj,m,n,Matrix[5][5] = {0},Average = 0,Sum = 0;

  printf("\t\t\t\t\t**Average Of Rows And Columns!**\n");
  printf("Enter The Size Of The Matrix m x n:");
  scanf("%d %d",&m,&n);

  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      printf("Enter Value At [%d][%d]:",i,j);
      scanf("%d",&Matrix[i][j]);
    }//inner for loop//
  }//outer for loop//
printf("\n");
if(n>1){
  for(i=0;i<m;i++){
    Sum = 0;
    for(j=0;j<=n;j++){
      jj = j;
      if(j != n){
        Sum += Matrix[i][j];
        printf("%4d",Matrix[i][j]);
      }
      else{
      Average = Sum/n;
       printf(": %d",Average);
     }
    }
    if(jj  == n){
      printf("\n");
    }
  }
}
  printf("\n");
if(m>1){
  for(i=0;i<n;i++){
  Sum = 0;
  for(j=0;j<=m;j++){
  if(j != m){
  Sum += Matrix[j][i];
   }
else{
Average = Sum/m;
printf("%4d",Average);
   }
  }
 }
}

return 0;
}
