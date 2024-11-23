#if 0
#include<iostream>
using namespace std;

void nhapDay(short a[], short n);
void xuatDay(short a[], short n);
short tongDuongViTriChan(short a[], short n);

int main() {
	short a[10], n;
	cout << "Nhap vao so phan tu n cua day a: ";
	cin >> n;
	nhapDay(a, n);
	cout << "Day vua nhap: ";
	xuatDay(a, n);

		cout << "Tong cac so duong o vi tri chan la: " << tongDuongViTriChan(a,n);
}

void nhapDay(short a[], short n) {
	for (short i = 0; i < n; i++)
	{
		cout << "a[" << i << "] =";
		cin >> a[i];
	}

}
void xuatDay(short a[], short n) {
	for (short i = 0; i < n; i++)
		cout << a[i] << " ";
}

short tongDuongViTriChan(short a[], short n) {
	short tong = 0;
	for (short i = 0; i < n; i+=2){
		if(a[i] > 0)
		tong += a[i];
	}
	return tong;
}
#endif // 0

#if 0
#include<iostream>
using namespace std;

void nhapDay(short a[], short n);
void xuatDay(short a[], short n);
void phan_Biet(short a[],short b[], short n, short &m);
void count_Phan_Biet(short a[], short b[], short n, short m);

int main() {
	short a[10], n, b[10], m = 0;
	cout << "Nhap vao so phan tu n cua day a: ";
	cin >> n;
	nhapDay(a, n);
	cout << "Day vua nhap: ";
	xuatDay(a, n);

	phan_Biet(a, b, n, m);
	cout << "\nPhan tu phan biet mang B: ";
	xuatDay(b, m);
	
	count_Phan_Biet(a, b, n, m);

}

void nhapDay(short a[], short n) {
	for (short i = 0; i < n; i++)
	{
		cout << "a[" << i << "] =";
		cin >> a[i];
	}

}
void xuatDay(short a[], short n) {
	for (short i = 0; i < n; i++)
		cout << a[i] << " ";
}

void phan_Biet(short a[], short b[], short n, short &m) {
	m = 0;
	b[m] = a[0];
	m++;	

	for (short i = 1; i < n; i++)
	{
		bool KT = true;
		for (short j = i -1; j >= 0; j--)
		{
			if (a[i] == a[j]) {
				KT = false;
				break;
			}
		}

		if (KT) {
			b[m] = a[i];
			m++;
		}
	}
}
void count_Phan_Biet(short a[], short b[], short n, short m) {
	phan_Biet(a, b, n, m);
	
	for (short i = 0; i < m; i++){
		short dem = 0;
		for (short j = 0; j < n; j++) {
			if(b[i] == a[j]) {
				dem++;
			}
		}
		cout << "\nPhan tu " << b[i] << " Xuat hien " << dem << " lan.";
	}

}
#endif

