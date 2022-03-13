#include <iostream>

using namespace std;

void foreach(int[]);

int main() {
    /*
    int* ipt = new int;
    *ipt = 100;

    long* lpt = new long;
    *lpt = 123456789;

    char* cpt = new char;
    *cpt = 'b';

    double* dpt = new double;
    *dpt = 10.1989;

    float* fpt = new float;
    *fpt = 3.14;

    cout << "变量数值" << "\t" << "指针地址" << "\t\t" << "指针长度" << "\t" << "数据类型长度" << endl;
    cout << *ipt << "\t\t" << ipt << "\t\t" << sizeof(ipt) << "\t\t" << sizeof(*ipt) << endl;
    cout << *lpt << "\t" << lpt << "\t\t" << sizeof(lpt) << "\t\t" << sizeof(*lpt) << endl;
    cout << cpt << "\t\t" << &cpt << "\t\t" << sizeof(cpt) << "\t\t" << sizeof(*cpt) << endl;
    cout << *dpt << "\t\t" << dpt << "\t\t" << sizeof(dpt) << "\t\t" << sizeof(*dpt) << endl;
    cout << *fpt << "\t\t" << fpt << "\t\t" << sizeof(fpt) << "\t\t" << sizeof(*fpt) << endl;
    */

    // 分配动态内存数组
    int* iar = new int[3];
    int* pt = iar;

    *pt = 80;
    cout << "pt " << pt << endl;
    cout << "*pt = " << *pt << endl;
    foreach(iar);

    pt += 1;   // 指针变量向前一位
    *pt = 90;
    cout << "pt " << pt << endl;
    cout << "*pt = " << *pt << endl;
    foreach(iar);


    pt -= 1;   // 指针变量后移一位（此处回到原点）
    cout << "pt " << pt << endl;
    cout << "*pt = " << *pt << endl;
    foreach(iar);

    // 改变指定元素的数值
    // 第一个元素
    *pt = 10;
    cout << "pt " << pt << " " << *pt << endl;
    foreach(iar);

    pt[0] = 20;
    cout << "iar " << &iar[0] << " " << iar[0] << endl;
    foreach(iar);

    // 第三个元素
    pt += 2;
    *pt = 20;
    cout << "pt " << pt << " " << *pt << endl;
    foreach(iar);

    iar[2] = 40;
    cout << "iar " << &iar[2] << " " << iar[2] << endl;
    foreach(iar);

    return 0;
}

void foreach(int arr[]) {
    for (int i = 0; i < 3; i++)
        cout << arr[i] << " ";
    cout << endl << endl;
}