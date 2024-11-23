//Bai3
#if 0
#include<iostream>
using namespace std;
int main() {
	int n, a[10], b[10], c[10];
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	//Nhap day a
	for (short i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	//xuat day a
	cout << "Day a: ";
	for (short i = 0; i < n; i++)
		cout << a[i]<<" ";

	int ptViTriChan = 0;
	int ptViTriLe = 0;

	for (short i = 0; i < n; i++)
	{
		if (i % 2 == 0) {
			b[ptViTriChan] = i;
			ptViTriChan++;
		}
		else if (i % 2 == 1) {
			c[ptViTriLe] = i;
				ptViTriLe++;
		}
	}

	cout << "\nDay b: ";
	for (short i = 0; i < ptViTriChan; i++)
		cout << b[i] << " ";

	cout << "\nDay c: ";
	for (short i = 0; i < ptViTriChan; i++)
		cout << c[i] << " ";
}
#endif

//bài 4
#if 0
#include <iostream>
using namespace std;
void Nhapmang(int a[], int n);
void xuatmang(int a[], int n);
int Min_Nho_Nhat(int a[], int n);
int Duong_Nho_Nhat(int a[], int n);
int Duong_Vitrichan(int a[], int n);
void Tachday(int a[], int n, int b[], int& m, int c[], int& e);
void themphantu(int a[], int& n, int x, int k);

int main() {
    int a[100], n;
    int b[100], c[100], m = 0, e = 0;
    cin >> n;
    Nhapmang(a, n);
    xuatmang(a, n);
    cout << "\nmin nho nhat: " << Min_Nho_Nhat(a, n);
    int bay = Duong_Nho_Nhat(a, n);
    if (bay == -1) {
        cout << "\nkhong ton tai!";
    }
    else {
        cout << "\nduong nho nhat: " << bay;
    }
    cout << "\ntong duong tai vi tri chan: " << Duong_Vitrichan(a, n);
    Tachday(a, n, b, m, c, e);
    cout << "\nDanh sach phan tu trong day b: ";
    xuatmang(b, m);
    cout << "\nDanh sach phan tu trong day c: ";
    xuatmang(c, e);
    int x, k;
    cout << "\nnhap vao phan tu can them: ";
    cin >> x;
    cout << "nhap vi tri them: ";
    cin >> k;
    themphantu(a, n, x, k);
    xuatmang(a, n);
}
void Nhapmang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}
void xuatmang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
int Min_Nho_Nhat(int a[], int n) {
    int min = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] < min)
            min = a[i];
    }
    return min;
}
int Duong_Nho_Nhat(int a[], int n) {
    int min;
    bool kt = false;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            kt = true;
            min = a[i];
            break;
        }
    }
    if (kt) {
        for (int i = 0; i < n; i++) {
            if (a[i] > 0 && min > a[i]) {
                min = a[i];
            }
        }
        return min;
    }
    else
        return -1;


}
int Duong_Vitrichan(int a[], int n) {
    int s = 0;
    for (int i = 0; i < n; i += 2) {
        if (a[i] > 0)
            s += a[i];
    }
    return s;
}
void Tachday(int a[], int n, int b[], int& m, int c[], int& e) {
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            b[m] = a[i];
            m++;
        }
        else {
            c[e] = a[i];
            e++;
        }
    }
}
void themphantu(int a[], int& n, int x, int k) {
    for (int i = n - 1; i >= k; i--) {
        a[i + 1] = a[i];
    }
    a[k] = x;
    n++;
}
#endif

//bài 3f
#if 0
#include<iostream>
using namespace std;
 
void nhapDay(int a[], int n);
void xuatDay(int a[], int n);
void tachDay(int n,int b[], int c[], int& x, int& y);

 
void tachDay(int n, int b[], int c[], int& x, int& y) {
    for (short i = 0; i < n; i++)
    {
        if (i % 2 == 0) {
            b[x] = i;

            x++;
        }
        else {
            c[y] = i;
            y++;
        }
    }
}

void nhapDay(int a[], int n) {
    for (short i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}
void xuatDay(int a[], int n) {
    for (short i = 0; i < n; i++)
    {
        cout << a[i]<<" ";
    }
}
#endif // 1

//Bài 3 g
#if 0
#include<iostream>
using namespace std;

void nhapDay(int a[], int n);
void xuatDay(int a[], int n);
void Chen(int a[], int &n, int x, int k);

int main() {
    int a[20], n;
    int  x, k;
    cin >> n;

    nhapDay(a, n);
    cout << "Day a : ";
    xuatDay(a, n);
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap k: ";
    cin >> k;
    
    Chen(a, n, x, k);
    cout << "Day a sau khi chen x vao vi tri k :";
    xuatDay(a, n);


}

void Chen(int a[], int &n, int x, int k) {
    for (short i = n - 1; i >= k; i--) {
        a[i + 1] = a[i];
    }
    a[k] = x;
    n++;

}


void nhapDay(int a[], int n) {
    for (short i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}
void xuatDay(int a[], int n) {
    for (short i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
#endif // 1

#if 1
#include <iostream>
#include <cstring>
using namespace std;

void hoan_Vi(char& x, char& y);
void reverseString(char str[]) {
    int n = strlen(str);

    for (int i = 0; i < n / 2; i++) {
      hoan_Vi(str[i], str[n - i - 1]);
    }
}

int main() {
    char str[100];
    cout << "Nhap chuoi: ";
    cin.getline(str, 100);

    reverseString(str);

    cout << "Chuoi dao nguoc: " << str << "\n";
}

void hoan_Vi(char &x, char &y) {
    char tam = x;
    x = y;
    y = tam;
}







#endif 

