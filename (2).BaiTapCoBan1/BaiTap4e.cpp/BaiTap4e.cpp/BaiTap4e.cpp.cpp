#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b, c;
    cout << "Nhap vao ba so a: ";
    cin >> a;
    cout << "Nhap vao ba so b: ";
    cin >> b;
    cout << "Nhap vao ba so c: ";
    cin >> c;


    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Day La khong phai la tam giac\n";
    }
    else {
        if (a + b > c && a + c > b && b + c > a) {
            if (a == a && b == a && c == a) {
                cout << "Day la tam giac deu.";
            }
            else if (a == b || b == c || c == a) {
                cout << "Day la tam giac can.";
            }
            else if (a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b) {
                cout << "Day la tam giac vuong.";
            }
            else {
                cout << "Day la tam giac thuong.";
            }
        }
    }

    return 0;
}