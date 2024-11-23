
#if 0
#include<iostream>
#include<string>
using namespace std;

//=============Khai báo lớp cha NHÂN VIÊN=========== 
class nhanVien
{
protected:
	string ten;
	string maSo;
	string ngaySinh;
	string queQuan;
public:
	void nhap();
	void xuat();
	nhanVien();
	~nhanVien();

};

nhanVien::nhanVien()
{
}

nhanVien::~nhanVien()
{
}

//=============Khai báo lớp con NHÂN VIÊN  SẢN XUẤT===========
class NhanVienSanXuat: public nhanVien
{
public:
	void nhap();
	void xuat();

	NhanVienSanXuat();
	~NhanVienSanXuat();

private:
	int soSanPham;
};

void NhanVienSanXuat::nhap() {
	cout << "\t\tnhap thong tin NHAN VIEN SAN XUAT: \n";
	cout << "\nHo va Ten: \n";
	getline(cin,ten);
	cout << "Ma So: \n";
	getline(cin,maSo);
	cout << "Ngay Sinh: \n";
	getline(cin,ngaySinh);
	cout << "Que Quan: \n";
	getline(cin,queQuan);
	cout << "So Ngay Lam: \n";
	cin >> soSanPham;
}
void NhanVienSanXuat::xuat() {
	cout << "\n\======================================\n";
	cout << "\nThong tin NHAN VIEN SAN XUAT:  \n";
	cout << "Ho va Ten: " << ten;
	cout << "\nMa So: " << maSo;
	cout << "\nNgay Sinh: " << ngaySinh;
	cout << "\nQue Quan: " << queQuan;
	cout << "\nSo san pham: " << soSanPham << "\n";

}

NhanVienSanXuat::NhanVienSanXuat()
{
}

NhanVienSanXuat::~NhanVienSanXuat()
{
}

class nhanVienCongNhat:public nhanVien
{
public:
	void nhap();
	void xuat();

	nhanVienCongNhat();
	~nhanVienCongNhat();

private:
	
	int soNgayLam;

};

//=============Khai báo lớp con NHÂN VIÊN CÔNG NHẬT===========
void nhanVienCongNhat::nhap() {
	cout << "\t\tnhap thong tin NHAN VIEN CONG NHAT: \n";
	cout << "\nHo va Ten: \n";
	getline(cin, ten);
	cout << "Ma So: \n";
	getline(cin, maSo);
	cout << "Ngay Sinh: \n";
	getline(cin, ngaySinh);
	cout << "Que Quan: \n";
	getline(cin, queQuan);
	cout << "So Ngay Lam: \n";
	cin >> soSanPham;
}

void nhanVienCongNhat::xuat() {
	cout << "\n\======================================\n";
	cout << "\nThong tin NHAN VIEN CONG NHAT:  \n";
	cout << "Ho va Ten: " << ten;
	cout << "\nMa So: " << maSo;
	cout << "\nNgay Sinh: " << ngaySinh;
	cout << "\nQue Quan: " << queQuan;
	cout << "\nSo Ngay Lam: " << soNgayLam << "\n";
}

nhanVienCongNhat::nhanVienCongNhat()
{
}

nhanVienCongNhat::~nhanVienCongNhat()
{
}

//=============Khai báo lớp con NHÂN VIÊN QUẢN LÍ===========
class nhanVienQuanLi : public nhanVien
{
public:
	void nhap();
	void xuat();
	nhanVienQuanLi();
	~nhanVienQuanLi();

private:
	float heSoLuong;
};

void nhanVienQuanLi::nhap() {
	cout << "\t\tnhap thong tin NHAN VIEN QUAN LI: \n";
	cout << "\nHo va Ten: \n";
	getline(cin, ten);
	cout << "Ma So: \n";
	getline(cin, maSo);
	cout << "Ngay Sinh: \n";
	getline(cin, ngaySinh);
	cout << "Que Quan: \n";
	getline(cin, queQuan);
	cout << "So Ngay Lam: \n";
	cin >> soSanPham;
}

void nhanVienQuanLi::xuat() {
	cout << "\n\======================================\n";
	cout << "\nThong tin NHAN VIEN QUAN LI:  \n";
	cout << "Ho va Ten: " << ten;
	cout << "\nMa So: " << maSo;
	cout << "\nNgay Sinh: " << ngaySinh;
	cout << "\nQue Quan: " << queQuan;
	cout << "\nHe So Luong: " << heSoLuong << "\n";
}
nhanVienQuanLi::nhanVienQuanLi()
{
}

nhanVienQuanLi::~nhanVienQuanLi()
{
}


int main() {
	NhanVienSanXuat ds_Nv_SanXuat;
	ds_Nv_SanXuat.nhap();
	ds_Nv_SanXuat.xuat();

}
#endif