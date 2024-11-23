/*Ở bài này khác bài 1 ở bài 1 chỉ tính lương của 3 ông nhân 
viên còn bài này ta phải tính lương cho nhiều nhân viên nên
ta phải dùng mảng 1 chiều để sử lí. ở bài 3 này chỉ mới thực
hiện quan lí thông tin của ba ong này thôi bài 4 là bài tính 
tiền lương.*/
#if 0
#include<iostream>
#include<string>
using namespace std;

/*===========KHAI BÁO CẤU TRÚC LỚP NHÂN VIÊN SỬA ỐNG NƯỚC========*/
class nhanVienSuaOngNuoc {
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
		cout << "\nTham nien sua ong nuoc: " << thamNien;
		cout << "\nCCCD: " << CCCD;
		cout << "\nMau toc: " << mauToc;
		cout << "\nMau da: " << mauDa;
		cout << "\nDan Toc: " << danToc;
		cout << "\nDong Phuc: " << dongPhuc;
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
		cout << "\nDan Toc: " << danToc;
		cout << "\nDong Phuc: " << dongPhuc;
	}
	int tinhTienLuong() {
		return soHangGiao * 33500;
	}

};


/*=============CẤU TRÚC NHÂN VIÊN CHẠY XE ÔM  4.0=================*/
class nhanVienChayXeOm {
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
		cout << "Tham nien Chay Xe Om: \n";
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
		cout << "\nDan Toc: " << danToc;
		cout << "\nDong Phuc: " << dongPhuc;

	}
	float tinhTienLuong() {
		return soKm * 10000;
	}

};
/*======================THÊM MENU XỬ LÍ=====================================*/
void menu(nhanVienSuaOngNuoc dsNhanVienSuaOngNuoc[],nhanVienGiaoHang dsNhanVienGiaoHang[], 
nhanVienChayXeOm dsNhanVienChayXeOm[], short n, short m, short l){//n,m,l tương đương với số lượng nhân viên của từng nghề 
	short luaChon;
	while (true)
	{
		cout << "\n=========CHUONG TRINH QUN LI NHAN VIEN========== \n";
		cout << "\n0.Ket Thuc.\n";
		cout << "\n1.Nhap thong tin nhan vien SUA ONG NUOC: ";
		cout << "\n2.Nhap thong tin nhan vien GIAO HANG: ";
		cout << "\n3.Nhap thong tin nhan vien CHAY XE OM: ";
		cout << "\n4.Xuat danh sach thong tin nhan vien SUA ONG NUOC: ";
		cout << "\n5.Xuat danh sach thong tin nhan vien GIAO HANG: ";
		cout << "\n6.Xuat danh sach thong tin nhan vien CHAY XE OM: \n";
		cout << "\n====================== END =====================\n";

		cout << "\nHay lua chon thong tin ban muon nhap: ";
		cin >> luaChon;

		if (luaChon < 0 || luaChon > 6) {
			cout << "\nLua chon cua ban khong hop le !\n";
		}
		else if (luaChon == 0) {
			break;
		}
		if (luaChon == 1) {
			nhanVienSuaOngNuoc nvSuaOngNuoc;// đây được gọi là đối tượng giá trị
			cout << "\nNhap thong tin nhan vien SUA ONG NUOC: \n";
			nvSuaOngNuoc.nhap(); /* vì đây là đối tượng giá tri nên muốn truy cập vào class
								 nhanVienSuaOngNuoc thì bắt buộc ta phải dùng toán tử chấm để
								 truy xuất*/
			//Thêm đối tượng giá trị "nvSuaOngNuoc" vào danh sách "dsNhanVienSuaOngNuoc"
			dsNhanVienSuaOngNuoc[n] = nvSuaOngNuoc;
			n++;

		}
		else if (luaChon == 2) {
			nhanVienGiaoHang nvGiaoHang;// đây được gọi là đối tượng giá trị
			cout << "\nNhap thong tin nhan vien GIAO HANG: \n";
			nvGiaoHang.nhap(); /* vì đây là đối tượng giá tri nên muốn truy cập vào class
								 nhanVienSuaOngNuoc thì bắt buộc ta phải dùng toán tử chấm để
								 truy xuất*/
								 //Thêm đối tượng giá trị "nvSuaOngNuoc" vào danh sách "dsNhanVienSuaOngNuoc"
			dsNhanVienGiaoHang[m] = nvGiaoHang;
			m++;

		}
		 else if (luaChon == 3) {
			nhanVienChayXeOm nvChayXeOm;// đây được gọi là đối tượng giá trị
			cout << "\nNhap thong tin nhan vien CHAY XE OM: \n";
			nvChayXeOm.nhap(); /* vì đây là đối tượng giá tri nên muốn truy cập vào class
								 nhanVienSuaOngNuoc thì bắt buộc ta phải dùng toán tử chấm để
								 truy xuất*/
								 //Thêm đối tượng giá trị "nvSuaOngNuoc" vào danh sách "dsNhanVienSuaOngNuoc"
			dsNhanVienChayXeOm[l] = nvChayXeOm;
			l++;

		}
		 else if (luaChon == 4) {
			cout << "\nDANH SACH THONG NHAN VIEN SUA ONG NUOC: \n";
			for (short i = 0; i < n; i++)//dùng vòng lặp for để lặp từ đến cuối của danh sách
			{
				cout << "\nTHONG NHAN VIEN SUA ONG NUOC thu " << i + 1 << "\n";
				dsNhanVienSuaOngNuoc[i].xuat();
			}
			system("pause");// nếu không system("pause"); thì khi xuất nó không dừng màn hình lại xem được
		}

		 else if (luaChon == 5) {
			cout << "\nDANH SACH THONG NHAN VIEN GIAO HANG: \n";
			for (short i = 0; i < m; i++)//dùng vòng lặp for để lặp từ đến cuối của danh sách
			{
				cout << "\nTHONG NHAN VIEN GIAO HANG thu " << i + 1 << "\n";
				dsNhanVienGiaoHang[i].xuat();
			}
			system("pause");// nếu không system("pause"); thì khi xuất nó không dừng màn hình lại xem được
		}

		 else if (luaChon == 6) {
			cout << "\nDANH SACH THONG NHAN VIEN CHAY XE OM: \n";
			for (short i = 0; i < l; i++)//dùng vòng lặp for để lặp từ đến cuối của danh sách
			{
				cout << "\nTHONG NHAN VIEN CHAY XE OM thu " << i + 1 << "\n";
				dsNhanVienChayXeOm[i].xuat();
			}
			system("pause");// nếu không system("pause"); thì khi xuất nó không dừng màn hình lại xem được
		}
		


	}
}
int main() {
	nhanVienSuaOngNuoc dsNhanVienSuaOngNuoc[50];/*mảng 1 chiều nhân viên sửa ống nước - mõi phần tử là một đối tượng giá trị.
	bản chất 1 đối tượng, một phần tử trong mảng này được gọi là đối tượng giá trị
	nghĩa là khi ta tạo ra 1 đối tượng thì trình biên dịch sẽ yêu cầu bộ nhớ máy tính
	cấp phát một bộ nhớ chứa đối tượng đó, sau khi đối tượng đó không còn được sử dụng
	đến nữa tức vòng đời của nó kết thúc thì lúc này hàm hủy sẽ phát huy tác dụng tự động
	giải phóng vùng nhớ đã cấp phát ban đầu thì đó gọi là đối tượng giá trị*/
	nhanVienGiaoHang dsNhanVienGiaoHang[50];//mảng 1 chiều nhân viên giao hàng - mõi phần tử là một đối tượng giá trị
	nhanVienChayXeOm dsNhanVienChayXeOm[50];//mảng 1 chiều nhân viên chạy xe ôm - mõi phần tử là một đối tượng giá trị 


	//vì ban đầu 3 danh sách này chưa tồn tại bất cứ một nhân viên nào nên ta phải khởi tạo bằng 0
	short n = 0;//danh sách nhân viên sửa ống nước
	short m = 0;//danh sách nhân viên giao hàng
	short l = 0;//danh sách nhân viên chạy xe ôm

	//gọi lại hàm menu để chạy
	menu(dsNhanVienSuaOngNuoc, dsNhanVienGiaoHang, dsNhanVienChayXeOm, n, m, l);
	system("pause");// nếu không system("pause"); thì khi xuất nó không dừng màn hình lại xem được
}
#endif

	