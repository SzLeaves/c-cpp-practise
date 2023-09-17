/** 
 * C语言编写的大部分技巧 
 * Comments Author: Szleaves
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_COLS 20
#define MAX_INPUT 1000

int read_column_numbers(int[]);
void rearrange(char *, char const *, int, int const[]);

int main(void) {
    int n_columns;          // 进行处理的列标号数量
    int columns[MAX_COLS];  // 输入的列标号
    char input[MAX_INPUT];  // 输入的文本信息
    char output[MAX_INPUT]; // 处理后的文本信息

    // 读取列标号
    printf("Enter columns number: ");
    n_columns = read_column_numbers(columns);

    // 处理输入,切割文本
    printf("Original Input: ");
    while (fgets(input, MAX_INPUT, stdin) != NULL) {
        rearrange(output, input, n_columns, columns);
        printf("Rearranged line: %s\n\n", output);
        printf("Original Input: ");
    }

    return 0;
}

/** 读取指定的列标号 */
int read_column_numbers(int columns[]) {
    int num = 0;

    // 读取输入的列标号，如果读到的数值小于0则停止
    while (num < MAX_COLS && scanf("%d", &columns[num]) == 1 &&
           columns[num] > 0) {
        num++;
    }

    // 检查标号数量是否成对出现(即标号数量为偶数个)
    if (num % 2 != 0) {
        printf("Columns number is not paired");
        exit(EXIT_FAILURE);
    }

    // 清空缓冲区
    while (getchar() != '\n')
        continue;

    return num;
}

/** 处理输入并将指定的字符连接在一起 */
void rearrange(char *output, char const *input, int n_columns,
               int const columns[]) {
    int output_col = 0;            // 输出文本字数计数器
    int input_len = strlen(input); // 获取输入文本长度

    // 清空输出数组
    memset(output, '\0', sizeof(output));

    // 按一对数标号对文本进行切割提取
    for (int col = 0; col < n_columns; col += 2) {
        // 读取输入文本结束或输出文本数组已满, 时结束读取
        if (columns[col] >= input_len || output_col == MAX_INPUT - 1)
            break;

        // 两个标号之间的字符数量(左开右闭区间)
        int n_char = columns[col + 1] - columns[col] + 1;

        // 截取的文本超出output数组时,只复制可以容纳的数据
        if (output_col + n_char > MAX_INPUT - 1)
            n_char = (MAX_INPUT - 1) - output_col;

        // 复制相关的数据
        strncpy(output + output_col, input + columns[col], n_char);
        output_col += n_char;
    }
}