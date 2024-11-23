#if 0
#include<iostream>
using namespace std;

short demKyTu(char a[]);
int main() {
	char a[50];
	cout << "Nhap chuoi: ";
	cin.getline(a, 50);

	short soTu = demKyTu(a);
	cout << "\nChuoi co " << soTu<<" so tu ";
}

short demKyTu(char a[]) {
	//dem so ky tu trong chuoi a
	short soTu = 0;
	short i = 0;
	while (a[i] != '\0')
	if (a[i++] == ' ')
		soTu++;

	soTu++; 

	return soTu;
}

#endif 

