#include <iostream>
#include <string>

int main() {
    using namespace std;

    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << str << endl;

    // 下标方式访问string元素
    cout << "third letter: " << str[2] << endl;

    return 0;
}