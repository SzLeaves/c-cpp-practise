// string 类型的指针
#include <iostream>

using namespace std;

void fun(string);
void fun_ptr(string*);

int main(int argc, char const* argv[])
{
    string str{ "hellocpp" };
    string* ptr = &str;

    // 按值传递
    cout << "str: " << str << endl;
    fun(str);
    cout << "after fun str: " << str << endl << endl;

    // 指针传递
    cout << "ptr: " << *ptr << endl;
    fun_ptr(ptr);
    cout << "after fun_ptr ptr: " << *ptr << endl;
    cout << "after fun_ptr str: " << str << endl;
    return 0;
}

void fun(string str) {
    str = str + "hello str";
    cout << "fun: " << str << endl;
}

void fun_ptr(string* ptr) {
    *ptr = *ptr + "helloptr";
    cout << "fun_ptr: " << *ptr << endl;
}