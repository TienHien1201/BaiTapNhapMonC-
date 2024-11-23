#if 0
#include<iostream>
#include<string>
using namespace std;

/*===========KHAI BÁO CẤU TRÚC LỚP NHÂN VIÊN SỬA ỐNG NƯỚC========*/
class nhanVienSuaOngNuoc{
private:
		char ten[40];
		short tuoi;
		char gioiTinh[40];
		char soDienThoai[40];
		char diaChi[100];
		char ID[40];
		char tinhtrangSucKhoe[40];
		char chieuCao[40];
		char canNang[40];
		char thamNien[40];
		char CCCD[20];
		char mauToc[40];
		char mauDa[40];
		char danToc[40];
		char dongPhuc[40];
		float soGioSua;
public:
	void nhap() {
		cout << "Nhap Ten: \n";
		cin.ignore();
		cin.getline(ten, 40);
		cout << "Gioi Tinh: \n";
		cin.getline(gioiTinh, 40);
		cout << "So dien thoai: \n";
		cin.getline(soDienThoai, 40);
		cout << "Dia chi: \n";
		cin.getline(diaChi, 100);
		cout << "ID: \n";
		cin.getline(ID, 40);
		cout << "Tinh trang suc khoe: \n";
		cin.getline(tinhtrangSucKhoe, 40);
		cout << "Chieu cao: \n";
		cin.getline(chieuCao, 40);
		cout << "Can nang: \n";
		cin.getline(canNang, 40);;
		cout << "Tham nien sua ong nuoc: \n";
		cin.getline(thamNien, 40);
		cout << "CCCD: \n";
		cin.getline(CCCD, 40);
		cout << "Mau toc: \n";
		cin.getline(mauToc, 40);
		cout << "Mau da: \n";
		cin.getline(mauDa, 40);
		cout << "Dan Toc: \n";
		cin.getline(danToc, 40);
		cout << "Dong Phuc: \n";
		cin.getline(dongPhuc, 40);
		cout << "Nhap vao so gio sua ong nuoc: ";
		cin >> soGioSua;
}

	void xuat(){
		cout << "\n______________________________\n";
		cout << "Ho va Ten: "<<ten;
		cout << "\nGioi Tinh: "<<gioiTinh;
		cout << "\nSo dien thoai: "<<soDienThoai;
		cout << "\nDia chi: " << diaChi;
		cout << "\nID: "<<ID;
		cout << "\nTinh trang suc khoe: "<<tinhtrangSucKhoe;
		cout << "\nChieu cao: "<<chieuCao;
		cout << "\nCan nang: "<<canNang;
		cout << "\nTham nien sua ong nuoc: "<<thamNien;
		cout << "\nCCCD: "<<CCCD;
		cout << "\nMau toc: "<<mauToc;
		cout << "\nMau da: "<<mauDa;
		cout << "\nDan Toc: "<<mauDa;
		cout << "\nDong Phuc: "<<dongPhuc;
	}
	float tinhTienLuong() {
		return soGioSua * 50000;
	}
	
};



/*===========KHAI BÁO CẤU TRÚC LỚP NHÂN VIÊN GIAO HÀNG========*/
class nhanVienGiaoHang {
private:
	char ten[40];
	short tuoi;
	char gioiTinh[40];
	char soDienThoai[40];
	char diaChi[100];
	char ID[40];
	char tinhtrangSucKhoe[40];
	char chieuCao[40];
	char canNang[40];
	char thamNien[40];
	char CCCD[20];
	char mauToc[40];
	char mauDa[40];
	char danToc[40];
	char dongPhuc[40];
	int soHangGiao;
	short soNgaylam;
public:
	void nhap() {
		cout << "Nhap Ten: \n";
		cin.ignore();
		cin.getline(ten, 40);
		cout << "Gioi Tinh: \n";
		cin.getline(gioiTinh, 40);
		cout << "So dien thoai: \n";
		cin.getline(soDienThoai, 40);
		cout << "Dia chi: \n";
		cin.getline(diaChi, 100);
		cout << "ID: \n";
		cin.getline(ID, 40);
		cout << "Tinh trang suc khoe: \n";
		cin.getline(tinhtrangSucKhoe, 40);
		cout << "Chieu cao: \n";
		cin.getline(chieuCao, 40);
		cout << "Can nang: \n";
		cin.getline(canNang, 40);;
		cout << "Tham nien Giao Hang: \n";
		cin.getline(thamNien, 40);
		cout << "CCCD: \n";
		cin.getline(CCCD, 40);
		cout << "Mau toc: \n";
		cin.getline(mauToc, 40);
		cout << "Mau da: \n";
		cin.getline(mauDa, 40);
		cout << "Dan Toc: \n";
		cin.getline(danToc, 40);
		cout << "Dong Phuc: \n";
		cin.getline(dongPhuc, 40);
		cout << "Nhap vao so hang da giao: ";
		cin >> soHangGiao;
	}

