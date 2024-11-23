#if 0
#include<iostream>
using namespace std;

void nhapDay(short a[], short n);
void xuatDay(short a[], short n);
void tachDay(short a[], short n, short b[], short c[], short& x, short& y);

int main() {
	short a[20], b[20], c[20], n, x = 0, y = 0;
	cout << "Nhap vao so phan tu n cua day a: ";
	cin >> n;

	nhapDay(a, n);
	cout << "Day a vua nhap: ";
	xuatDay(a, n);

	tachDay(a, n, b, c, x, y);
	cout << "\nCac Phan tu o vi tri chan cua day b: ";
	xuatDay(b, x);
	cout << "\nCac Phan tu o vi tri le cua day c: ";
	xuatDay(c, y);
}

void nhapDay(short a[], short n) {
	for (short i = 0; i < n; i++) {
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}
void xuatDay(short a[], short n) {
	for (short i = 0; i < n; i++)
		cout << a[i] << " ";
}

void tachDay(short a[], short n, short b[], short c[], short& x, short& y) {

	for (short i = 0; i < n; i++) {
		if (i % 2 == 0) {
			b[x++] = a[i];
		}
		else
		{
			c[y++] = a[i];
		}
	}
}
#endif

#include<iostream>
using namespace std; 

void inPut( short n);

int main() {
	short n;
	cout << "Nhap vao so nguyen N: ";
		cin >> n;

		inPut(n);
}

void inPut(short n) {
	short i;
	cin >> i;
	while (i < n)
		cout << i << " ";
	i++;

}