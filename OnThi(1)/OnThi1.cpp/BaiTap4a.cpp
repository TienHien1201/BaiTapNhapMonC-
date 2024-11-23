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
	while (a[i]!='\0')
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

void inHoa(char a[]);

int main() {
	char kyTu[200];
	cout << "Nhap day ky tu: ";
	cin.getline(kyTu, 40);

	cout << "Day vua Nhap: " << kyTu;

	inHoa(kyTu);
	cout << "\nDay in hoa: "<< kyTu;
}

void inHoa(char a[]) {
	short i = 0;
	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] = a[i] - 32;
		i++;
	}
	
}
#endif // 1
//Hoa qua thuong ta cong nguoc lai la tru