#if 0
#include<iostream>
#include<string>
using namespace std;

void chuoiDaoNguoc(char a[], char chuoiDao[]);

int main() {
	char a[100], chuoiDao[100];

	cout << "Nhap chuoi: ";
	cin.getline(a, 40);

	chuoiDaoNguoc(a, chuoiDao);
	cout << "Chuoi dao nguoc la: " << chuoiDao;

}
  
void chuoiDaoNguoc(char a[], char chuoiDao[]) {

	//dem so ky tu trong chuoi a  
	short soKyTu = 0;
	while (a[soKyTu++] != '\0');/*vì câu lệnh rổng nên
	phải có dấu chấm phẩy để tách vs các câu lệnh bên 
	dưới đánh dấu rằng kết thúc câu lệnh khi gặp ký tự 
	kết thúc nếu k có dấu kết thúc câu này thì chương 
	trình sẽ sai và k  in ra kq*/

		soKyTu--;//Bo 1 ky tu la ky tu ket thuc chuoi


	//chep chuoi a vao chuoidao 
	for (short i = 0; i < soKyTu; i++)
		chuoiDao[soKyTu - i - 1] = a[i];	
	chuoiDao[soKyTu] = '\0';
}
#endif

