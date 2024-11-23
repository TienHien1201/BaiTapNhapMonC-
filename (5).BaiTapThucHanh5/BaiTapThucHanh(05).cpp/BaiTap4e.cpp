#if 0

#include<iostream>
using namespace std;

void nhapMaTran(short a[][10], short n, short m);
void xuatMaTran(short a[][10], short n, short m);
short tongCheo(short a[][10], short n, short m);

int main() {
	short a[10][10], m, n;
	cout << "Nhap vao n hang cua ma tran a: ";
	cin >> n;
	cout << "Nhap vao m cot cua ma tran a: ";
	cin >> m;

	nhapMaTran(a, n, m);
	cout << "Ma tran vua nhap: \n";
	xuatMaTran(a, n, m);

	
	cout << "Tong cac phan tu nua tren tam giac tren duong cheo thuan: " << tongCheo(a, n, m);
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

short tongCheo(short a[][10], short n, short m) {
	short tong = 0;
	for (short i = 0; i < n; i++)
		for (short j = i; j < m; j++) {
			tong += a[i][j];
		}
	return tong;
}

#endif // 1
