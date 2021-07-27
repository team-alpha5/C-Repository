#include<stdio.h>

int main() {

    int num;
    printf("Enter a number:\n");
    scanf("%i",&num);

    if (num % 2 == 0) {
      printf("%i is an Even number!",num);
    }
    else {
      printf("%i is Odd!",num);
    }

return 0;
}
