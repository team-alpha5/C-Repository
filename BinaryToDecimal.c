/*This Program Converts A Given Binary Number Into It's Numeric Value!
The Steps Will Be Briefly Described Before Every Chunk Of Code.
*/

#include <stdio.h>
/*For The Code To Be Presentable And REadable To EveryOne who Reads This Code We
Are Going To Divide The Code Into Little Chunks As In Functions*/
//A Function To Read The Binary Number The User Inputs And Validate It If It Were
//Truly A Binary Number Or NOt!
int GetNum(void);
int Validator(int Binary);
//Splitting Each Value Of The Given Binary Number So As To Multiply It To its Value
// i.e The Specific Powers Of Two We Use These Two Functions!
int FirstNum(int Binary);
int TwoPowers(int Num);
//A Function To Convert The Binary Number into It's Numeric Value
int BinaryToDecimal(int Binary);

int main() {
  int Binary,Decimal;

  Binary = GetNum();
  if(Binary != 0){
  Decimal = BinaryToDecimal(Binary);
  printf("\n\nThe Binary Number Is:%2d",Binary);
  printf("\n\nNumeric Value=%2d",Decimal);
}
return 0;
}

int GetNum(void){
  int Valid,Binary;
  printf("Enter A Binary Number:");
  scanf("%d",&Binary);

  Valid = Validator(Binary);

  if(Valid!=1){
    printf("\nNot Valid!");
    return 0;
 }
 else
 return Binary;
}

int Validator(int Binary){
   while(Binary!=0){
     if(!(Binary%10 == 0 || Binary%10 == 1)){
       return 0;
     }
     else
     Binary/=10;
   }
   return 1;
}

int BinaryToDecimal(int Binary){
int Decimal=0;
for(int i=0;Binary!=0;i++){
  Decimal += FirstNum(Binary)*TwoPowers(i);
  Binary /= 10;
}
return Decimal;
}

int FirstNum(int Binary){
  int Num;
  if(Binary != 0){
    Num = Binary%10;
 }
  return Num;
}

int TwoPowers(int Num){

 int Power =1;
 for(int i=1;i<=Num;i++){
   Power *= 2;
 }
 return Power;
}
