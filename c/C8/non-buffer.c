/* 无缓冲的输入--输入后立即显示字符
   这个程序不一定所有的编译器都可以通过编译
   因为conio.h函数不是ANSI C所包含的标准头文件
   所以这个程序不一定能在所有的设备上运行
   如果在你的设备上无法运行，说明编译器不包含conio.h头文件 */

#include <stdio.h>
#include <conio.h>		//这个头文件不一定所有的编译器都有
int main(void) {
	printf("按下WASD,QE,F键来控制动作：\n");
	while (1) {
		
		/* 下面的getch()就是非缓冲输入使用的函数 
		   但是它并不是ANSI C中的标准I/O函数
		   在ANSI C中定义的所有输入函数都属于有缓冲输入 */
		   
		switch (getch()) {
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
