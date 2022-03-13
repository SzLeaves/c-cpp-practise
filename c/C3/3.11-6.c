#include<stdio.h>
#define CM 2.54
int main(void) {
  float c_height,i_height;
  printf("Please enter your height (In): \n");
  scanf("%f",&i_height);
  c_height = i_height * CM;
  printf("Your height (Cm) is : %.2f",c_height);
  return 0;
}