	void xuat() {
		cout << "\n______________________________\n";
		cout << "Ho va Ten: " << ten;
		cout << "\nGioi Tinh: " << gioiTinh;
		cout << "\nSo dien thoai: " << soDienThoai;
		cout << "\nDia chi: " << diaChi;
		cout << "\nID: " << ID;
		cout << "\nTinh trang suc khoe: " << tinhtrangSucKhoe;
		cout << "\nChieu cao: " << chieuCao;
		cout << "\nCan nang: " << canNang;
		cout << "\nTham nien Giao Hang: " << thamNien;
		cout << "\nCCCD: " << CCCD;
		cout << "\nMau toc: " << mauToc;
		cout << "\nMau da: " << mauDa;
		cout << "\nDan Toc: " << mauDa;
		cout << "\nDong Phuc: " << dongPhuc;
	}
	int tinhTienLuong() {
		return soHangGiao * 33500;
	}
	
};


/*=============CẤU TRÚC NHÂN VIÊN CHẠY XE ÔM  4.0=================*/
class nhanVienChayXeOm{
private:
	char ten[40];
	short tuoi;
	char gioiTinh[40];
	char soDienThoai[40];
	char diaChi[100];
	char ID[40];
	char tinhtrangSucKhoe[40];
	char chieuCao[40];
	char canNang[40];
	char thamNien[40];
	char CCCD[20];
	char mauToc[40];
	char mauDa[40];
	char danToc[40];
	char dongPhuc[40];
	float soKm;
public:
	void nhap() {
		cout << "Nhap Ten: \n";
		cin.ignore();
		cin.getline(ten, 40);
		cout << "Gioi Tinh: \n";
		cin.getline(gioiTinh, 40);
		cout << "So dien thoai: \n";
		cin.getline(soDienThoai, 40);
		cout << "Dia chi: \n";
		cin.getline(diaChi, 100);
		cout << "ID: \n";
		cin.getline(ID, 40);
		cout << "Tinh trang suc khoe: \n";
		cin.getline(tinhtrangSucKhoe, 40);
		cout << "Chieu cao: \n";
		cin.getline(chieuCao, 40);
		cout << "Can nang: \n";
		cin.getline(canNang, 40);;
		cout << "Tham nien Giao Hang: \n";
		cin.getline(thamNien, 40);
		cout << "CCCD: \n";
		cin.getline(CCCD, 40);
		cout << "Mau toc: \n";
		cin.getline(mauToc, 40);
		cout << "Mau da: \n";
		cin.getline(mauDa, 40);
		cout << "Dan Toc: \n";
		cin.getline(danToc, 40);
		cout << "Dong Phuc: \n";
		cin.getline(dongPhuc, 40);
		cout << "Nhap so km chay: \n";
		cin >> soKm;
	}

	void xuat() {
		cout << "\n______________________________\n";
		cout << "Ho va Ten: " << ten;
		cout << "\nGioi Tinh: " << gioiTinh;
		cout << "\nSo dien thoai: " << soDienThoai;
		cout << "\nDia chi: " << diaChi;
		cout << "\nID: " << ID;
		cout << "\nTinh trang suc khoe: " << tinhtrangSucKhoe;
		cout << "\nChieu cao: " << chieuCao;
		cout << "\nCan nang: " << canNang;
		cout << "\nTham nien chay xe om: " << thamNien;
		cout << "\nCCCD: " << CCCD;
		cout << "\nMau toc: " << mauToc;
		cout << "\nMau da: " << mauDa;
		cout << "\nDan Toc: " << mauDa;
		cout << "\nDong Phuc: " << dongPhuc;
		
	}
	float tinhTienLuong() {
		return soKm * 10000;
	}
	
};

int main() {
	cout << "Nhap Thong tin nhan vien sua ong nuoc: \n";
	nhanVienSuaOngNuoc a;
	a.nhap();
	a.xuat();
	cout << "\nTong Luog: " << a.tinhTienLuong();
	cout << "\n______________________________\n";
	cout << "\nNhap Thong tin nhan vien giao hang: \n";
	nhanVienGiaoHang b;
	b.nhap();
	b.xuat();
	cout << "\nTong Luog: " << b.tinhTienLuong();
	cout << "\n______________________________\n";
	cout << "\nNhap Thong tin nhan vien Chay xe om: \n";
	nhanVienChayXeOm c;
	c.nhap();
	c.xuat();
	cout<<"\nTong Luog: "<<c.tinhTienLuong();
	cout << "\n______________________________\n";

}
#endif


