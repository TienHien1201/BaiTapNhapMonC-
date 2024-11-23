#if 0
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	double a = 1.0;
	double b = 0.1+ 0.1+ 0.1+ 0.1+ 0.1+ 0.1+ 0.1+ 0.1+0.1+ 0.1;

	cout << setprecision(18);
	cout << "a =" << a;
	cout << "\n b = " << b;

	b = roundf(b);
	cout << "\n Lam tron b" << b; 
	if (a == b) {
		cout << "\n a bang b";
	}
	else {
		cout << "\na Khong bang b"; 
	}
}
#endif
#if 0
#include<iostream>;
using namespace std;
int main()
{/*dùng \ để bao chuỗi*/
	cout << "Trong C++ hg\"\"bao chuoi sau";
}
#endif
#if 0
#include<iostream>
using namespace std;
int main() {
	int a;
	char c;
	cout << "Nhap Ky TU Dac Biet";
	cin >> c;

	a = c;
	cout << "Ky tu vua nhap"<< c;
	cout << "\nCo ma ASCLL la: " << a;

}
#endif
#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	a = (b =2,c = b++, ++c + 2);
	cout << a;
}

