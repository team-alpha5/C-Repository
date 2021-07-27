#include <stdio.h>

int main () {

    float Income;
    printf("Enter Your Annual Income:");
    scanf("%f",&Income);

    if (Income >= 0 && Income <= 200000)
    printf("You Have To Pay No Income Tax!");
    else if(Income > 200000 && Income <= 500000)
    printf("You Have To Pay %%10 Income Tax!");
    else if (Income > 500000 && Income <= 1000000)
    printf("You Have To Pay %%20 Income Tax!");
    else
    printf("You Have To Pay %%30 Income Tax!");



  return 0;
}
