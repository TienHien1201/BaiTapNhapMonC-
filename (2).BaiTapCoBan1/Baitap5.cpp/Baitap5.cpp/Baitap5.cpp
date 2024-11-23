#include <iostream>
using namespace std;
int main() {
    const int n = 4;
    int arr[n] = { 20000, 10000, 5000, 1000 };
    int i, isotien, ito;
    cout << "nhap vao so tien ";
    cin >> isotien;
    for (i = 0; i < n; i++) {
        ito = isotien / arr[i];
        cout << ito << " to " << arr[i] << " dong" << endl;
        isotien = isotien % arr[i];
    }
    return 0;
}



