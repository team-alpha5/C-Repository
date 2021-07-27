#include <stdio.h>

 int Month(int FirstDay,int NumOfDays);

  int main() {

   int BegDay,NumDays,NuMon,Variable,Wd,Gaps;
   printf("***This Program Prints The Calender For The Whole Year!***\n");
   printf("Sunday-0\nMonday-1\nTuesday-2\nAnd Likewise...!\n");
   printf("Enter The Number Representing The Weekday On Which January Started:");
   scanf("%d",&BegDay);




   for(NuMon=0;NuMon<12;NuMon++){
     switch(NuMon){
       case 0: printf("\n\nJanuary\n");
                break;
       case 1: printf("\n\n\nFebruary\n");
                break;
       case 2: printf("\n\n\nMarch\n");
                break;
       case 3: printf("\n\n\nApril\n");
                break;
       case 4:printf("\n\n\nMay\n");
                break;
       case 5:printf("\n\n\nJune\n");
                break;
       case 6:printf("\n\n\nJuly\n");
                break;
       case 7:printf("\n\n\nAugust\n");
                break;
       case 8:printf("\n\n\nSeptember\n");
                break;
       case 9:printf("\n\n\nOctober\n");
                break;
       case 10:printf("\n\n\nNovember\n");
                break;
       case 11:printf("\n\n\nDecember\n");
                break;
}//End Of Switch Case!
     printf("\n SUN MON TUE WED THU FRI SAT\n");

     for(Gaps=0;Gaps<BegDay;Gaps++){
       printf("    ");
     }//Gaps

     if(NuMon<7){
     if (NuMon % 2 == 0){
       Variable=31;
     }
     else if(NuMon == 1){
       Variable = 28;
     }
     else
     Variable=30;
   }
     else if(NuMon % 2 == 0){
       Variable = 30;
     }
     else
     Variable = 31;

     for(int Day=1;Day<=Variable;Day++){
       if(Gaps>6){
         printf("\n");
         Gaps=1;
       }
       else
       Gaps++;
       printf("%4d",Day);

   }//Days Printing Loop!
   }//Months for Loop!
}//main
