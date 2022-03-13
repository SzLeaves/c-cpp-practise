#include <iostream>

using namespace std;

void swap_val(int, int);
void swap_ptr(int*, int*);
void swap_ref(int&, int&);

int main() {
    int a = 100, b = 500;

    cout << "source: ";
    cout << "a=" << a << ", b=" << b << endl;

    // 按值传递
    swap_val(a, b);
    cout << "swap_val: ";
    cout << "a=" << a << ", b=" << b << endl;

    a = 100; b = 500;
    // 按地址传递
    swap_ptr(&a, &b);
    cout << "swap_ptr: ";
    cout << "a=" << a << ", b=" << b << endl;

    a = 100; b = 500;
    // 按引用传递
    swap_ref(a, b);
    cout << "swap_ref: ";
    cout << "a=" << a << ", b=" << b << endl;

    return 0;
}

void swap_val(int a, int b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void swap_ptr(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void swap_ref(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
}