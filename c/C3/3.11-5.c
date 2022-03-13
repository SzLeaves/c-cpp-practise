#include<stdio.h>
#define TIME 3.156e7   //定义时间常量
int main(void) {
  double age_sec;
  int age;
  printf("Please enter your age: \n");
  scanf("%d",&age);
  age_sec = age * TIME;
  printf("Your sec_age is %.0f \n",age_sec);
  return 0;
}
