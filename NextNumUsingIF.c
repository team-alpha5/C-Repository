#include <stdio.h>

int main ()  {

    int num,num1;
    printf("Enter a number:");
    scanf("%i",&num);

    printf("Enter the number after %i:",num);
    scanf("%i",&num1);

    if (num1 == num + 1) {
      printf("Yes,The number after %i is %i",num,num1);
    }
    else {
      printf("No,The number after %i is %i",num,num + 1);
    }

return 0;

}
