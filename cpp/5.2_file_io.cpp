#include <iostream>
#include <fstream>

using namespace std;

int main() {
    const int Maxsize = 20;
    char text[Maxsize]{};

    // 读取对象
    ifstream inFile;
    inFile.open("file.txt");

    // 读取至文件尾
    while (inFile.good()) {
        inFile.getline(text, Maxsize);
        cout << text << endl;
    }

    return 0;
}