#include<stdio.h>
double mb_ra(double, float);    // 速率计算用函数

int main(void) {
  double mb;
  float rate, ans;
  printf("Enter you file's megabits,rate: \n");
  scanf("%lf,%f", &mb, &rate);

  while (rate != 0) {
    ans = mb_ra(mb, rate);
    printf("Answer: \n");
    printf("At %.2f megabytes per seconds,"
           "a file of %.2f megabytes.\n", rate, mb);
    printf("Download in %.2f seconds.\n", ans);
    printf("\n");
    printf("Enter you file's megabits,rate: \n");
    scanf("%lf,%f", &mb, &rate);
  }

  printf("Fu@k You!");
  return 0;
}

double mb_ra(double mb, float rate) {
  double time = mb / rate;
  return time;
}