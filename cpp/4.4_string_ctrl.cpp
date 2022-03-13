#include <iostream>
#include <string>

int main() {
    using namespace std;

    string st1 = "hello";
    string st2 = "world cpp";

    cout << "st1 length: " << st1.size() << endl;
    cout << "st2 length: " << st2.size() << endl;
    cout << "st1 + st2: " << st1 + st2 << endl;

    cout << "st1 is :" << st1 << endl;
    st1 = st2;
    cout << "now st1 is: " << st1 << endl;

    return 0;
}