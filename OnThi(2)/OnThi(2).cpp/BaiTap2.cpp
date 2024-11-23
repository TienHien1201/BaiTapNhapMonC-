#if 0
#include<iostream>
using namespace std;

int main() {
	short n;
	cout << "Nhap vao so nguyen n: ";
	cin >> n;

	short gt = 1;
	short mauSo = 0;
	double S = 0;
	for (short i = 1; i <= n; i++)
		mauSo += i;
	for (short i = 1; i <= n; i++) {
		gt *= i;
		S += gt;
	}
	cout << "A = 1! + 2! + 3! +....+ n! / 1+ 2 + 3 +...+ n = " << S / mauSo;
}
#endif 

