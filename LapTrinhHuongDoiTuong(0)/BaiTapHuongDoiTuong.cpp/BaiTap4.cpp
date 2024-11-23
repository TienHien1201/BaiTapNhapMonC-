#if 1
#include<iostream>
#include<string>
using namespace std;

/*===========KHAI BÁO CẤU TRÚC LỚP NHÂN VIÊN SỬA ỐNG NƯỚC========*/
class nhanVienSuaOngNuoc {
public:
	void nhap();

	void xuat();
	float tinh_Tien_Luong();

	nhanVienSuaOngNuoc();
	~nhanVienSuaOngNuoc();

private:
	string ten;
	short tuoi;
	string gioiTinh;
	string soDienThoai;
	string diaChi;
	string ID;
	string tinhtrangSucKhoe;
	float chieuCao;
	float canNang;
	string thamNien;
	string CCCD;
	string mauToc;
	string mauDa;
	string danToc;
	string dongPhuc;
	float soGioSua;
};

nhanVienSuaOngNuoc::nhanVienSuaOngNuoc()
{
}

nhanVienSuaOngNuoc::~nhanVienSuaOngNuoc()
{
}

void nhanVienSuaOngNuoc::nhap() {
	cout << "Nhap Ten: \n";
	cin.clear();
	getline(cin, ten);
	cout << "Tuoi: \n" << tuoi;
	cout << "Gioi Tinh: \n";
	getline(cin, gioiTinh);
	cout << "So dien thoai: \n";
	getline(cin, soDienThoai);
	cout << "Dia chi: \n";
	getline(cin, diaChi);
	cout << "ID: \n";
	getline(cin, ID);
	cout << "Tinh trang suc khoe: \n";
	getline(cin, tinhtrangSucKhoe);
	cout << "Chieu cao: \n";
	cin >> chieuCao;
	cout << "Can nang: \n";
	cin >> canNang;
	cout << "Tham nien giao hang: \n";
	getline(cin, thamNien);
	cout << "CCCD: \n";
	getline(cin, CCCD);
	cout << "Mau toc: \n";
	getline(cin, mauToc);
	cout << "Mau da: \n";
	getline(cin, mauDa);
	cout << "Dan Toc: \n";
	getline(cin, danToc);
	cout << "Dong Phuc: \n";
	getline(cin, dongPhuc);
	cout << "Nhap vao so gio sua ong nuoc: ";
	cin >> soGioSua;
}

void nhanVienSuaOngNuoc::xuat() {
	cout << "\n______________________________\n";
	cout << "Ho va Ten: " << ten;
	cout << "\nGioi Tinh: " << gioiTinh;
	cout << "\nSo dien thoai: " << soDienThoai;
	cout << "\nDia chi: " << diaChi;
	cout << "\nID: " << ID;
	cout << "\nTinh trang suc khoe: " << tinhtrangSucKhoe;
	cout << "\nChieu cao: " << chieuCao;
	cout << "\nCan nang: " << canNang;
	cout << "\nTham nien sua ong nuoc: " << thamNien;
	cout << "\nCCCD: " << CCCD;
	cout << "\nMau toc: " << mauToc;
	cout << "\nMau da: " << mauDa;
	cout << "\nDan Toc: " << danToc;
	cout << "\nDong Phuc: " << dongPhuc;
	cout << "\nSo gio sua ong nuoc trong thang nay la: " << soGioSua;
	cout << "\nTIEN LUONG: " << ((size_t)tinh_Tien_Luong()) << "\n";

}

