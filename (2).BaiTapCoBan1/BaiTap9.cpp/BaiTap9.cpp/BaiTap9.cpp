#include<iostream>
using namespace std;
int main()
{
	
	double R, h, Pi;
	double Sday, SXQ, V;
	Pi = 3.16;
	cout << "Nhap Vao Ban Kinh (R): ";
	cin >> R;
	cout << "Nhap Vao Chieu Cao (h): ";
	cin >> h;
	Sday = pow(Pi * R, 2);
	SXQ = 2 * Pi * R * h;
	V = Sday * h;
	cout << "Dien Tich Day Cua Hinh Tron Tru La: " << Sday<<"\n";
	cout << "Dien Tich xung Quanh Cua Hinh Tron Tru La: " << SXQ << "\n";
	cout << "The Tich Cua Hinh Tron Tru La: " << V ;
}