#include<stdio.h>
int main(void) {
  double num;
  printf("Enter a number here: \n");
  scanf("%lf",&num);
  printf("You entered something here :\n");
  printf("%.1f , %.3f and %.1e , %.3E",num,num,num,num);
  return 0;
}
