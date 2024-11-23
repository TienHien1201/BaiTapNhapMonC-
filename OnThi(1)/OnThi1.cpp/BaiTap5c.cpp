#if 0
#include<iostream>
using namespace std;


short nhapMaTran(short a[][10], short m, short n);
short xuatMaTran(short a[][10], short m, short n);
short soPhanTuDuongChan( short a[][10], short m, short n);

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
	cout <<"co "<<soPhanTuDuongChan(a,m,n) << " Phan tu chan duong trong ma tran";
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

short soPhanTuDuongChan( short a[][10], short m, short n) {
	short ptDuongChan = 0;
	for (short i = 0; i < m; i++)
		for (short j = 0; j < n; j++) {
			if (a[i][j] % 2 == 0 && a[i][j] > 0)
				ptDuongChan ++;
		}
	return ptDuongChan;
}

#endif

