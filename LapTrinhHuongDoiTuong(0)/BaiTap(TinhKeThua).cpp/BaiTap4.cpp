/*==============Bài Tập Kế Thừa================= */
/*Thư viện X tiến hành cho đăng kí làm thẻ độc giả. Thông tin đọc giả Gồm: 
       + Họ và Tên
       + Ngày lập thẻ
       + Số tháng có hiệu lực của thẻ
- Có hai lọa độc giả : Trẻ em và người lớn
       + Độc giả trẻ em cần lưu thêm thông tin họ tên người đại diện.
Tiền làm thẻ tính theo công thức: Số tháng có hiệu lực * 5000 VNĐ
       + Độc giả người lớn cần lưu thêm thông tin số CMND. Tiền làm thẻ 
       Tính Theo Công thức: số tháng có hiệu lực * 10000VNĐ*/
/*====Yêu Cầu=====*/
/*1.Hãy cài đặt các lớp đại diện cho các loai độc giả trên để: 
       + Quản lí Thông tin thẻ
       + Tính tiền làm thẻ của 1 thẻ độc giả
Hãy cài đặt các lớp thuVien Để quản lí danh sách các loại độc giả trong
thư viện, với các chưc năng sau: 
       + Nhập, Xuất danh sách các loại độc giả
       + Tính tổng tiền làm thẻ*/
#if 1
#include<iostream>
#include<string>
#include<vector>
using namespace std;


class docGia
{
public:
	void nhap();
	void xuat();

	docGia();
	~docGia();

protected:
	string ten;
	string ngayLapThe;
	int soThangCoHieulucCuaThe;
};

void docGia::nhap() {
	cout << "Ho Va Ten: \n";
	cin.ignore();
	getline(cin, ten);
	cout << "Ngay Lap The ( dd / mm / yyyy ): \n";
	cin.ignore();
	getline(cin, ngayLapThe);
	cout << "So Thang Co Hieu Luc Cua The: \n";
	cin.ignore();
	cin >> soThangCoHieulucCuaThe;
	

}

void docGia::xuat() {
	
	cout << "Ho va Ten: " << ten ;
	cout << "\nNgay Lap The: " << ngayLapThe;
	cout << "\nSo thang co hieu luc: " << soThangCoHieulucCuaThe<<"\n";
	
}

docGia::docGia()
{
}

docGia::~docGia()
{
}

class docGiaTreEm:public docGia
{
public:
	void nhap();
	void xuat();
	int tien_Lam_The();
	docGiaTreEm();
	~docGiaTreEm();

private:
	string tenNguoiDaiDien;
	
};

void docGiaTreEm::nhap() {
	docGia::nhap();
	cout << "Ten Nguoi Dai Dien: \n" ;
	cin.ignore();
	getline(cin, tenNguoiDaiDien);
}

void docGiaTreEm::xuat() {
	docGia::xuat();
	cout << "Ten nguoi dai dien: " << tenNguoiDaiDien << "\n";
	cout << "\n===============================\n";
}

int docGiaTreEm::tien_Lam_The() {
	
	return soThangCoHieulucCuaThe * 5000;
}

docGiaTreEm::docGiaTreEm()
{
}

docGiaTreEm::~docGiaTreEm()
{
}

class docGiaNguoiLon:public docGia
{
public:
	void nhap();
	void xuat();
	int tien_Lam_The();
	docGiaNguoiLon();
	~docGiaNguoiLon();

private:
	string CCCD;
};

void docGiaNguoiLon::nhap() {
	docGia::nhap();
	cout << "Nhap CCCD: \n";
	cin.ignore();
	getline(cin, CCCD);
}

void docGiaNguoiLon::xuat() {
	docGia::xuat();
	cout << "Can Cuoc Cong Dan (CCCD): " <<CCCD<< "\n";
	cout << "\n===============================\n";

}

int docGiaNguoiLon::tien_Lam_The() {
	return soThangCoHieulucCuaThe * 10000;
}

docGiaNguoiLon::docGiaNguoiLon()
{
}

docGiaNguoiLon::~docGiaNguoiLon()
{
}

