#if 0
//Bài này th?y sửa là đúng r?i v? b?n vs code 2022 không có b?n quy?n nên b? l?i 

#include<iostream>
using namespace std;

char* inThuong(char a[]);

int main() {
	char kyTu[100];
	cout << "Nhap mot vao chuoi: ";
	cin.getline(kyTu, 40);
	cout << "chuoi vua nhap: " << kyTu;
	cout << "\nChuoi sau khi duoc in thuong: " << inThuong(kyTu);
}
char* inThuong(char a[]) {
	short i = 0;
	 char chuoiTam[100];//Bài thầy sửa ko có static n?u đi thi h?y b? static m?i đúng nh? nhé!
	while (a[i] != '\0') {
		if (a[i] >= 'A' && a[i] <= 'Z')
			chuoiTam[i] = a[i] + 32;
		else
			chuoiTam[i] = a[i];
		i++;
	}
	chuoiTam[i] = '\0';
	return chuoiTam;
}
#endif

#if 0
#include<iostream>
using namespace std;

char* inHoa(char a[]);

int main() {
	char kyTu[200];
	cout << "Nhap day ky tu: ";
	cin.getline(kyTu, 40);

	cout << "Day vua Nhap: " << kyTu;


	cout << "\nDay in hoa: " << inHoa(kyTu);

}

char* inHoa(char a[]) {
	char chuoiTam[200];
	short i = 0;
	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			chuoiTam[i] = a[i] - 32;
		else
			chuoiTam[i] = a[i];
		i++;
	}
	chuoiTam[i] = '\0';
	return chuoiTam;
}
#endif // 1
//Hoa qua thuong ta cong nguoc lai la tru


#if 0
#include<iostream>
using namespace std;

void inThuong(char a[]);

int main() {
	char kyTu[200];
	cout << "Nhap day ky tu: ";
	cin.getline(kyTu, 40);

	cout << "Day vua Nhap: " << kyTu;

	inThuong(kyTu);
	cout << "\nDay in thuong: " << kyTu;
}

void inThuong(char a[]) {
	short i = 0;
	while (a[i] != '\0')
	{
		if (a[i] >= 'A' && a[i] <= 'Z')
			a[i] = a[i] + 32;
		i++;
	}
}
#endif