#if 0
#include<iostream>
using namespace std;

void inThuong(char a[]);

int main() {
	char  kyTu[200];
	cout << "Nhap vao mot chuoi: ";
	cin.getline(kyTu, 40);

	inThuong(kyTu);
	cout << "Chuoi sau khi duoc in thuong: " << kyTu;
}


void inThuong(char a[]) {
	
	short i = 0;
	while (a[i] != '\0') {
		if (a[i] >= 'A' && a[i] <= 'Z') 
			a[i] = a[i] + 32;
			i++;
	}
}
#endif