/*Vector có thể được coi là một dạng cải tiến của mảng 1 chiều trong C++.
So với mảng 1 chiều thông thường, vector có khả năng tự động thay đổi kích
thước và quản lý bộ nhớ một cách linh hoạt. Khi số lượng phần tử trong vector
thay đổi, vector tự động điều chỉnh kích thước và cung cấp các phương thức để thêm,
xóa, truy cập và sắp xếp các phần tử.
?????? Một số điểm quan trọng về vector:
1.Kích thước động:
Vector có thể thay đổi kích thước trong quá trình chạy. Bạn có thể thêm hoặc xóa các phần
tử một cách linh hoạt.
2.Truy cập phần tử:
Bạn có thể truy cập các phần tử trong vector bằng cách
sử dụng các chỉ số tương tự như mảng 1 chiều thông thường. Ví dụ: vector[index].
3.Thao tác với phần tử: Vector cung cấp các phương thức như push_back() để thêm phần tử vào cuối
vector, pop_back() để loại bỏ phần tử cuối cùng, và nhiều phương thức khác để chèn, xóa và sắp xếp 
các phần tử.
4.Quản lý bộ nhớ: Vector tự động quản lý bộ nhớ và điều chỉnh kích thước khi cần thiết. Bạn không cần 
phải lo lắng về việc cấp phát và giải phóng bộ nhớ thủ công.
5.Đa dạng kiểu dữ liệu: Vector có thể chứa các kiểu dữ liệu khác nhau, bao gồm cả các lớp tự định nghĩa.

==>Sử dụng vector giúp bạn làm việc với dữ liệu một cách dễ dàng hơn và tránh những vấn đề liên quan đến quản
lý bộ nhớ.*/
class thuVien
{
public:
	void nhap();
	void xuat();
	int tinh_Tong_Tien_Lam_The();
	thuVien();
	~thuVien();

private:
	vector<docGiaTreEm *>ds_DocGia_TreEm;//Mảng vector 1 chiều (danh sách ) chứa các đọc giả trẻ em 
	vector<docGiaNguoiLon *>ds_DocGia_NguoiLon;//Mảng vector 1 chiều (danh sách ) chứa các đọc giả Người lớn 
};

thuVien::thuVien()
{
}

thuVien::~thuVien()
{
}

void thuVien::nhap(){
	
			while (true){
				system("cls");
				cout << "\n==================MENU======================\n";
				cout << "\nBan La DOC GIA TRE EM or NGUOI LON ? \n";
				cout << "\n0.Ket Thuc.\n";
				cout << "\n1.Nhap thong tin DOC GIA TRE EM: \n";
				cout << "\n2.Nhap thong tin DOC GIA NGUOI LON: \n";
				cout << "\n==================END======================\n";
				
				short luaChon;
				cout << "\nHAY NHAP LUA CHON TUONG UNG: ";
				cin >> luaChon;

				if (luaChon == 1) {
					docGiaTreEm *ds_TreEm = new docGiaTreEm;
					cout << "\nNhap thong tin DOC GIA TRE EM: \n";
					ds_TreEm->nhap();
					ds_DocGia_TreEm.push_back(ds_TreEm);//Thêm đối tượng ĐỘC GIẢ TRE EM "ds_TreEM" vào mảng vector<docGiaTreEm> 

				}
				else if (luaChon == 2) {
					docGiaNguoiLon *ds_NguoiLon = new docGiaNguoiLon;
					cout << "\nNhap thong tin DOC GIA NGUOI LON: \n";
					ds_NguoiLon->nhap();
					ds_DocGia_NguoiLon.push_back(ds_NguoiLon);//Thêm đối tượng ĐỘC GIẢ NGƯỜI LỚN "ds_NguoiLon" vào mảng vector<docGiaNguoiLon> 
				}
				else if(luaChon == 0){
					break;
				}
				else
				{
					cout << "\n\n\t\tLua chon khong hop le !\n\n";
					system("puase");
				}	

			}
		}

void thuVien::xuat() {
	/*thư viện xuất này có 2 độc giả "ĐỘC GIẢ TRẺ EM và ĐỘC GIẢ NGƯỜI LỚN", mõi
	độc giả đc quản bởi 1 vector tương ứng*/

	for (short i = 0; i < ds_DocGia_TreEm.size(); i++)
	{
		cout << "\n\n===============================";
		cout << "\nThong Tin DOC GIA TRE EM thu " << i + 1<<"\n";
		ds_DocGia_TreEm[i]->xuat();
	}
	for (short i = 0; i < ds_DocGia_NguoiLon.size(); i++)/*ds_DocGia_NguoiLon.size() trả về số lượng độc giả 
		trẻ em Hiện có trong mảng độc giả vecto*/
	{
		cout << "\n\n===============================";
		cout << "\nThong Tin DOC GIA NGUOI LON thu " << i + 1 << "\n";
		ds_DocGia_NguoiLon[i]->xuat();
	}

	/*for (short i = 0; i < ds_DocGia_TreEm.size(); i++)
	{
		delete ds_DocGia_TreEm[i];
	}
	for (short i = 0; i < ds_DocGia_NguoiLon.size(); i++)
	{
		delete ds_DocGia_NguoiLon[i];
	}*/
}

int thuVien::tinh_Tong_Tien_Lam_The() {
	int sumTreEm = 0, sumNguoiLon = 0;
	for (short i = 0; i < ds_DocGia_TreEm.size(); i++)
	{
		sumTreEm += ds_DocGia_TreEm[i]->tien_Lam_The();
	}

	for (short i = 0; i < ds_DocGia_NguoiLon.size(); i++)
	{
		sumNguoiLon += ds_DocGia_NguoiLon[i] -> tien_Lam_The();
	}

	return sumTreEm + sumNguoiLon;
}
int main() {
	thuVien* x = new thuVien;
	x->nhap();
	x->xuat();
	cout << "\nTong tien lam the: " << x->tinh_Tong_Tien_Lam_The()<<"\n";
	delete x;
	system("pause");
}

#endif