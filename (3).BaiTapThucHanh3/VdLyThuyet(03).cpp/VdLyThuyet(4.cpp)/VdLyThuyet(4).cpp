//##### Mảng 1 chiều ####
//Ví dụ 1
#if 0
#include<iostream>
using namespace std;
int main()
{
	int a[20], n;
	cout << "Nhap Vao So Phan Tu n: " ;
		cin >> n;
		for (short i = 0; i < n; i++){
			cout << "Nhap Gia Tri a[" << i << "] =  ";
		cin >> a[i];
		}
		cout << "Day Dao Nguoc: ";
		for (short i = n - 1; i >= 0; i--)
			cout << a[i] << " ";
}
#endif

//Ví Dụ 2
#if 0
#include<iostream>
using namespace std;
int main()
{
	int a[20], n;
	cout << "Nhap Vao So Phan Tu n: ";
	cin >> n;
	for (short i = 0; i < n; i++) {
		cout << "Nhap Gia Tri a[" << i << "] =  ";
		cin >> a[i];
	}
	int average = 0;
	for (short i = 0; i < n; i++)
		average += a[i];
		cout <<"Trung Binh Cong Cua Day = "<<(float)average/n;
}
#endif

//Ví Dụ 3
#if 0
#include<iostream>
using namespace std;
int main() {

	int a[20], n, tongAm, tongDuong;
	cout << "Nhap Vao So Phan Tu n: ";
	cin >> n;

	for (short i = 0; i < n; i++)
	{
		cout << "a[" << i << "]= ";
		cin >> a[i];
	}
	tongAm = 0;
	tongDuong = 0;
	for (short i = 0; i < n; i++)
		if (a[i] > 0)
			tongDuong += a[i];
		else
			tongAm += a[i];
	cout << "Tong Phan Tu Duong: " << tongDuong<<"\n";
	cout << "Tong Phan Tu Am: " << tongAm;
}
#endif
//ví dụ 4
#if 0
#include<iostream>
using namespace std;
int main() {

	int a[20], n, max, min;
	cout << "Nhap Vao So Phan Tu n: ";
	cin >> n;

	for (short i = 0; i < n; i++)
	{
		cout << "a[" << i << "]= ";
		cin >> a[i];
	}
	max = min = a[0];
	for (short i = 0; i < n; i++)
		if (max < a[i])
			max = a[i];
	if (min > a[i])
		min = a[i];

#endif
//Ví dụ 5
#if 0
#include<iostream>
	using namespace std;
	int main() {
		int a[20], n, tam;

		cout << "Nhap Vao So Phan Tu n: ";
		cin >> n;
		for (short i = 0; i < n; i++) {
			cout << "Nhap Gia Tri a[" << i << "] =  ";
			cin >> a[i];
		}

		for (short i = 0; i < n - 1; i++)//i < n - 1 là không cần xếp số cuối nữa
		{
			for (short j = i + 1; j < n; j++)//j = i + 1 là cố định số đầu tiên đã xếp
				if (a[i] < a[j]) {

					tam = a[i];
					a[i] = a[j];
					a[j] = tam;
				}
		}
		cout << "Day giam dan\n";
		for (short i = 0; i < n; i++)
			cout << a[i] << " ";
	}
#endif 
	//Cải tiến ví dụ 5
#if 0
#include<iostream>
	using namespace std;
	int main() {
		int a[20], n, tam, viTriMax;

		cout << "Nhap Vao So Phan Tu n: ";
		cin >> n;
		for (short i = 0; i < n; i++) {
			cout << "Nhap Gia Tri a[" << i << "] =  ";
			cin >> a[i];
		}
		for (short i = 0; i < n - 1; i++)
		{
			viTriMax = i;
			for (short j = i + 1; j < n; j++)
			if(a[])

#endif

//### Mảng hai chiều ### 