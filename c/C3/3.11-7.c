#include<stdio.h>
#define M_W 3e-23   //水分子质量
#define K_W 950     //1夸脱水 = 950克
int main(void) {
  //定义 1.水夸脱数 2.水夸脱总质量 3.水分子数
  int k_num,tk_num;
  double w_num;

  printf("Enter the water's kuta \n");
  scanf("%d",&k_num);
  tk_num = k_num * K_W;
  w_num = tk_num / M_W;
  printf("The water mass is : %e per \n",w_num);
  return 0;
}
