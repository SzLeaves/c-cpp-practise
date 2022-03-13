#include <iostream>

int main () {
    using namespace std;

    const int Maxsize = 20;
    char str[Maxsize] {};

    // cin.getline(string, max_size) 读取缓冲区内换行符并替换为空字符
    // cin.getline通过换行符确定行尾
    cout << "(cin.getline) Please enter a string: ";
    cin.getline(str, Maxsize);
    cout << str << endl;

    // cin.get(string, max_size), 不读取缓冲区内换行符
    char tmp[Maxsize] {};
    cout << "(cin.get) Please enter a string: ";
    cin.get(tmp, Maxsize).get();    // 在返回值基础上调用方法（这里可以去除输入的换行符）
    cout << tmp << endl;

    /*  cin.get的问题：
        第一次调用后，换行符将留在缓冲区中
        因此第二次调用时看到的第一个字符便是换行符
        因此get()认为己到达行尾而没有发现任何可读取的内容
        如果没有间隔输入的语句(如cout)，get()将直接结束输入 */

    // p.s. 这个问题与C中的scanf()二次读取类似
    /*
    cout << "(cin.get) Please enter a string: ";
    cin.get(tmp, Maxsize);
    cin.get(tmp, Maxsize);
    */


    // cin.get()可以直接读取一个字符
    char la;
    cout << "enter a letter: ";
    cin.get(la);
    cout << la << endl;

    return 0;
}