#include <iostream>

using namespace std;

int main() {
    int arr[5] = {2, 4, 6, 8, 10};
    for (int x : arr)
        cout << x << " ";
    cout << endl;

    return 0;
}