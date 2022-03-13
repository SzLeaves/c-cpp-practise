#include<stdio.h>
#include<string.h>
int main(void) {
    char fn[11], sn[11];
    int n_fn, n_sn, w1, w2;

    printf("Please enter your name: \n");
    scanf("%s %s", fn, sn);                      //输入已经包含了一个空格
    w1 = n_fn = strlen(fn);
    w2 = n_sn = strlen(sn);

    while (w1 < 10 && w2 < 10) {
      //右对齐
      printf("%s %s \n", fn, sn);
      printf("%*d %*d", w1, n_fn, w2, n_sn);
      printf("\n \n");

      //左对齐
      printf("%s %s \n", fn, sn);
      printf("%d %*d", n_fn, w1, n_sn);

      printf("\n \n");
      printf("Please enter your name: \n");
      scanf("%s %s", fn, sn);
      w1 = n_fn = strlen(fn);
      w2 = n_sn = strlen(sn);

      /*字符宽度从其所定义的打印选项处
        开始计算，输出时每一个打印选项
        的字符宽度都是独立的，不受前字
        符宽度影响。空格为printf()函数
        内的原打印输出。*/
    }

    printf("Fu@k you!");
    return 0;
}
