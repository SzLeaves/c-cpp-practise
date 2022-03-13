/* 指针算术 */

#include <iostream>

using namespace std;

void foreach(int[]);

const int Maxsize = 3;

int main() {
    int* arr = new int[Maxsize];
    int* pt = arr;

    for (int i = 0; i < Maxsize; i++)
        arr[i] = i + 1;

    cout << "arr\t" << arr << endl;
    cout << "pt\t" << pt << endl;
    cout << "arr[0]\t" << &arr[0] << endl;
    cout << arr[0] << endl;
    cout << endl;

    pt += 1;
    cout << "pt + 1\t" << pt << endl;
    cout << "arr[1]\t" << &arr[1] << endl;
    cout << arr[1] << endl;
    cout << endl;

    pt += 1;
    cout << "pt + 2\t" << pt << endl;
    cout << "arr[2]\t" << &arr[2] << endl;
    cout << arr[2] << endl;
    cout << endl;

    return 0;
}

void foreach(int arr[]) {
    for (int i = 0; i < Maxsize; i++)
        cout << arr[i] << " ";
    cout << endl;
}