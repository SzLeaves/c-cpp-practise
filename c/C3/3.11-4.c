#include<stdio.h>
int main(void) {
  double num;
  printf("Please enter a float number:\n");
  scanf("%lf",&num);
  printf("Result:\n");
  printf("fixed-point notation: %f \n"
          "exponetial notation: %e \n"
          "p notation: %a \n",
           num,num,num);
  return 0;
}
