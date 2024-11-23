#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double M, Ls, total;
	int n;
	cout << "Nhap Vao Lai suat(Ls): ";
	cin >> Ls;
	cout << "Nhap Vao So Tien(M) Ban Dau: ";
	cin >> M;
	cout << "Nhap Vao So Thang(n): ";
	cin >> n;
	total = M * pow(1 + Ls, n); 
	cout << "Sau " << n << " thang, tong so tien ban rut la: " << total << endl;
}