#if 0
#include<iostream>
using namespace std;

void nhapDay(short a[], short n);
void xuatDay(short a[], short n);
void chen(short a[], short &n, short x);

int main() {
	short a[10], n, x;
	cout << "Nhap vao so n phan tu cua ma tran a: ";
	cin >> n;

	nhapDay(a, n);
	cout << "Day vua nhap: \n";
	xuatDay(a, n);

	cout << "\nNhap vao so X: ";
	cin >> x;
	chen(a, n, x);
	cout << "Day a sau khi chen x vao: ";
	xuatDay(a, n);
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

void chen(short a[], short& n, short x) {
	for (short i = 0; i < n; i+= 2) {
		if (a[i] > x) {
			for (short j = n; j > i + 1; j++)
				a[j] = a[j - 1];
			a[i] = a[i + 1];
			n++;
			i++;
		}
	}
		



}

#endif



