//cách kiểm tra hàm nó chạy như thế nào cứ nhấn f10
#if 0
#include<iostream>
using namespace std;
int tong(int a, int b);
int tich(int x, int y);
int main() {

	int a = 3, b = 5;
	cout << "Tong: " << tong(a, b);//cách tìm tổng hay cái gì đó của hàm ta trỏ chuột vào hàm r nhấn (ctrl + chuột trái ) nó sẽ nhảy đến hàm của nó
 	cout << "\nTich: " << tich(a, b);
	cout << "\nTich: " << tich(8, 7);
}


int tong(int a, int b){
int ketQua;
ketQua = a + b;
return ketQua;
}

int tich(int x, int y) {
	return x * y;
}
# endif
//Ví dụ dạng thi
#if 0
#include<iostream>
#include<cstdlib>
using namespace std;
int TongLe(int n);
int TongChan(int n);

int main() {
	int n;
	cout << "Nhap vao so nguyen n: ";
	cin >> n;

	if (n > 0) {
		cout << "Tong Le S1: " << TongLe(n);
		cout << "\nTong chan S2: " << TongChan(n);
	}
	else {
		cout << "Nhap sai. n khong phai la so nguyen duong";
	}
}


	int TongLe(int n) {
		int	KetQua = 0, tam;
		tam = 2 * n + 2;
		for (short i = 1; i < tam; i += 2)
			KetQua += i;
		return KetQua;
	}


	int TongChan(int n) {//các giá trị int, double... cần return    
		int tam, KetQua = 0;
		tam = 2 * n + 3;
		for (short i = 2; i < tam; i += 2)
			KetQua += i;
		return KetQua;
	}

#endif // 1

//Ví Dụ
#if 0
#include<iostream>
#include<cstdlib>
using namespace std;
void doicho(int &a, int &b);
int main() {
	int x = 0, y = 1;
	cout << "Truoc khi doi cho: x = " << x << " va  y = " << y;
	doicho(x, y);
	cout << "\nSau khi doi cho:  x = " << x << " va  y = " << y;
}

void doicho(int& a, int& b) {//void không cần return 
	int tam;
	tam = a;
	a = b;
	b = tam;
}


#endif 

