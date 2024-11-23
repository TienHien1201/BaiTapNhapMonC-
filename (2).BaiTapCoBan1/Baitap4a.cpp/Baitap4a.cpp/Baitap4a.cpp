#include<iostream>
using namespace std;
int main()
{
	int a, b;
	int DienTich, ChuVi;
	cout << "Nhap Vao chieu dai a\n";
	cin >> a;
	cout << "Nhap vao Chieu Rong b\n";
	cin >> b;

	DienTich = (a + b) * 2;
	ChuVi = a * b;

	cout << "Chu Vi Hinh Chu Nhat = " << ChuVi << "\n";
	cout << "Dien Tich Dien Tich Hinh Chu Nhat = " << DienTich << "\n";

}