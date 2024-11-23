/*Đề bài: (các thong nhập xuất thông tin thì khỏi phải ghi yêu cầu)
a. nhập xuất thông tin.
b. Tính tổng tiền thuê xe đạp và xe máy: 
- xe đạp tính như sau: 10000(đồng) cho giờ đầu tiên, 8000(đồng) cho 
mõi giờ tiếp theo.
- xe máy tính như sau: xe 100 phân khối 150.000(đồng), 250 phân khối
tính 200.000(đồng). Đối với mõi giờ tiếp theo tính 100000 cho cả hai loại
xe máy.
c.Xuất tất cả thông tin liên quan đến việc thuê xe đạp.
d. tính tổng tiền cho thuê xe máy loại 250 phân khối.
*/
#if 0
#include<iostream>
#include<string>
using namespace std;

//Khai báo lớp cha DICH VU THUE (LỚP CHA gọi là LỚP CƠ SỞ)
class dichVuThueXe
{
protected:
	string tenNguoiThue;
	float soGioThue;

public:
	void nhap();
	void xuat();

	dichVuThueXe();
	~dichVuThueXe();

};

void dichVuThueXe::nhap() {
	cout << "Ten Nguoi Thue: \n";
	cin.clear();
	getline(cin,tenNguoiThue);
	cout << "So gio thue: \n";
	cin >> soGioThue;
}


void dichVuThueXe::xuat() {
	cout << "\nTen Nguoi Thue: "<<tenNguoiThue;
	cout << "\nSo Gio Thue: " << soGioThue << "\n";
} 

dichVuThueXe::dichVuThueXe()
{
}

dichVuThueXe::~dichVuThueXe()
{
}

//Khai báo lớp con DỊCH VỤ THUE XE ĐẠP để kế thừa lớp cha DỊCH VỤ THUÊ(LỚP CON LÀ LỚP DẪN XUẤT)
class dichVuThueXeDap:public dichVuThueXe
{
public:
	
	float tinhTienThueXe();
	dichVuThueXeDap();
	~dichVuThueXeDap();

private:
	/*ở xe đạp không có thông tin gì riêng nên không 
	cần khai báo cứ để trống*/
};


float dichVuThueXeDap::tinhTienThueXe() {
	return 10000 + (soGioThue - 1) * 8000;/* theo như đề bài giờ đầu tiên tính 10.000
	và chỉ 8000 cho mõi giờ sau. ví dụ số giờ thuê là 3 thì khi số giờ thuê - đi 1 mõi
	lần lặp vòng đến lúc (soGioThue - 1  = 0) thì 0 * với 8000 tức mất đi 8000 của mõi
	giờ sau chỉ còn lại giờ đầu là 10000 đúng theo yêu cầu đề bài.*/
}
dichVuThueXeDap::dichVuThueXeDap()
{
}

dichVuThueXeDap::~dichVuThueXeDap()
{
}

//Khai báo lớp con DỊCH VỤ THUE XE MÁY để kế thừa lớp cha DỊCH VỤ THUÊ(LỚP CON LÀ LỚP DẪN XUẤT)
class dichVuThueXeMay: public dichVuThueXe
{
public:
	void nhap();
	void xuat();
	float tinhTienThueXe();
	dichVuThueXeMay();
	~dichVuThueXeMay();

	int getter_loaiXe() {//Getter Lấy dữ liệu từ bên trong lớp mang ra ngoài lớp
		return loaiXe;
	}
	void setter_LoaiXe(int LOAIXE) {/* setter cập nhật dữ liệu từ bên ngoài lớp vào 
		bên trong lớp cho thuộc tính(private) đó(tức là mang private ra public để 
		có thể truy được) phần này phục vụ cho mục 5 của menu.*/
		loaiXe = LOAIXE;
	}
private:
	int loaiXe;
	char bienSo[40];



};

float dichVuThueXeMay::tinhTienThueXe() {
	if (loaiXe == 100) {
		return 150000 + (soGioThue - 1) * 100000;
	}
	else {
		return 200000 + (soGioThue - 1) * 100000;
	}
}
void dichVuThueXeMay::nhap() {
	dichVuThueXe::nhap();
	cout << "\nLoai Xe ( 100 - 250 Phan khoi) :"<<"\n";
	cin >> loaiXe;
	cout << "Bien So Xe: "<<"\n";
	cin.ignore();
	cin.getline(bienSo, 40);
}
void dichVuThueXeMay::xuat() {
	dichVuThueXe::xuat();
	cout << "\nLoai Xe Can Thue: " << loaiXe;
	cout << "\nBien So Xe: " << bienSo << "\n";
}
dichVuThueXeMay::dichVuThueXeMay()
{
}

dichVuThueXeMay::~dichVuThueXeMay()
{
}

//Hàm Tính tổng tiền thuê XE ĐẠP và XE MÁY
double tinh_Tong_Tien_Thue(dichVuThueXeDap ds_ThueXeDap[], short n, dichVuThueXeMay ds_ThueXeMay[], short m) {
	double sumXeDap = 0, sumXeMay = 0;
	for (short i = 0; i < n; i++)
	{
		sumXeDap += ds_ThueXeDap[i].tinhTienThueXe();
	}
	for (short i = 0; i < m; i++)
	{
		sumXeMay += ds_ThueXeMay[i].tinhTienThueXe();
	}

	return sumXeDap + sumXeMay;
}


