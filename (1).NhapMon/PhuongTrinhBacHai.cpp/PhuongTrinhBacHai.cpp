#if  0
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a, b, c, x;
    double delta, x1, x2;

    cout << "Nhap Vao He So a, b, c Cua Phuong Trinh ax^2 + bx +c = 0: ";
    cin >> a >> b >> c;

    if (a == 0) {
        if (b == 0) {
            cout << "Phuong Trinh Co Mot Nghiem" << endl;
        }
        if (c == 0) {
            cout << "Phuong Trinh Vo So Nghiem" << endl;
        }
        else {
            cout << "Phuong Trinh Vo Nghiem" << endl;
        }
    }

    else {
        delta = b * b - 4 * a * c;
        if (delta > 0) {
            x1 = (-b + sqrt(delta)) / 2 * a;
            x2 = (-b - sqrt(delta)) / 2 * a;
            cout << "Phuong Trinh Co Hai Nghiem Phan Biet: " << "x1 =" << x1 << "\t" << "x2 = " << x2 << endl;
        }
        else if (delta == 0)
        {
            x = -b / (2 * a);
            cout << "Phuong Trinh Co Nghiem Kep: " << "x =" << x << endl;
        }
        else {

            cout << "Phuong Trinh Vo Nghiem" << endl;
        }
    }
    return 0;


}

#endif
#if 0
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a, b, c, x;
    double delta, x1, x2;

    cout << "Nhap Vao he so a, b, c, Vao Phuong Trinh ax^2 + bx +c : ";
    cin >> a >> b >> c;

    if (a == 0) {
        if (b == 0) {
            cout << "Phuong Trinh Co Mot Nghiem" << endl;
        }
        if (c == 0) {
            cout << "Phuong Trinh Co Vo So Nghiem" << endl;
        }
        else {
            cout << "Phuong Trinh Vo Nghiem" << endl;
        }
    }
    else {
        delta = b * b - 4 * a * c;
        if (delta > 0) {
            x1 = (-b + sqrt(delta)) / 2 * a;
            x1 = (-b - sqrt(delta)) / 2 * a;
        }
        else if (delta == 0) {
            x = -b / (2 * a);
            cout << "Phuong Trinh Co NGhiem Kep" << "x = " << x << endl;
        }
        else
        {
            cout << "Phuong Trinh Vo NGhiem" << endl;
        }
    }
    return 0;
}
#endif

