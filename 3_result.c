#include<stdio.h>
int main(){
   int physics, chemistry, biology;
 //  marks = 33;
   float result;

   printf("Enter physics marks\n" );
   scanf("%d", &physics);

   printf("Enter Chemistry marks\n");
   scanf("%d", &chemistry);

   printf("Enter biology marks\n");
   scanf("%d", &biology);

   result = (physics + chemistry + biology)/3;

   if ((result<33) || physics<33 || biology<33|| chemistry<33)  
   {
       printf("Your total percentage is %d and you are fail\n", result);
   }
   else
   {
       printf("Your total percentage is %f and you are pass\n",result);
   }
   return 0;
   
}