//Thêm menu xử lí  DỊCH VỤ THUÊ 
void menu(dichVuThueXeDap ds_Thue_XeDap[], short n, dichVuThueXeMay ds_Thue_XeMay[], short m) {
	
	while (true)
	{
		cout << "\n\n\t\tBANG LUA CHON QUAN LI DICH VU THUE XE: \n";
		cout << "\n0.kET THUC.\n";
		cout << "\n1.Nhap thong tin danh sach THUE XE DAP va XE MAY. \n";
		cout << "\n2.Xuat tat ca thong tin THUE XE . \n";
		cout << "\n3.Tinh Tong Tien THUE XE DAP va XE MAY.\n";
		cout << "\n4.Xuat tat cac thong tin lien quan den viec cho THUE XE DAP.\n";
		cout << "\n5.Tinh tong tien cho THUE XE MAY loai 250 phan khoi.\n";
		cout << "\n===========================END==============================\n";
	short luaChon;
	cout << "\nMoi Nhap Lua Chon Cua Ban: \n";
	cin >> luaChon;
	if (luaChon < 0 || luaChon > 5)
	{
		cout << "\nLua chon khong hop le. Hay nhap lai lua chon tu 0 - 4 !";
	}
	else if (luaChon == 0) {
		break;
	}
	if (luaChon == 1) {
		short chon;
		while (true) {
			system("cls");//Xóa toàn bộ nội dung đã chon trướ c 
			cout << "\n0.Ket Thuc.\n";
			cout << "\n1.THUE XE DAP.\n";
			cout << "\n2.THUE XE MAY.\n";
			cout << "\nBan Muon Thue Xe Nao ? Nhap vao so tuong ung . \n";
			cin >> chon;
			if (chon == 1) {
				
					dichVuThueXeDap xeDap;
					cout << "\nNhap vao thong tin THUE XE DAP: \n";
					xeDap.nhap();
					ds_Thue_XeDap[n] = xeDap;
					n++;
	
			}

			else if (chon == 2) {
			
					dichVuThueXeMay xeMay;
					cout << "\nNhap vao thong tin THUE XE May: \n";
					xeMay.nhap();
					ds_Thue_XeMay[m] = xeMay;
					m++;
			
			}
			else {
				break; 
			}
		}
	}
		  else if (luaChon == 2) {
		cout << "\nThong tin Thue Xe:\n";
			for (short i = 0; i < n; i++)
			{
				cout << "\nThong tin THUE XE DAP thu: " << i + 1 << "\n";
				ds_Thue_XeDap[i].xuat();
				cout << "\nTien Thue XE DAP: " << ((size_t)ds_Thue_XeDap[i].tinhTienThueXe());
				cout << "\n=============================\n";
			}

			for (short i = 0; i < m; i++)
			{
				cout << "\nThong tin THUE XE MAY thu: " << i + 1 << "\n";
				ds_Thue_XeMay[i].xuat();
				cout << "\nTien Thue XE MAY: " << ((size_t)ds_Thue_XeMay[i].tinhTienThueXe())<<"\n";
				cout << "\n=============================\n";
			}

			system("pause");

		}

		  else if (luaChon == 3) {
		cout << "\n==========================================\n";
		cout << "\nTong Tien thue XE DAP va XE MAY: " << ((size_t)tinh_Tong_Tien_Thue(ds_Thue_XeDap,n, ds_Thue_XeMay, m))<<"\n";
		cout << "\n==========================================\n";
		system("pause");
	}
	
		  else if (luaChon == 4) {
		cout << "\nThong tin THUE XE DAP :\n";
		for (short i = 0; i < n; i++)
		{
			cout<<"\nDanh sach THUE XE DAP thu : "<< i + 1 <<"\n";
			ds_Thue_XeDap[i].xuat();
			cout << "\nTien Thue XE DAP: " << ((size_t)ds_Thue_XeDap[i].tinhTienThueXe());
			cout << "\n=============================\n";
		}

		system("pause");
	}
		  else if (luaChon == 5) {
		cout << "\nThong tin THUE XE MAY 250 phan khoi:\n";
		for (short i = 0; i < m; i++)
		{
			if (ds_Thue_XeMay[i].Getter_loaiXe() == 250) {
				cout << "\nDanh sach THUE XE May thu : " << i + 1 << "\n";
				ds_Thue_XeMay[i].xuat();
				cout << "\nTien Thue XE May: " << ((size_t)ds_Thue_XeMay[i].tinhTienThueXe());
				cout << "\n=============================\n";
			}
		}

		system("pause");
	}

}
}


int main() {
	dichVuThueXeDap ds_Thue_XeDap[50];
	dichVuThueXeMay ds_Thue_XeMay[50];

	short n = 0;
	short m = 0;
	menu(ds_Thue_XeDap,n ,ds_Thue_XeMay, m);
	system("pause");
}
#endif