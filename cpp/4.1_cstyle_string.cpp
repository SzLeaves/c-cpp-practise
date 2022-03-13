#include <iostream>
#include <string>
using namespace std;

int main() {
    char str[10] = {};
    char tmp[5] = {};

    cout << "Please enter string: ";
    cin >> str;

    // 缓冲区测试（有缺陷的输入）
    cout << "string content: " << str << endl;
    cin >> tmp;
    cout << tmp << endl;

    return 0;
}