//Bài Tập 1 a,b
#if 0
#include<iostream>
using namespace std;

void nhapDay(short a[], short n);/*Hàm void là hàm không kiểu, là hàm làm 1
công việc gì đó không cần trả về, vì vậy nên k cần return mõi khi khai báo*/
void xuatDay(short a[], short n);

void nhapDay(short a[], short n) {
	for (short i = 0; i < n; i++) {
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

void xuatDay(short a[], short n) {
	for (short i = 0; i < n; i++)
		cout << a[i];
} 

int main() {
	short a[20], n;
	cout << "Nhap day 1 chieu duong\n";
	cout << "nhap vao so phan tu n: ";
	cin >> n;


	nhapDay(a, n);
	cout << "Day vua nhap: ";
	xuatDay(a, n);

}
#endif // 0
