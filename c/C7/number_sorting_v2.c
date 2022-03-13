//另外一种倒序输出字符串的方式（数组遍历输出）
#include<stdio.h>
#include<string.h>
#define LEN 30

int main(void) {
	char str[LEN];
	puts("请输入一个数字：");
	scanf("%s", str);
	int length = strlen(str);  //得到字符串的长度 
	printf("\n");
	
	printf("输入的位数有%d位 \n", length);
	
	//正序输出
	puts("正序输出");
	for (int i = 0; i < length; i++)
		printf("%c", str[i]);
		
		printf("\n\n");
	
	//倒序输出
	puts("倒序输出");	
	for (int i = length; i >= 0; i--)
		printf("%c", str[i]);
	
	return 0;
}
