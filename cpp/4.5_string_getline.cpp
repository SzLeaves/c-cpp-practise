#include <iostream>
#include <string>

int main() {
    using namespace std;

    // string使用的getline()
    string str {};
    getline(cin, str);  // 参数：std::istream &__is, std::string &__str
    cout << str << endl << endl;

    // 与字符串数组使用比较: cin.getline()
    char cstr[20] {};
    cin.getline(cstr, 20);  // 参数：char *__s, std::streamsize __n
    cout << cstr << endl;

    return 0;
}
