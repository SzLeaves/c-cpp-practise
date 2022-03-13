//判断结构的应用--三个数的大小比较
#include<stdio.h>
int main(void) {
	int a, b, c, max;
	printf("请输入三个需要比较的数字 \n");
	scanf("%d,%d,%d", &a, &b, &c);
	
	//第一种比较方法（三数相互比较）
	if (a >= b) {
		if (a >= c)
		max = a;
		else if (b >= c)
		max = b;
		else
		max = c;		
	}
	else if (b >= c)
	max = b;	
	else
	max = c;
	
	printf("第一种比较方法的最大值是：%d \n", max);
	

	//第二种比较方法（先两两比较，再与第三者比较）
	max = 0;
	if (a >= b)
	max = a;
	else
	max = b;
	
	if (c >= max)
	max = c;
	 
	printf("第二种比较方法的最大值是：%d \n", max);
	
	//第三种比较方法（使用三目运算符，原理同第二种）
	max = 0;
	max = (a >= b)? a : b;
	max = (max >= c)? max : c;
	printf("第三种比较方法的最大值是：%d \n", max);	
	
	return 0;
}

//第三种方法生成的机器代码最少，运行效率最高
