#include<stdio.h>
int main(void)
{
   int asc;
   printf("Enter a number (ASCII) and I will changed it:\n");
   scanf("%d",&asc);
   if (asc>65 && asc<127) {
       printf("So the number %d is: %c \n",asc,asc);
       printf("Fc@k you \n");
   }
   else {
       printf("God!I want a ASCII number,Silly boy!\n");
       printf("Fu@k you shit!\n");
    }
   return 0;
}
