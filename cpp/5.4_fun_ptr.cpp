// 函数指针
#include <iostream>

using namespace std;

int return_num(int);

int main() {
    /*
    函数指针：
    int: 函数的返回值
    (*pt): 指针变量名称
    (int): 函数返回值类型

    注意名称*pt需要加上括号保证优先级
    否则将变成 int *pt(int)，这是一个返回值为int指针的函数原型
    */
    int (*pt)(int);    // 声明函数指针
    // <return_type> (*<ptr_name>)(<args_type>)

    /*
    给函数指针赋值（函数名(不带括号)即为函数地址）
    声明时初始化变量: int (*pt)() = return_num; 
    */
    pt = return_num;

    // 使用指针调用函数（两种调用方式）
    cout << "call return_num() with *pt: " << (*pt)(5) << endl;   // 使用声明中的格式 (*pt)(参数)
    cout << "call return_num() with pt(): " << pt(5) << endl;     // 直接把指针名当作函数名调用 pt(参数)
    // 普通的函数调用
    cout << "call return_num(): " << return_num(5) << endl;

    // 函数指针的声明：使用C++11的auto自动类型推断
    auto pt2 = return_num;
    cout << "call return_num() with auto_ptr: " << (*pt2)(10) << endl;

    return 0;
}

int return_num(int num) {
    return num * 10;
}