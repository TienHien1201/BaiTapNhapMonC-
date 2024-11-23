#if 0
#include<iostream>
using namespace std; 

void nhapDay(short a[], short n);
void xuatDay(short a[], short n);
short demSo(short a[], short n, short m);

int main() {
	short a[10], n, m;
	

	cout << "Nhap vao so phan tu n cua day a: ";
	cin >> n;
	
	nhapDay(a, n);
	cout << "Day a vua nhap: ";
	xuatDay(a, n);

	cout << "\nNhap vao so nguyen m: ";
	cin >> m;

	short kq = demSo(a, n, m);
	if (!kq) {
		cout << "Nhap sai vi tri, khong ton tai vi tri n.";
	}
	else
	cout << "ky so tu vi tri n den m: " <<kq;
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

short demSo(short a[], short n, short m) {
	short dem = 0;
	if (m < 0 || m > n)
		return -1;
	for (short i = n ; i > m; i--)
		if (i >= m)
			dem++;
		
	return dem;
}
#endif