#include <iostream>

using namespace std;

int main() {
    char ch{};
    int count{};

    cout << "please enter sentense (ctrl + D to end): " << endl;
    cin.get(ch);
    while (!cin.fail()) {
        cout << ch;
        count++;
        cin.get(ch);
    }
    cout << endl << "words: " << count << endl;

    return 0;
}