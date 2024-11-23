#include<iostream>
using namespace std;
int main()
{
	const double PI{ 3.14159 };
	float Dientich, Bankinh;//vì diện tích bán kính đường có dấu thập phân nên ta phải dùng kiểu float
	cout << "Nhap Vao Dien Tich Duong Tron: ";
	cin >> Dientich;

	Bankinh = sqrt(Dientich / PI);
	cout << "Ban Kinh Duong Tron la: " << Bankinh << "\n";


}