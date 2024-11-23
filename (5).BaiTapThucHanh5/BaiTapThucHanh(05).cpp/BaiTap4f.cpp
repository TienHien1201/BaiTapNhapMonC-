#if 1

#include<iostream>
using namespace std;

void nhapMaTran(short a[][10], short n, short m);
void xuatMaTran(short a[][10], short n, short m);
void sapXep(short a[][10], short n, short m);

int main() {
	short a[10][10], m, n;
	cout << "Nhap vao n hang cua ma tran a: ";
	cin >> n;
	cout << "Nhap vao m cot cua ma tran a: ";
	cin >> m;

	nhapMaTran(a, n, m);
	cout << "Ma tran vua nhap: \n";
	xuatMaTran(a, n, m);

	sapXep(a, n, m);
	cout << "Ma tran sau khi sap xep: \n" ;
	xuatMaTran(a, n, m);

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

void sapXep(short a[][10], short n, short m) {
	for (short i = 0; i < n; i++) {
		short viTriMax = 0;
		for (short j = 0; j < m; j++) {
			if (a[i][j] > a[i][viTriMax])
				viTriMax = j;
		}
		short tam = a[i][i];
		a[i][i] = a[i][viTriMax];
		a[i][viTriMax] = tam;
	}
}

#endif // 1
