#if 0
#include<iostream>
using namespace std;


void nhapMaTran(short a[][10], short m, short n);
void xuatMaTran(short a[][10], short m, short n);

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
}

	//Nhap ma tran
void nhapMaTran(short a[][10], short m, short n) {
	for (short i = 0; i < m; i++)
		for (short j = 0; j < n; j++) {
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
}
void xuatMaTran(short a[][10], short m, short n){
	for (short i = 0; i < m; i++) {
		for (short j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
}
#endif // 1