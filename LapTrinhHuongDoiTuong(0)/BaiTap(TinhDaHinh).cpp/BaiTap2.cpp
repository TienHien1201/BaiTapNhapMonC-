//===================================================DỀ BÀI===================================================
/*Công ty phát triển phần mềm ba con sâu có nhu cầu quản lý các nhân viên gồm : progammer (Nhân viên lập trình)
, Designer(Nhà thiết kế) .Thông tin cơ bản của các nhân viên gồm có: 
+ Mã nhân viên
+ Tên Nhân viên 
+ Ngày tháng năm sinh
+ Dịa chỉ 
+ Hệ số lương
+ Lương cơ bản 
Lương được tính như sau: 
+ Progammer : Lương cơ bản * hệ số lương + overtime(Tiền làm ngoài giờ)
+ Designer :  Lương cơ bản * hệ số lương + bonus(Tiền thưởng thêm) 

Định dạng trong file NHANVIEN.TXT như sau: 
+ Dòng đầu tiên chứa số lượng nhân viên trong công ty 
+ Các dòng tiếp theo mõi dòng là thông tin của từng nhân viên
3
P110, Tran Tung Lam, 12/4/1985 , 12 Quoc Lo 1A Binh Tan Ho Chi Minh, 8.56, 8000000, 2000000
D310, Ly Quoc Kiet, 2/9/1991, 72 Nguyen Thi Minh Khai Quan 3 Ho Chi Minh, 4.66, 6000000, 1500000
P350, Lam Tieu Mai, 12/7/1991, 1/32 Nguyen Trai Quan 1 Ho Chi Minh, 3,76 ,8000000, 3000000

Yêu Cầu: 
1.Đọc file dữ liệu NHANVIEN.TXT
2.Thống kê lương nhân viên giảm dần THONGKELUONG.TXT
3.Sắp xếp nhân viên tăng dần theo năm sinh ra tập tin NAMSINHTANGDAN.TXT*/

#include<iostream>
#include<string>
#include<fstream>//Vì bài này thao tác với file nên cần khai báo thêm thư viện này
using namespace std;

//===============KHAI BÁO LỚP CẤU TRÚC NGÀY THÁNG NĂM SINH=================
class ngay_Thang_Nam/*vì bài này có câu Sắp xếp nhân viên tăng dần theo năm sinh ra tập tin NAMSINHTANGDAN.TXT
	nên phải tách các ngày tháng năm để sắp xếp vì vậy phải khai báo thêm lớp này.*/
{
public:
	ngay_Thang_Nam();
	~ngay_Thang_Nam();

	//Phương thức GETTER của ngày 
	int getter_Ngay() {
		return ngay;
	}
	//Phương thức SETTER của ngày
	void setter_Ngay(int NGAY) {
		ngay = NGAY;
	}

	//Phương thức GETTER của tháng
	int getter_Thang() {
		return thang;
	}
	//Phương thức SETTER của tháng
	void setter_Thang(int THANG) {
		thang = THANG;
	}

	//Phương thức GETTER của năm 
	int getter_Nam() {
		return nam;
	}
	//Phương thức SETTER của năm
	void setter_Nam(int NAM) {
		nam = NAM;
	}

private:
	int ngay;
	int thang;
	int nam;
};

ngay_Thang_Nam::ngay_Thang_Nam()
{
}

ngay_Thang_Nam::~ngay_Thang_Nam()
{
}


//==============KHAI BÁO LỚP CHA NHAN VIEN=============================
class nhan_Vien
{
public:
virtual	void doc_File(ifstream &);//& tức Truyền vào đối tượng để thao tác với file, dữ liệu từ file vào
virtual	void output();
virtual float Luong() = 0;


	nhan_Vien();
	~nhan_Vien();

protected:
	string ma_Nhan_Vien;
	string ten_Nhan_vien;
	ngay_Thang_Nam ngayThangNam;
	string dia_Chi;
	float he_So_Luong;
	float luong_Co_Ban;
};

