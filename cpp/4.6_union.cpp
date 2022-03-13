#include <iostream>
#include <cstring>

using namespace std;

union example {
    int i_val;
    double d_val;
    long l_val;
    char str[20];
};

void display(union example);

int main() {
    // 对同一个union，一次只能保存一个成员变量
    example un_exam;

    un_exam.i_val = 10;
    display(un_exam);

    un_exam.d_val = 10.29;
    display(un_exam);

    un_exam.l_val = 293923;
    display(un_exam);

    strcpy(un_exam.str, "hello");
    display(un_exam);

    return 0;
}

void display(union example show) {
    cout << "int: " <<  show.i_val << endl;
    cout << "double: " << show.d_val << endl;
    cout << "long: " << show.l_val << endl;
    cout << "str: " << show.str << endl << endl;
}