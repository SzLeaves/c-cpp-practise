/* 结构体使用 动态分配结构体 */
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    struct book {
        int id;
        char name[10];
        double price;
    };

    // 声明结构体变量
    book b1 = {
        100,
        "name",
        1.89
    };
    cout << b1.id << endl;
    cout << b1.name << endl;
    cout << b1.price << endl << endl;

    // 动态分配结构体 (malloc或calloc)
    book* b2 = (book*)calloc(1, sizeof(book));
    b2->id = 10;
    strcpy(b2->name, "name2");
    b2->price = 9.09;

    cout << b2->id << endl;
    cout << b2->name << endl;
    cout << b2->price << endl << endl;

    // free释放内存（不要用delete释放不是new分配的内存）
    free(b2);

    // 动态分配结构体 (new)
    book* b3 = new book;
    b3->id = 200;
    strcpy(b3->name, "name3");
    b3->price = 1.99;

    cout << b3->id << endl;
    cout << b3->name << endl;
    cout << b3->price << endl << endl;

    delete b3;

    return 0;
}
