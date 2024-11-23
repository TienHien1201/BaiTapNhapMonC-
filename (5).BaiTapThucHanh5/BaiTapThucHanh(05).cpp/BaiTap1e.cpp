#if 0
#include<iostream>
using namespace std;

void nhapDay(short a[], short n);
void xuatDay(short a[], short n);
short maxAm(short a[], short n);

int main() {
	short a[10], n;
	cout << "Nhap vao so n phan tu cua ma tran a: ";
	cin >> n;

	nhapDay(a, n);
	cout << "Day vua nhap: \n";
	xuatDay(a, n);

	short kqMinDuong = maxAm(a, n);
	if (!kqMinDuong) {
		cout << "\nDay a vua nhap khong ton tai gia tri am.";
	}
	else
		cout << "\nPhan tu am lon nhat trong ma tran a la : " << maxAm(a, n);
}

void nhapDay(short a[], short n) {
	for (short i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];

	}
}

void xuatDay(short a[], short n) {
	for (short i = 0; i < n; i++) {
		cout << a[i] << " ";

	}

}

short maxAm(short a[], short n) {
	short max;
	bool bay = false;
	for (short i = 0; i < n; i++)
		if (a[i] < 0) {
			max = a[i];
			bay = true;
		}
	if (!bay)
		bay = false;
	else
		for (short i = 0; i < n; i++) {
			if (a[i] < 0 && a[i] >  max)
				max = a[i];

			return max;
		}
}


#endif



