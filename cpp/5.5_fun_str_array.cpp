#include <iostream>

using namespace std;

int add(int, int);
int sub(int, int);
int mul(int, int);

int main() {
    const int Size = 3;
    /*
    声明函数指针数组
    放入数组中的函数（地址）必须与声明的函数指针数组类型一致
    相同的返回值和相同的传入参数类型、参数数量
    */

    int (*pt_arr[Size])(int, int) = { add, sub, mul };
    // <return_type> (*<array_name>[<array_size>])(<args_type>) = {<function_name>}

    // 利用循环，使用函数指针数组调用"存储"在数组上的函数
    for (int i = 0; i < Size; i++) {
        cout << (*pt_arr[i])(10, 20) << endl;
        // 另外一种使用函数指针的方法：pt_arr[i](10, 20);
    }

    return 0;
}

int add(int a, int b) {
    cout << "a + b = ";
    return a + b;
}

int sub(int a, int b) {
    cout << "a - b = ";
    return a - b;
}

int mul(int a, int b) {
    cout << "a * b = ";
    return a * b;
}