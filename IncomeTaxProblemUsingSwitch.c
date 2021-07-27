// this code doesn't work.




#include <stdio.h>

int main  ()  {

    float Income;
    int SigDig;

    printf("Enter Your Annual Income:");
    scanf("%f",&Income);

    SigDig = Income/100000;

    switch(SigDig) {

      case '9' :
      case '8' :
      case '7' :
      case '6' :
      case '5' :
      printf("you have to pay 20%% of income tax!");
      break;
      case '4' :
      case '3' :
      printf("you have to pay 10%% of income tax!");
      break;
      case '2' :
      case '1' :
      case '0' :
      printf("you have  to  pay no  income tax!");
      break;
      default :
      printf("you have  to pay 30%%  of income tax!");
      break;

    }

  return 0;
}