float nhanVienSuaOngNuoc::tinh_Tien_Luong() {/*lý do ở hàm tính tiền lương này 
	không cần truyền tham số đầu vào vì soGioSua là thong tin và là tham số 
	cần để tính và soGioSua này nó thuộc luôn class nhanVienSuaOngNuoc, và 
	phương thức tính tiền lương này cũng đã thuộc luôn phương thức của class
	nhanVienSuaOngNuoc vì vậy khi ta nhập soGioSua tức hàm tính tiền lương đã
	có tham số để tính.Chỉ truyền tham số khi  thông tin không có trong class
	tức thông tin bắt buộc phải truyền từ bên ngoài truyền vào chúng ta mới cần
	truyền tham số */
	return soGioSua * 50000;
}
/*===========KHAI BÁO CẤU TRÚC LỚP NHÂN VIÊN Giao Hàng========*/
class nhanVienGiaoHang {
public:
	void nhap();
	void xuat();
	int tinh_Tien_Luong();

	nhanVienGiaoHang();
	~nhanVienGiaoHang();

private:
	string ten;
	short tuoi;
	string gioiTinh;
	string soDienThoai;
	string diaChi;
	string ID;
	string tinhtrangSucKhoe;
	float chieuCao;
	float canNang;
	string thamNien;
	string CCCD;
	string mauToc;
	string mauDa;
	string danToc;
	string dongPhuc;
	int soHangGiao;
};

nhanVienGiaoHang::nhanVienGiaoHang()
{
}

nhanVienGiaoHang::~nhanVienGiaoHang()
{
}

void nhanVienGiaoHang::nhap() {
	cout << "Nhap Ten: \n";
	cin.clear();
	getline(cin, ten);
	cout << "Tuoi: \n" << tuoi;
	cout << "Gioi Tinh: \n";
	getline(cin, gioiTinh);
	cout << "So dien thoai: \n";
	getline(cin, soDienThoai);
	cout << "Dia chi: \n";
	getline(cin, diaChi);
	cout << "ID: \n";
	getline(cin, ID);
	cout << "Tinh trang suc khoe: \n";
	getline(cin, tinhtrangSucKhoe);
	cout << "Chieu cao: \n";
	cin >> chieuCao;
	cout << "Can nang: \n";
	cin >> canNang;
	cout << "Tham nien giao hang: \n";
	getline(cin, thamNien);
	cout << "CCCD: \n";
	getline(cin, CCCD);
	cout << "Mau toc: \n";
	getline(cin, mauToc);
	cout << "Mau da: \n";
	getline(cin, mauDa);
	cout << "Dan Toc: \n";
	getline(cin, danToc);
	cout << "Dong Phuc: \n";
	getline(cin, dongPhuc);
	cout << "Nhap vao so hang giao duoc: ";
	cin >> soHangGiao;
}

void nhanVienGiaoHang::xuat() {
	cout << "\n______________________________\n";
	cout << "Ho va Ten: " << ten;
	cout << "\nGioi Tinh: " << gioiTinh;
	cout << "\nSo dien thoai: " << soDienThoai;
	cout << "\nDia chi: " << diaChi;
	cout << "\nID: " << ID;
	cout << "\nTinh trang suc khoe: " << tinhtrangSucKhoe;
	cout << "\nChieu cao: " << chieuCao;
	cout << "\nCan nang: " << canNang;
	cout << "\nTham nien giao hang: " << thamNien;
	cout << "\nCCCD: " << CCCD;
	cout << "\nMau toc: " << mauToc;
	cout << "\nMau da: " << mauDa;
	cout << "\nDan Toc: " << danToc;
	cout << "\nDong Phuc: " << dongPhuc;
	cout << "\nSo hang duoc giao trong thang la: " << soHangGiao;
	cout << "\nTIEN LUONG: " << ((size_t)tinh_Tien_Luong()) << "\n";
}
int nhanVienGiaoHang::tinh_Tien_Luong() {//Tương tự như hàm tính tiền lương của sửa ống nước
	return soHangGiao * 33.500;
}

/*===========KHAI BÁO CẤU TRÚC LỚP NHÂN VIÊN SỬA ỐNG NƯỚC========*/
class nhanVienChayXeOm{
public:
	void nhap();

