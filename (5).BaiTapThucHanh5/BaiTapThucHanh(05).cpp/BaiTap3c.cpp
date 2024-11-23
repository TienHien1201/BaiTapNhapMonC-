#if 0	
#include<iostream>
using namespace std;

void ghepChuoi(char a[], char b[], char c[]);

int main() {
	char  a[200], b[100], c[100];
	cout << "Nhap vao mot chuoi b: ";
	cin.getline(b, 40);
	cout << "Nhap vao mot chuoi c: ";
	cin.getline(c, 40);

	ghepChuoi(a, b, c);
	cout << "Chuoi a sau khi duoc ghep tu chuoi b va c: " <<a;
}

void ghepChuoi(char a[], char b[], char c[]) {

	short i = 0, j = 0;
	while (b[i] != '\0') {
		a[i] = b[i];
		i++;
	}
	while (c[j] != '\0') {
		a[i] = c[j];
		i++;
		j++;
	}
	a[i] = '\0';
}
#endif
