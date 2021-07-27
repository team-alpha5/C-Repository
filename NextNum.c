#include<stdio.h>

int main () {

    int num;
    printf("Enter a Number:\n");
    scanf("%i",&num);

    printf("The number which comes after %i is %i.\n",num,num + 1);
    printf("The number which comes after %i is %i. \n",num + 1,num + 2);
    printf("The number which comes  after %i is %i.",num+2,num + 3);

  return 0;
}