	void xuat();
	float tinh_Tien_Luong();

	nhanVienChayXeOm();
	~nhanVienChayXeOm();

private:
	string ten;
	short tuoi;
	string gioiTinh;
	string soDienThoai;
	string diaChi;
	string ID;
	string tinhtrangSucKhoe;
	float chieuCao;
	float canNang;
	string thamNien;
	string CCCD;
	string mauToc;
	string mauDa;
	string danToc;
	string dongPhuc;
	float soKm;
};

nhanVienChayXeOm::nhanVienChayXeOm()
{
}

nhanVienChayXeOm::~nhanVienChayXeOm()
{
}

void nhanVienChayXeOm::nhap() {
	cout << "Nhap Ten: \n";
	cin.clear();
	getline(cin, ten);
	cout << "Tuoi: \n" << tuoi;
	cout << "Gioi Tinh: \n";
	getline(cin, gioiTinh);
	cout << "So dien thoai: \n";
	getline(cin, soDienThoai);
	cout << "Dia chi: \n";
	getline(cin, diaChi);
	cout << "ID: \n";
	getline(cin, ID);
	cout << "Tinh trang suc khoe: \n";
	getline(cin, tinhtrangSucKhoe);
	cout << "Chieu cao: \n";
	cin >> chieuCao;
	cout << "Can nang: \n";
	cin >> canNang;
	cout << "Tham nien giao hang: \n";
	getline(cin, thamNien);
	cout << "CCCD: \n";
	getline(cin, CCCD);
	cout << "Mau toc: \n";
	getline(cin, mauToc);
	cout << "Mau da: \n";
	getline(cin, mauDa);
	cout << "Dan Toc: \n";
	getline(cin, danToc);
	cout << "Dong Phuc: \n";
	getline(cin, dongPhuc);
	cout << "Nhap vao so km chay duoc: ";
	cin >> soKm;
}

void nhanVienChayXeOm::xuat() {
	cout << "\n______________________________\n";
	cout << "Ho va Ten: " << ten;
	cout << "\nGioi Tinh: " << gioiTinh;
	cout << "\nSo dien thoai: " << soDienThoai;
	cout << "\nDia chi: " << diaChi;
	cout << "\nID: " << ID;
	cout << "\nTinh trang suc khoe: " << tinhtrangSucKhoe;
	cout << "\nChieu cao: " << chieuCao;
	cout << "\nCan nang: " << canNang;
	cout << "\nTham nien Chay xe om: " << thamNien;
	cout << "\nCCCD: " << CCCD;
	cout << "\nMau toc: " << mauToc;
	cout << "\nMau da: " << mauDa;
	cout << "\nDan Toc: " << danToc;
	cout << "\nDong Phuc: " << dongPhuc;
	cout << "\nSo km chay duoc trong thang la: " << soKm;
	cout << "\nTIEN LUONG: " << ((size_t)tinh_Tien_Luong()) << "\n"; // ((size_t) giúp bỏ qua rút gọn số

}
float nhanVienChayXeOm::tinh_Tien_Luong() {//Tương tự như hàm tính tiền lương của sửa ống nước
	return soKm * 10000;
}

//Hàm tính tổng tiền lương tháng của Ông nhân viên sửa ống nước
double tong_Tien_Luong_Nhan_Vien_Sua_Ong_Nuoc(nhanVienSuaOngNuoc danh_Sach[], short n) {//n là số lượng nhân viên
	double sum = 0;
	for (short i = 0; i < n; i++)
	{
		sum += danh_Sach[i].tinh_Tien_Luong();
	}
	return sum;
}

//Hàm tính tổng tiền lương tháng của Ông nhân viên Giao hàng
double tong_Tien_Luong_Nhan_Vien_Giao_Hang(nhanVienGiaoHang danh_Sach[], short m) {//m là số lượng nhân viên
	double sum = 0;
	for (short i = 0; i < m; i++)
	{
		sum += danh_Sach[i].tinh_Tien_Luong();
	}
	return sum;
}

