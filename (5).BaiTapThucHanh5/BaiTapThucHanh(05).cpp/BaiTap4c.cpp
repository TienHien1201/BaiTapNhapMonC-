#if 0
#include<iostream>
using namespace std;

void nhapMaTran(short a[][10], short n, short m);
void xuatMaTran(short a[][10], short n, short m);
short tichCheo(short a[][10], short n, short m);

int main() {
	short a[10][10], m, n;
	cout << "Nhap vao n hang cua ma tran a: ";
	cin >> n;
	cout << "Nhap vao m cot cua ma tran a: ";
	cin >> m;

	nhapMaTran(a, n, m);
	cout << "Ma tran vua nhap: \n";
	xuatMaTran(a, n, m);

	
	cout << "Tich cac phan tu tren duong cheo nghich: " << tichCheo(a, n, m);
}

void nhapMaTran(short a[][10], short n, short m) {
	for (short i = 0; i < n; i++)
		for (short j = 0; j < m; j++) {
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
}
void xuatMaTran(short a[][10], short n, short m) {
	for (short i = 0; i < n; i++)
	{
		for (short j = 0; j < m; j++) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
}

short tichCheo(short a[][10], short n, short m) {
	short tich = 1;
	for (short i = 0; i < n; i++) {
			tich *= a[i][n - i - 1];
	}
	return tich;
}
#endif // 1
