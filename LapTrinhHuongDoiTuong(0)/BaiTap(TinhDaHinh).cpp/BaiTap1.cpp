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
#if 0
#include<iostream>
#include<string>
#include<vector>
using namespace std;

//khai báo lớp Cha DocGia
class docGia
{
public:
	virtual void nhap();//Phương thức ảo - nhập thông tin độc giả 
	virtual void xuat();//Phương thức ảo - Xuất thông tin độc giả 

	/*Vì lúc này ta có 2 loại độc giả là trẻ em và người lớn mõi loại độc giả có 1 cách tính tiền riêng
	 vì vậy cái phương thức tính tiền bắt buộc chúng ta phải khai báo phương thức thuần ảo.Vì ở lớp cha
	 không có thông tin gì để tính tiền cụ thể là đề bài tính tiền độc giả  trẻ em lấy tháng hiệu lực * 
	 5000 còn người lớn lấy số tháng hiệu lực * 10000 vậy vậy nó không có thông tin(chung của 2 lớp con)
	 nên chỉ khai báo ra cho biết vì vậy ở đây ta khai báo PHƯƠNG THỨC THUẦN ẢO cọn việc ĐỊNH NGHĨA do
	 LỚP CON thực hiện*/
	/*bắc buộc phải khai báo cái phương thức tính tiền này thì các lớp con kế thừa mới có thể ghi đè và 
	nạp chồng và đc tức mới đa hình đc*/
	virtual int tien_Lam_The() = 0;//Khai báo phương thức thuần ảo - các lớp con kế thừa sẽ đi định nghĩa

	//GETTER - SETTER
	bool getter_KT() {//Trả về kiểu dữ kiệu
		return KT;
	}

	void setter_KT(bool kt) {//Cập nhật kiểu dữ liệu
		KT = kt;
	}

	docGia();
	~docGia();

protected:
	string ten;
	string ngayLapThe;
	int soThangCoHieulucCuaThe;
	/*Vì lúc này phần KT nó nằm ở tầm vực protected or private nên không thể truy xuất bên ngoài class 
	nên bắt buộc ta phải đi getter(trả về kiểu dữ liệu) và setter(Cập nhật kiểu dữ liệu)*/
	bool KT;//Kiểm tra phần xuất "true : trẻ em" và " false : người lớn " 
};

void docGia::nhap() {
	cout << "Ho Va Ten: \n";
	cin.ignore();
	getline(cin, ten);
	cout << "Ngay Lap The ( dd / mm / yyyy ): \n";
	cin.ignore();
	getline(cin, ngayLapThe);
	cout << "So Thang Co Hieu Luc Cua The: \n";
	cin >> soThangCoHieulucCuaThe;


}

void docGia::xuat() {

	cout << "Ho va Ten: " << ten;
	cout << "\nNgay Lap The: " << ngayLapThe;
	cout << "\nSo thang co hieu luc: " << soThangCoHieulucCuaThe << "\n";

}

docGia::docGia()
{
}

docGia::~docGia()
{
}

class docGiaTreEm :public docGia
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
	cout << "Ten Nguoi Dai Dien: \n";
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

class docGiaNguoiLon :public docGia
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
	cout << "Can Cuoc Cong Dan (CCCD): " << CCCD << "\n";
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
	//Trong kế thừa chúng ta có 2 loại độc giả khi đó ta phải khai báo 2 mảng vector để chứa 2 loại độc giả
	/*Còn trong ĐA HÌNH chúng ta có 100 độc giả ( 100 đối tượng ) đi chăng nữa thì cũng chỉ chứa trong 1 mảng
	vector phá vỡ quy tắc về mảng. Và mảng tĩnh hay mảng động gì cũng có thể làm đc điều đó.*/
	/*Lúc này ta chỉ cần khai báo 1 cái mảng LỚP CƠ SỞ (LỚP CHA) và ta có virtual thì ta sẽ đa hình dô đc lớp
	con và bắt buộc phải dùng con trỏ. Từ lớp cha DOCGIA này muốn gọi thằng con nào thì nó sẽ đa hình đến chính
	thằng con đó */
	vector<docGia*> ds_DocGia;/*Khai báo mảng 1 chiều chứa lớp cha - vì do có virtual cho nên nó sẽ đa hình sang
	được từng thằng con tương ứng*/
};
thuVien::thuVien()
{
}

thuVien::~thuVien()
{
}