//Hàm tính tổng tiền lương tháng của Ông nhân viên Giao hàng
double tong_Tien_Luong_Nhan_Vien_Chay_Xe_Om(nhanVienChayXeOm danh_Sach[], short l) {//m là số lượng nhân viên
	double sum = 0;
	for (short i = 0; i < l; i++)
	{
		sum += danh_Sach[i].tinh_Tien_Luong();
	}
	return sum;
}

//Hàm hoán vị giữa các đối tượng NHÂN VIÊN SỬA ỐNG NƯỚC
void hoan_Vi_Nhan_Vien_SuaOngNuoc(nhanVienSuaOngNuoc &x, nhanVienSuaOngNuoc &y) {
	nhanVienSuaOngNuoc tam = x;
	x = y;
	y = tam;
}

//Hàm hoán vị giữa các đối tượng NHÂN VIÊN GIAO HÀNG
void hoan_Vi_Nhan_Vien_GiaoHang(nhanVienGiaoHang& x, nhanVienGiaoHang& y) {
	nhanVienGiaoHang tam = x;
	x = y;
	y = tam;
}

//Hàm hoán vị giữa các đối tượng NHÂN VIÊN CHẠY XE ÔM
void hoan_Vi_Nhan_Vien_ChayXeOm(nhanVienChayXeOm& x, nhanVienChayXeOm& y) {
	nhanVienChayXeOm tam = x;
	x = y;
	y = tam;
}

//Hàm sắp xếp danh sách nhân viên SỬA ỐNG NƯỚC giảm theo lương
void sap_Xep_Ds_Nv_SuaOngNuoc_Giam_Theo_Luong(nhanVienSuaOngNuoc danh_Sach[], short n) {
	for (short i = 0; i < n - 1; i++){
		for (short j = i + 1; j < n; j++){
			if (danh_Sach[i].tinh_Tien_Luong() < danh_Sach[j].tinh_Tien_Luong())
				hoan_Vi_Nhan_Vien_SuaOngNuoc(danh_Sach[i], danh_Sach[j]);/*vì đã có hàm hoán 
			vị ở trên truyền vào vào hai tham số x và y đổi chổ cho nhau nên ở dòng này nó 
			sẽ hiểu đổi chổ danh sách thằng thứ i vs j tương ứng vơi thằng &x và &y*/
		}
	}
}

//Hàm sắp xếp danh sách nhân viên GIAO HÀNG giảm theo lương
void sap_Xep_Ds_Nv_GiaoHang_Giam_Theo_Luong(nhanVienGiaoHang danh_Sach[], short n) {
	for (short i = 0; i < n - 1; i++) {
		for (short j = i + 1; j < n; j++) {
			if (danh_Sach[i].tinh_Tien_Luong() < danh_Sach[j].tinh_Tien_Luong())
				hoan_Vi_Nhan_Vien_GiaoHang(danh_Sach[i], danh_Sach[j]);/*vì đã có hàm hoán
			vị ở trên truyền vào vào hai tham số x và y đổi chổ cho nhau nên ở dòng này nó
			sẽ hiểu đổi chổ danh sách thằng thứ i vs j tương ứng vơi thằng &x và &y*/
		}
	}

}

//Hàm sắp xếp danh sách nhân viên CHẠY XE ÔM giảm theo lương
void sap_Xep_Ds_Nv_ChayXeOm_Giam_Theo_Luong(nhanVienChayXeOm danh_Sach[], short n) {
	for (short i = 0; i < n - 1; i++) { 
		for (short j = i + 1; j < n; j++) {
			if (danh_Sach[i].tinh_Tien_Luong() < danh_Sach[j].tinh_Tien_Luong())
				hoan_Vi_Nhan_Vien_ChayXeOm(danh_Sach[i], danh_Sach[j]);/*vì đã có hàm hoán
			vị ở trên truyền vào vào hai tham số x và y đổi chổ cho nhau nên ở dòng này nó
			sẽ hiểu đổi chổ danh sách thằng thứ i vs j tương ứng vơi thằng &x và &y*/
		}
	}

}

