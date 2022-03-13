//有缓冲的输入--输入的时候需要按下回车结束输入
#include <stdio.h>
int main(void) {
	printf("按下WASD,QE,F键来控制动作：\n");
	while (1) {   
		switch (getchar()) {
			case 'w': case 'W':
			printf("上-up ");
			break;
			
			case 's': case 'S':
			printf("下-down ");
			break;
			
			case 'a': case 'A':
			printf("左-left ");
			break;
			
			case 'd': case 'D':
			printf("右-right ");
			break;
			
			case 'q': case 'Q':
			printf("左探头! ");
			break;
			
			case 'e': case 'E':
			printf("右探头! ");
			break;
			
			case 'f': case 'F':
			printf("\nCHICKEN DINNER!! ");
			break;			
			default: continue;
		}		  
	}
	return 0;
}
