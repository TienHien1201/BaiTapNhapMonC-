#if 0
#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	short gt = 1;
	int S = 0;
	for (short i = 1; i <= n; i++) {
		gt *= i;
		if (i % 2 == 1)
			S -= gt;
		else 
			S += gt;
	}
	cout << "S = -1! + 2! -3! + 4! -5! = " << S;
}
#endif // 1
