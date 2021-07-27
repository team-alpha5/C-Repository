#include <stdio.h>

int main() {

 int Array0[10][10];
 int Array1[10][10];
 int ArrayMul[10][10];

 int a,b,i,j,k,l,x,y,z,m,n,Summ=0;

 printf("This Is A Matrix Multiplier!");

 printf("\n Enter The Size i.e a,b Of a axb matrix:");
  scanf("%d %d",&a,&b);

 printf("\n Enter The Elements Of First Matrix:");
 for(i=0;i<a;i++){
   printf("\n");
   for(j=0;j<b;j++){
     printf("  Element [%d][%d]:",i+1,j+1);
     scanf("%d",&Array0[i][j]);
   }
 }

 printf("\n Enter The Elements Of Second Matrix:");
 for(k=0;k<a;k++){
   printf("\n");
   for(l=0;l<b;l++){
     printf("  Element [%d][%d]:",k+1,l+1);
     scanf("%d",&Array1[k][l]);
   }
 }

for(x=0;x<a;x++){
  for(y=0;y<b;y++){
    ArrayMul[x][y]=0;
    for(z=0;z<b;z++){
      ArrayMul[x][y] += (Array0[x][z]*Array1[z][y]);
    }
  }

}

for(m=0;m<a;m++){
  printf("\n");
  for(n=0;n<b;n++){
    printf("\t %d",ArrayMul[m][n]);
  }
}

return 0;
}