/*======================THÊM MENU XỬ LÍ=====================================*/
void menu(nhanVienSuaOngNuoc ds_nv_SuaOngNuoc[], nhanVienGiaoHang ds_nv_GiaoHang[],
	nhanVienChayXeOm ds_nv_ChayXeOm[], short n, short m, short l) {

	short luachon;
	while (true) {
		cout << "\n\n\t\tBANG LUA CHON QUAN LI THONG TIN NHAN VIEN\n";
		cout << "\n0.KET THUC.\n";
		cout << "\n1.NHAP THONG TIN NHAN VIEN SUA ONG NUOC.\n";
		cout << "\n2.NHAP THONG TIN NHAN VIEN GIAO HANG.\n";
		cout << "\n3.NHAP THONG TIN NHAN VIEN CHAY XE OM.\n";
		cout << "\n4.XUAT THONG TIN NHAN VIEN SUA ONG NUOC.\n";
		cout << "\n5.XUAT THONG TIN NHAN VIEN SUA ONG NUOC.\n";
		cout << "\n6.XUAT THONG TIN NHAN VIEN SUA ONG NUOC.\n";
		cout << "\n7.XEM TONG TIEN LUONG CUA BA LOAI NHAN VIEN\n";
		cout << "\n8.XEM DANH SACH XEP HANG CUA CAC NHAN VIEN DUOC DANH GIA GIAM THEO LUONG\n";

		cout << "\nMoi nhap lua chon: \n";
		cin >> luachon;
		if (luachon < 0 || luachon > 8) {
			cout << "\nLua chon cua ban khong hop le. Hay nhap lai chon tu 1 den 6 !\n";
		}
		if (luachon == 0) {
			cout << "\nKET THUC.\n";
			break;
		}
		if (luachon == 1) {
			nhanVienSuaOngNuoc nv_SuaOngNuoc;
			cout << "\nXIN MOI NHAP THONG TIN NHAN VIEN SUA ONG NUOC: \n";
			nv_SuaOngNuoc.nhap();

			ds_nv_SuaOngNuoc[n] = nv_SuaOngNuoc;
			n++;
		}
		else if (luachon == 2) {
			nhanVienGiaoHang nv_GiaoHang;
			cout << "\nXIN MOI NHAP THONG TIN NHAN VIEN GIAO HANG: \n";
			nv_GiaoHang.nhap();

			ds_nv_GiaoHang[m] = nv_GiaoHang;
			m++;
		}
		else if (luachon == 3) {
			nhanVienChayXeOm nv_SuaChayXeOm;
			cout << "\nXIN MOI NHAP THONG TIN NHAN VIEN CHAY XE OM: \n";
			nv_SuaChayXeOm.nhap();

			ds_nv_ChayXeOm[l] = nv_SuaChayXeOm;
			l++;
		}
		else if (luachon == 4) {
			for (short i = 0; i < n; i++) {
				cout << "\nDANH SACH NHAN VIEN SUA ONG NUOC: \n";
				cout << "THONG TIN CUA NHAN VIEN SUA ONG NUOC thu " << i + 1 << "\n";
				ds_nv_SuaOngNuoc[i].xuat();
			}
			cout << "\n\n\t\tTONG TIEN LUONG:" << ((size_t)tong_Tien_Luong_Nhan_Vien_Sua_Ong_Nuoc(ds_nv_SuaOngNuoc, n)) << "\n";
			system("pause");
		}
		else if (luachon == 5) {
			for (short i = 0; i < m; i++) {
				cout << "\nDANH SACH NHAN VIEN GIAO HANG: \n";
				cout << "\nTHONG TIN CUA NHAN VIEN GIAO HANG thu " << i + 1 << "\n";
				ds_nv_GiaoHang[i].xuat();
			}
			cout << "\n\n\t\tTONG TIEN LUONG:" << ((size_t)tong_Tien_Luong_Nhan_Vien_Giao_Hang(ds_nv_GiaoHang, m) )<< "\n";
			system("pause");
		}
		else if (luachon == 6) {
			for (short i = 0; i < l; i++) {
				cout << "\nDANH SACH NHAN VIEN CHAY XE OM: \n";
				cout << "\nTHONG TIN CUA NHAN VIEN CHAY XE OM thu " << i + 1 << "\n";
				ds_nv_ChayXeOm[i].xuat();
			}
			cout << "\n\n\t\tTONG TIEN LUONG:" << ((size_t)tong_Tien_Luong_Nhan_Vien_Chay_Xe_Om(ds_nv_ChayXeOm, l) )<< "\n";
			system("pause");
		}


		else if (luachon == 7) {
			cout << "TONG TIEN CONG TY CAN TRA CHO NHAN VIEN HANG THANG: " <<((size_t) tong_Tien_Luong_Nhan_Vien_Sua_Ong_Nuoc(ds_nv_SuaOngNuoc, n)
				+ tong_Tien_Luong_Nhan_Vien_Giao_Hang(ds_nv_GiaoHang, m) + tong_Tien_Luong_Nhan_Vien_Chay_Xe_Om(ds_nv_ChayXeOm,l))<<"\n";
			system("pause");
		}
		else if(luachon == 8){
			cout << "\n\n\t\tdanh sach giam dan cua NHAN VIEN SUA ONG NUOC: \n";
			sap_Xep_Ds_Nv_SuaOngNuoc_Giam_Theo_Luong(ds_nv_SuaOngNuoc, n);
			for (short i = 0; i < n; i++) {
				cout << "\nDANH SACH NHAN VIEN SUA ONG NUOC: \n";
				cout << "THONG TIN CUA NHAN VIEN SUA ONG NUOC thu " << i + 1 << "\n";
				ds_nv_SuaOngNuoc[i].xuat();
			}
			cout << "\n\n\t\tdanh sach giam dan cua NHAN VIEN GIAO HANG: \n";
			sap_Xep_Ds_Nv_GiaoHang_Giam_Theo_Luong(ds_nv_GiaoHang, m);
			for (short i = 0; i < m; i++) {
				cout << "\nDANH SACH NHAN VIEN GIAO HANG: \n";
				cout << "\nTHONG TIN CUA NHAN VIEN GIAO HANG thu " << i + 1 << "\n";
				ds_nv_GiaoHang[i].xuat();
			}
			cout << "\n\n\t\tdanh sach giam dan cua NHAN VIEN CHAY XE OM\n";
			sap_Xep_Ds_Nv_ChayXeOm_Giam_Theo_Luong(ds_nv_ChayXeOm, l);
			for (short i = 0; i < l; i++) {
				cout << "\nDANH SACH NHAN VIEN CHAY XE OM: \n";
				cout << "\nTHONG TIN CUA NHAN VIEN CHAY XE OM thu " << i + 1 << "\n";
				ds_nv_ChayXeOm[i].xuat();
			}
			system("pause");
		}
	}

}


int main() {
	nhanVienSuaOngNuoc ds_nv_SuaOngNuoc[50];
	nhanVienGiaoHang ds_nv_GiaoHang[50];
	nhanVienChayXeOm ds_nv_ChayXeOm[50];
	
	short n = 0;
	short m = 0;
	short l = 0;
	menu(ds_nv_SuaOngNuoc, ds_nv_GiaoHang, ds_nv_ChayXeOm, n, m, l);
	system("pause");
}
#endif



