#include <iostream>

using namespace std;

int main()
{
    int source = 100;
    int& ref = source;
    cout << ref << " " << source << endl;

    ref++;
    cout << ref << " " << source << endl;
    cout << &ref << " " << &source << endl;

    // 重新指向别的引用
    int tmp = 20;
    ref = tmp;
    cout << ref << " " << source << endl;
    cout << &ref << " " << &source << " " << &tmp << endl;

    return 0;
}