//Cài đặt phương thức ĐỌC FILE của LỚP CHA
void nhan_Vien::doc_File(ifstream &filein) {/*Tham số truyền vào là ifstream và 1 đối tượng dùng để thao tác với
	file là filein*/

	getline(filein, ma_Nhan_Vien, ',');/*tham số truyền vào filein, lưu vào ma_Nhan_Vien, và đọc đến dấu ',' phẩy
		thì dừng*/

		/*nhìn vào file NHANVIEN.txt đã tạo trong project BaiTap(TinhDaHinh).cpp ta có thể thấy trước họ tên là 1
		khoảng trắng thì dòng này có tác dụng bỏ qua đọc khoảng trắng đó tạm hiểu là có chức năng giống cin.ignore();*/
	filein.seekg(1, 1);/*tham số đầu tiên là số byte cần dịch(nếu âm dịch sang bên trái dương sang phải, tham số thứ
	hai là vị trí hiện tại cần dịch). Dịch con trỏ chỉ vị của file tại vị trí hiện tại sang bên phải 1 byte*/

	getline(filein, ten_Nhan_vien, ',');
	int ngay;
	filein >> ngay;/*vì  ngày tháng năm này ở tầm vực private (thuộc tính) nên muốn truy cập phải dùng getter
	setter*/
	ngayThangNam.setter_Ngay(ngay);
	filein.seekg(1, 1);
	int thang;
	filein >> thang;
	ngayThangNam.setter_Thang(thang);
	filein.seekg(1, 1);
	int nam;
	filein >> nam;
	ngayThangNam.setter_Nam(nam);
	filein.seekg(2, 1); /*Dịch con trỏ chỉ vị của file tại vị trí hiện tại sang bên phải 1 byte bỏ qua khoảng trắng và dấu phẩy*/
	getline(filein, dia_Chi, ',');
	filein >> he_So_Luong;
	filein.seekg(1, 1);/*Dịch con trỏ chỉ vị của file tại vị trí hiện tại sang bên phải 1 byte vì đọc số k lấy khoảng trắng nên dịch
	1. Nhìn vào file là ta biết nên dịch mấy byte để bỏ qua những cái k cần thiết */
	filein >> luong_Co_Ban;
	filein.seekg(1, 1);

}

//Xuất danh sách NHÂN VIÊN
void nhan_Vien::output() {
	cout << "\nMa nhan vien: " << ma_Nhan_Vien;
	cout << "\nTen nhan vien: " << ten_Nhan_vien;
	cout << "\nNgay thang nam sinh (dd/mm/yyy): " << ngayThangNam.getter_Ngay() << "/" << ngayThangNam.getter_Thang() << "/" << ngayThangNam.getter_Nam();
	cout << "\nDia chi: " << dia_Chi;
	cout << "\nHe so luong: " << he_So_Luong;
	cout << "\nLuong co ban: " << ((size_t)luong_Co_Ban);
}
nhan_Vien::nhan_Vien()
{
}

nhan_Vien::~nhan_Vien()
{
}



//===========KHAI BÁO LƠP CON NHAN VIEN PROGAMMER================
class progammer:public nhan_Vien
{
public:
	void doc_File(ifstream&);//& tức Truyền vào đối tượng để thao tác với file, dữ liệu từ file vào
	void output();	
	float Luong();
	progammer();
	~progammer();

private:
	float money_Overtime;
};

//Cài đặt phương thức ĐỌC FILE của lớp con PORGAMMER
void progammer::doc_File(ifstream &filein) {
	nhan_Vien::doc_File(filein);
	filein >> money_Overtime;


}
void progammer::output() {
	nhan_Vien::output();
	cout << "\nMoney Overtime: " << ((size_t)money_Overtime)<<"\n";
		cout << "\n==================================\n\n";
}
float progammer::Luong() {
	return luong_Co_Ban * he_So_Luong + money_Overtime;
}

progammer::progammer()
{
}

progammer::~progammer()
{
}

//===========KHAI BÁO LƠP CON NHAN VIEN DESIGNER================
class designer :public nhan_Vien
{
public:
    void doc_File(ifstream&);
	void output();
	float Luong();
	designer ();
	~designer ();

private:
	int bonus;
};

//Cài đặt phương thức ĐỌC FILE của lớp con DESIGNER
void designer::doc_File(ifstream &filein) {
	nhan_Vien::doc_File(filein);
	filein >> bonus;
}

void designer::output() {
	nhan_Vien::output();
	cout << "\nAdd Money Bonus: " << bonus;
	cout << "\n==================================\n\n";
}

float designer::Luong() {
	return luong_Co_Ban * he_So_Luong + bonus;
}

designer ::designer ()
{
}

