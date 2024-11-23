#if 0
#include<iostream>
using namespace std;

void nhapDay(short a[][10], short n , short m);
void xuatDay(short a[][10], short n, short m);
short minDuong(short a[][10], short n, short m);

int main() {
	short a[10][10], n, m;
	cout << "Nhap vao so n hang cua ma tran a: ";
	cin >> n;
	cout << "Nhap vao so m cot cua ma tran a: ";
	cin >> m;

	nhapDay(a, n, m);
	cout << "Ma tran vua nhap: \n";
	xuatDay(a, n, m);
	short kqMin = minDuong(a,n, m);
	if (kqMin == -1) {
		cout << "Day tren khong ton tai so nguyen duong.";
	}
	else
		cout << "Phan tu duong nho nhat trong day cua ma tran a la: " << kqMin;
}

void nhapDay(short a[][10], short n, short m) {
	for (short i = 0; i < n; i++) 
		for (short j = 0; j < m; j++) {
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		
	}
}

void xuatDay(short a[][10], short n, short m) {
	for (short i = 0; i < n; i++) {
		for (short j = 0; j < m; j++)
			cout << a[i][j] << " ";

		cout << "\n";
	}

}

short minDuong(short a[][10], short n, short m) {
	short min;
	bool bay = false;
	for (short i = 0; i < n; i++)
		for (short j = 0; j < m; j++)
			if (a[i][j] > 0) {
				min = a[i][j];
				bay = true;
				
			}
		
	if (!bay) 
		return -1;

	for (short i = 0; i < n; i++) {
		for (short j = 0; j < m; j++)
			if (a[i][j] > 0 && min > a[i][j]) {
				min = a[i][j];
			}
	}
	
	return min;

}

#endif // 0

