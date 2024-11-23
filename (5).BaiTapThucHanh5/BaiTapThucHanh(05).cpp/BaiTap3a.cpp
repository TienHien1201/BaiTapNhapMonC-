#if 0
#include<iostream>
using namespace std;

char* inHoa(char a[]);

int main() {
	char kyTu[200];

	cout << "Nhap day ky tu thu nhat: ";
	cin.getline(kyTu, 200);

	cout << "Xuat day vua nhap: "<<kyTu;

	cout << "\nChuyen sang day in hoa: " <<inHoa( kyTu);
}

///////////////////////////////
//Chuyen sang in hoa
char* inHoa(char a[]) {
	char *chuoiTam = new char[200];
	short i = 0;
	while (a[i] != '\0'){
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
