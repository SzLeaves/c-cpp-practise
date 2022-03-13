#include<stdio.h>
#define PI 3.1415926
int main(void)
{
	char name[20];
	double num,ans;

	printf("What's your name?\n");
	scanf("%s",name);
	printf("Hello,%s,You can use this command.\n",name);
	printf("Please enter number:\n");
	
	scanf("%lf",&num);
	ans = num*num*PI;
	printf("So the answer is: %f\n",ans);
	printf("Fu@k you!");

	getchar();
	getchar();

	return 0;
}

