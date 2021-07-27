#include <stdio.h>

int main(){
  char FirstName[20],LastName[20];
  printf("Enter Your FirstName:");
   scanf("%s",&FirstName);
   printf("\nEnter Your LastName:");
    scanf("%s",&LastName);

printf("\nYour Name Is: ");

   for(int i=0;FirstName[i] != 0;i++){
   int Temp = FirstName[i];
   if(Temp>96 && Temp <123){
   Temp -= 32;
   FirstName[i]=Temp;
 }
   printf("%c",FirstName[i]);
 }
 printf(" ");
 for(int i=0;LastName[i] != 0;i++){
 int Temp = LastName[i];
 if(Temp>96 && Temp <123){
 Temp -= 32;
 LastName[i]=Temp;
}
 printf("%c",LastName[i]);
}
printf("!!!");
}