designer ::~designer ()
{
}

 

#if 1
//==========KHAI BÁO MENU=================
void Menu(nhan_Vien *ds[], int& n) {
	//Mở file
	ifstream filein;
	filein.open("NHANVIEN.txt", ios_base::in);
	while (true) {
		system("cls");
		cout << "\n==================MENU======================\n";
		cout << "\n0.Ket Thuc.\n";
		cout << "\n1.Doc thong tin NHAN VIEN tu file NHANVIEN.TXT.\n";
		cout << "\n2.Xuat danh sach NHAN VIEN.\n";
		cout << "\n==================END======================\n";

		short luaChon;
		cout << "\nHay Nhap lua chon cua ban: \n";
		cin >> luaChon;
		
		if (luaChon == 1) {
			filein >> n;//n là số lượng nhân viên hiện có
			nhan_Vien* x = NULL;

			for (short i = 0; i < n; i++){
				char c;
				filein >> c;/*Đọc ký tự đầu tiên của dòng ví dụ dòng đầu tiên trong file là các ký tự P110 thì 
				P là ký tự đầu tiên*/

				filein.seekg(-1, 1);/*1.Dịch vị con trỏ tại vị trí hiện tại sang trái 1 byte về đầu dòng
				2. Vì sao lại phải dịch về đầu dòng vì khi đọc ký tự c và ký tự đầu tiên(trong file là ký tự D)
				và khi đọc tiếp tục nó sẽ bỏ ký tự đầu và đọc các ký tự tiếp theo(cụ thể trong file là 110). Vì vậy sau
				khi dùng ký tự c kiểm tra xem nhân viên gì thì con trỏ chỉ vị phải lui về đầu dòng*/
				if (c == 'P') {
					x = new progammer();
					x->doc_File(filein);
				}
				else if (c == 'D') {
					x = new designer();
					x->doc_File(filein);
						
				}
				ds[i] = x;
			}
			
		}
		else if (luaChon == 2) {
			for (short i = 0; i < n; i++){
				cout << "\nNhan Vien thu: " << i + 1 << "\n";
				ds[i]->output();
			}
			system("pause");
		}
		else {
			break;
		}
    }
	//Đóng file
	filein.close();
}
#endif
int main() {
	nhan_Vien* ds[50];//Khai báo mảng 1 chiều các con trỏ lưu trữ 2 loại nhân viên
	int n = 0;//Số lượng nhân viên hiện có trong mảng này

	Menu(ds, n);
	system("pause");
}






#if 0
void Menu(nhan_Vien* ds[], int& n) {
	// Mở file
	ifstream filein("NHANVIEN.txt");
	if (!filein) {
		cout << "Khong the mo file!\n";
		return;
	}

	while (true) {
		system("cls");
		cout << "\n==================MENU======================\n";
		cout << "\n0.Ket Thuc.\n";
		cout << "\n1.Doc thong tin NHAN VIEN tu file NHANVIEN.TXT.\n";
		cout << "\n2.Xuat danh sach NHAN VIEN.\n";
		cout << "\n==================END======================\n";

		short luaChon;
		cout << "\nHay Nhap lua chon cua ban: \n";
		cin >> luaChon;
		if (luaChon < 0 || luaChon > 2) {
			cout << "Nhap sai lua chon tuong ung. Nhap lai !\n";
			system("pause");
		}

		if (luaChon == 1) {
			filein >> n; // n là số lượng nhân viên hiện có
			nhan_Vien* x = NULL;

			for (short i = 0; i < n; i++) {
				char c;
				filein >> c;
				filein.seekg(-1, 1);

				if (c == 'P') {
					x = new progammer();
					x->doc_File(filein);
				}
				else if (c == 'D') {
					x = new designer();
					x->doc_File(filein);
				}
				ds[i] = x;
			}

			cout << "Doc thong tin NHAN VIEN thanh cong!\n";
			system("pause");
		}
		else if (luaChon == 2) {
			if (n == 0) {
				cout << "Chua doc thong tin NHAN VIEN!\n";
			}
			else {
				for (short i = 0; i < n; i++) {
					cout << "\nNhan Vien thu: " << i + 1 << "\n";
					ds[i]->output();
				}
			}
			system("pause");
		}
		else if (luaChon == 0) {
			break;
		}
	}

	// Đóng file
	filein.close();
}
#endif