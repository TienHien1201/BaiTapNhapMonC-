#if 0
#include<iostream>
using namespace std;


short nhapMaTran(short a[][10], short m, short n);
short xuatMaTran(short a[][10], short m, short n);
short ptMin(short a[][10], short m, short n);

int main() {
	short a[10][10];
	short m, n;
	cout << "Nhap vao m so hang cua ma tran :  ";
	cin >> m;
	cout << "Nhap vao n so cot cua ma tran :  ";
	cin >> n;

	nhapMaTran(a, m, n);
	cout << "Ma tran vua nhap: \n";
	xuatMaTran(a, m, n);
	cout << "phan tu nho nhat trong ma tran"<< ptMin(a, m, n) ;
}

//Nhap ma tran
short nhapMaTran(short a[][10], short m, short n) {
	for (short i = 0; i < m; i++)
		for (short j = 0; j < n; j++) {
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	return 0;
}
short xuatMaTran(short a[][10], short m, short n) {
	for (short i = 0; i < m; i++) {
		for (short j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}

short ptMin(short a[][10], short m, short n) {
	short min = a[0][0];
	for (short i = 0; i < m; i++)
		for (short j = 0; j < n; j++) {
			if (a[0][0] > a[i][j])
				min = a[i][j];
		}
	return min;
}
#endif


