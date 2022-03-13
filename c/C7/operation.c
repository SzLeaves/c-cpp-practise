//switch结构使用--一个简单的计算器
#include<stdio.h>

int main(void) {
	double a, b, res;
	char op;
	
	puts("请输入需要计算的表达式（输入q退出程序）：");
	while (3 == scanf("%lf%c%lf",&a, &op, &b )) {
	
	 switch (op) {
	 	case '+':
	 	res = a + b;
	 	break;
	 	
	 	case '-':
	 	res = a - b;
	 	break;
	 	
	 	case '*':
	 	res = a * b;
	 	break;
	 	
	 	case '/':
	 	if (0 == b) {
	 		puts("0不能为除数！");
	 		break;
	 	}
	 	res = a / b;
	 	break;
	 }
	 printf("%.1f %c %.1f = %.1f \n\n", a, op, b, res);
	 puts("请输入需要计算的表达式（输入q退出程序）：");
	} 
	puts("程序结束");
	
	return 0;
}