void thuVien::nhap() {

	while (true) {
		system("cls");
		cout << "\n==================MENU======================\n";
		cout << "\nBan La DOC GIA TRE EM or NGUOI LON ? \n";
		cout << "\n0.Ket Thuc.\n";
		cout << "\n1.Nhap thong tin DOC GIA TRE EM: \n";
		cout << "\n2.Nhap thong tin DOC GIA NGUOI LON: \n";
		cout << "\n==================END======================\n";

		docGia* x;//Khai báo con trỏ lớp cha
		short luaChon;
		cout << "\nHAY NHAP LUA CHON TUONG UNG: ";
		cin >> luaChon;

		if (luaChon == 1) {
			x = new docGiaTreEm();//Dùng thằng cha x new ra đối tượng con - là docGiaTreEm 
			cout << "\nNhap thong tin DOC GIA TRE EM: \n";
			x->nhap();
			/*Cơ chế push_back rất hay. Push_back tức là thêm phần tử vào
			cuối vector và độ dài vector tự động giản ra*/
			//Nhờ có đa hình mà ta có thể làm đc điều này
			//Cập nhật lại dữ kiệu nên phải dùng setter
			x->setter_KT(true);//Đánh dấu độc giả trẻ em
			ds_DocGia.push_back(x);//Thêm 1 đối tượng con vào mảng DocGia

		}
		else if (luaChon == 2) {
			x = new docGiaNguoiLon();//Dùng thằng cha x new ra đối tượng con - là docGiaNguoiLon
			cout << "\nNhap thong tin DOC GIA NGUOI LON: \n";
			x->nhap();
			
			//Cập nhật lại dữ kiệu nên phải dùng setter
			x->setter_KT(false);//Đánh dấu độc giả Người lớn


			//Nhờ có đa hình mà ta có thể làm đc điều này
			ds_DocGia.push_back(x);//Thêm 1 đối tượng con vào mảng DocGia
		}
		else if (luaChon == 0) {
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
	/*Ở kế thừa có 2 loại Độc giả thì ta phải sử dụng 2 vòng lặp for để xuất ra.
	Đối với ĐA HÌNH chúng ta chỉ cần duy nhất 1 mảng là làm đc điều đó*/
	cout << "\n\nDanh Sach DOC GIA: \n";
	for (short i = 0; i < ds_DocGia.size(); i++)
	{
		if (ds_DocGia[i]->getter_KT() == true) {
			cout << "\n\n===============================";
			cout << "\nThong Tin DOC GIA TRE EM thu " << i + 1 << "\n";
			/*Ở trên nhập thông tin nếu ta nhập số 1 tức lớp cha DocGia sẽ có phương thức đa
			Hình là nhap() và xuat(), DocGiaTreEm nó có phương thức nhap() nhớ là phải trùng tên
			với Phương thức virtual của cha thì cha mới đi vào lớp con và nạp chồng dữ liệu
			trùng tên tương ứng mà lớp con đã cài đặt. Tức lớp cha đi và lớp con có phương thức nhap()
			và xuat() tương ứng ở đây cụ thể là nhap() và xuat() của lớp DocGiaTreEm chứ không cần dùng
			hai vòng lặp for như bài kế thừa.*/
			ds_DocGia[i]->xuat();//Xuất ra thông tin độc giả thứ i 
		}

		else
		{
			cout << "\n\n===============================";
			cout << "\nThong Tin DOC GIA NGUOI LON thu " << i + 1 << "\n";
			/*Ở trên nhập thông tin nếu ta nhập số 1 tức lớp cha DocGia sẽ có phương thức đa
			Hình là nhap() và xuat(), DocGiaTreEm nó có phương thức nhap() nhớ là phải trùng tên
			với Phương thức virtual của cha thì cha mới đi vào lớp con và nạp chồng dữ liệu
			trùng tên tương ứng mà lớp con đã cài đặt. Tức lớp cha đi và lớp con có phương thức nhap()
			và xuat() tương ứng ở đây cụ thể là nhap() và xuat() của lớp DocGiaTreEm chứ không cần dùng
			hai vòng lặp for như bài kế thừa.*/
			ds_DocGia[i]->xuat();//Xuất ra thông tin độc giả thứ i 
		}
		
	}
}

int thuVien::tinh_Tong_Tien_Lam_The() {
	int sum = 0;
	//Duyệt danh sách độc giả	
	for (short i = 0; i < ds_DocGia.size(); i++)
	{
		//Tương ứng vơi loại đọc giả nào thì nó sẽ tính tiền của loại đọc giả đó
		sum += ds_DocGia[i]->tien_Lam_The();
	}

	
	return sum;
}
int main() {
	thuVien* x = new thuVien;
	x->nhap();
	x->xuat();
	cout << "\n\n\t\tTong tien lam the: " << x->tinh_Tong_Tien_Lam_The() << "\n";
	delete x;
	system("pause");
}

#endif



