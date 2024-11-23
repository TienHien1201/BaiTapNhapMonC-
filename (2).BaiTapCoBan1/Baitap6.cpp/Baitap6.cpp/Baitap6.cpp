#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Nhap Vao Mot So a: ";
	cin >> a;
	cout << "Nhap Vao Mot So b: ";
	cin >> b;
	cout << "Nhap Vao Mot So c: ";
	cin >> c;
	int max = (a > b && a > c) ? a : (b > a && b > c) ? b : c;
	int min = (a < c&& a < b) ? a : (b < a&& b < c) ? b : c;
	cout << "So Lon Nhat La: " << max << "\n";
	cout << "So Be Nhat La: " << min << "\n";
}
