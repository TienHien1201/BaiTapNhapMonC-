#if 0
#include<iostream>
using namespace std;

void nhapDay(short a[], short n);
void xuatDay(short a[], short n); 
short chen(short a[], short &n,short k, short x);

int main() {
	short a[20], n;

	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	nhapDay(a, n);
	cout << "Day a vua nhap: ";
	xuatDay(a, n);

	short x, k;
	cout << "\nNhap phan tu x can chen: ";
	cin >> x;
	cout <<"Nhap k vi tri can chen : ";
	cin >> k;
	short kqChen = chen(a, n, k, x);
	if (kqChen == -1) {
		cout << "chen that bai chen sai vi tri can chen.";
	}
	else {
		cout << "Day sau khi chen x vao vi tri k: ";
		xuatDay(a, n);
	}
}

void nhapDay(short a[], short n) {
	for (short i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}
void xuatDay(short a[], short n) {
	for (short i = 0; i < n; i++)
		cout << a[i] << " ";

}
short chen(short a[], short &n, short k, short x) {
	if (k<0 || k > n - 1)
		return -1;
	for (short i = n ; i > k; i--) 
		a[i] = a[i - 1];
		a[k] = x;
		n++;
		return 1;
}
#endif


