#if 0
#include<iostream>
#include<string>
using namespace std;

class sinhVien{
private:
	char Ten[40];
	char maSinhVien[10];
	short Tuoi;
	short Diem;
public:
		void Nhap() {
			cout << "Nhap Thong Tin: \n";
			cout << "Nhap Ten: \n";
			cin.ignore();//Xóa bộ nhớ đệm bàn phím mõi khi nhập vào
			cin.getline(Ten, 40);
			cout << "Nhap ma Sinh Vien: \n";
			cin.getline(maSinhVien, 10);
			cout << "Nhap Tuoi: \n";
			cin>>Tuoi;
			cout << "Nhap diem: \n";
			cin >> Diem;
		}


		void Xuat() {
			cout << "\n____________________________\n";
			cout<<"\nHo va Ten: " << Ten ;
			cout<<"\nMa Sinh Vien: " << maSinhVien;
			cout<<"\nTuoi: " << Tuoi;
			cout<<"\nDiem: " << Diem;
			cout << "\n____________________________\n";
		}
	
};
int main() {
	sinhVien a, b,c,d;// Đây là cấp phát tĩnh
	//sinhVien* a, b, c, d = new sinhVien;//Đây là cấp phát động
	a.Nhap();
	a.Xuat();
	b.Nhap();
	b.Xuat();
	c.Nhap();
	c.Xuat();
	d.Nhap();
	d.Xuat();
}
#endif