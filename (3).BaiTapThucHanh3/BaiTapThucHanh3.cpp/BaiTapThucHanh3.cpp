//Bài Tập 1
#if 0
/ Bài tập 1 thầy sửa
//dùng foundf để làm tròn
//chia để làm tròn 
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int n;
	double x, lamTron;
	cout << "Lam tron So Thuc Voi n Chu So Thap Phan\n";
	cout << "Nhap So Thuc: ";
	cin >> x;
	cout << "Ban Muon Lam Tron May Chu So ?";
	cin >> n;

	lamTron = roundf(pow(10, n) * x) / pow(10, n);
	//Cố định 9 chữ số thập phân, mặc định là 6 ký số gồm cả phần nguyên và phần thập phân
	cout<<fixed<<setprecision(9) << "So Thuc Vua Nhap: " <<" " << x << "\n";
	cout << "Sau Khi Duoc Lam Tron" <<" "<< n <<" "<< "Chu So" <<" " << lamTron << "\n"; \
		cout << fixed << setprecision(n) << "Xuat So Thuc Voi" << " " << n << " " << "Chu So Thap Phan: "<<x;
}
#endif

//Bài Tập 2
#if 0
#include<iostream>
using namespace std;
int main()
{
	int max, min,thoat(0);
	double a, b, c, d;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
	cout << "Nhap d: ";
	cin >> d;

	do {

		max = (a > b && a > c && a > d) ? a : (b > a && b > c && b > d) ? b : (c > a && c > b && c > d) ? c : d;
		min = (a < b && a < c && a < d) ? a : (b < a && b < c && b < d) ? b : (c < a && c < b && c < d) ? c : d;
	
		if (max == min) {
			cout << "Khong Co So Lon Nhat Va So Be Nhat. Vi 4 So Da Bang Nhau" << " " << "=" << " " << max << "\n";
			break;
		}
		else
		{
			cout << "So Lon Nhat la: " << max << "\n";
			cout << "So Be Nhat la: " << min << "\n";
			cin >> thoat;
		}
	} while (thoat != 1);
}

#endif

//Bài 2 Thầy Sửa
#if 0
#include<iostream>
using namespace std;
int main()
{
	int max, min, thoat(0);
	int a, b, c, d;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
	cout << "Nhap d: ";
	cin >> d;

	do {
		max = a;
		if (max < b) {
			max = b;
		}
		if (max < c) {
			max = c;
		}
		if (max < d) {
			max = d;
		}
		min = a;
		if (min > b) {
			min = b;
		}
		if (min > c) {
			min = c;
		}
		if (min > d) {
			min = d;
		}
		if (max == min) {
			cout << "Khong Co So Lon Nhat Va So Be Nhat. Vi 4 So Da Bang Nhau" << " " << "=" << " " << max << "\n";
			break;
		}
		else
		{
			cout << "So Lon Nhat la: " << max << "\n";
			cout << "So Be Nhat la: " << min << "\n";
			cin >> thoat;
		}
	} while (thoat != 1);
}
#endif

	//Bài Tập 3 
#if 0
#include <iostream>
#include <cmath>

	using namespace std;

	int main() {
		double a, b, c;
		double x1, x2, x3, x4;

		cout << "Nhap he so a: ";
		cin >> a;

		cout << "Nhap he so b: ";
		cin >> b;

		cout << "Nhap he so c: ";
		cin >> c;

		if (a == 0) {
			if (b == 0) {
				if (c == 0) {
					cout << "Phuong trinh co vo so nghiem.\n";
				}
				else {
					cout << "Phuong trinh vo nghiem.\n";
				}
			}
			else {
				x1 = -c / b;
				if (x1 >= 0) {
					x2 = sqrt(x1);
					x3 = -sqrt(x1);
					cout << "Phuong trinh co 2 nghiem la: " << endl;
					cout << "x1 = " << x2 << endl;
					cout << "x2 = " << x3 << endl;
				}
				else {
					cout << "Phuong trinh vo nghiem!" << endl;
				}
			}
		}
		else {
			double delta = pow(b, 2) - 4 * a * c;
			if (delta > 0) {
				x1 = (-b + sqrt(delta)) / (2 * a);
				x2 = (-b - sqrt(delta)) / (2 * a);
				x3 = sqrt(x1);
				x4 = -sqrt(x1);
				cout << "Phuong trinh co 4 nghiem la: " << endl;
				cout << "x1 = " << x3 << endl;
				cout << "x2 = " << x4 << endl;
				cout << "x3 = " << x2 << endl;
				cout << "x4 = " << x1 << endl;
			}
			else if (delta == 0) {
				x1 = -b / (2 * a);
				if (x1 >= 0) {
					x3 = sqrt(x1);
					x4 = -sqrt(x1);
					cout << "Phuong trinh co 2 nghiem kep la: " << endl;
					cout << "x1 = " << x3 << endl;
					cout << "x2 = " << x4 << endl;
				}
				else {
					cout << "Phuong trinh vo nghiem!" << endl;
				}
			}
			else {
				cout << "Phuong trinh vo nghiem!" << endl;
			}
		}

		return 0;
	}
#endif

//Bài Tập 4
#if 0
#include<iostream>
using namespace std;
int main() {
	double kWh,TienThu,VAT,CSM,CSC;
	cout << "Nhap CSM: ";
	cin >> CSM;
	cout << "Nhap CSC: ";
	cin >> CSC;
	
	VAT = 0.1;
	double TienDien;

	if (CSM < CSC) {
		cout << "Nhap Sai, CSM Phai Lon Hon Hoac Bang CSC";
	}
	else {
		TienThu = CSM - CSC;
		if (kWh <= 50) {
			TienDien = TienThu * 1678;
			cout << "So Tien Can Phai Tra la: " << TienDien << "\n";
		}
		else if (kWh <= 100) {
			TienDien = 50 * 1678 + ((TienThu - 50) * 1734);
			cout << "So Tien Can Phai Tra la: " << TienDien << "\n";
		}
		else if (kWh <= 200) {
			TienDien = 50 * 1678 + 50 * 1734 + (TienThu - 100) * 2014;
			cout << "So Tien Can Phai Tra la: " << TienDien << "\n";
		}
		else if (kWh <= 300) {
			TienDien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (TienThu - 200) * 2536;
			cout << "So Tien Can Phai Tra la: " << TienDien << "\n";
		}
		else if (kWh <= 400)
		{
			TienDien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (TienThu - 300) * 2834;
			cout << "So Tien Can Phai Tra la: " << TienDien << "\n";
		}
		else {
			TienDien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834+ (TienThu - 400) * 2927;
			cout << "\nTien Thu " << TienThu <<"kWh.Tien Phai Tra: "<<TienDien * 1.1<<" VNĐ";
		}
	}
}
#endif

//Bài Tập 5
//Thầy sửa tối ưu nhất
//Số nguyên tố là số cỉ chia hết cho 1 và chính nó
/*cách deburg trỏ con chuột tại chổ muốn deburg rồi 
nhấn f9(đặt điểm cần deburg ) f5(chạy từ đầu đến chổ
đánh dấu f9) f11(chạy và kiểm tra từng dòng lệnh) */
/*cách sửa tên biến nhấn chuột phải vào tên biến
-> rename -> nếu bên dưới góc trái màn hình đã hiện
entire solution là đổi tất cả chổ trong file là đc ->
apply*/
#if 0
#include<iostream>
using namespace std;
int main(){
	short n, demUocSo;
	cout << "Chuong Trinh Kiem Tra So Nguyen To:\n ";
	cout << "Nhap n: ";
	cin >> n;
	if (n < 2)
		cout << "Day KHong Phai La So Nguyen To \n";
	else if (n == 2)
		cout << n << "La So Nguyen To: \n";
	else if (n % 2 == 0)
		cout << "Khong Phai La So Nguyen To\n";
	else {
		short demUocSo = 0;
		float canBacHai = sqrt(n);
		for (short i = 3; i <= canBacHai; i = i+2)/*Vì Số chỉ nguyên tố chỉ có 1 số chẳn duy nhất
			là 2 còn lại tất cả các số chẳn còn lại không phải la số ngto nên ta nhảy vòng lập
			và xét từ 3 nhảy vòng lặp + 2 lên là 5 7 9......*/ 
			if (n % i == 0){
				demUocSo++;
		break;//chỉ cần đếm đc 1 Đếm ước số là thoát ra khỏi vòng for
	}
		if (demUocSo == 0)//nên đếm ước số là 0
			cout << n<<" "<< "La So Nguyen To \n";
		else
			cout << n<<" "<< "Khong Phai La So Nguyen To\n";

	}

}
#endif 

//Bài 6
//Số chính phương là số khi căn bậc 2 lên ra số nguyên 
#if 0
//bài 6 (1)
#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float canBacHai = sqrt(n);
	//khởi tạo kiểu đúng sai cho bay tức 1 là đúng và 0 là sai
	short bay = 0;//bay là sập bảy
	for (int i = 1; i <= canBacHai; i++)
		if (i * i == n) {
			bay = 1;//thủ thuật cài bảy chuột
			break;
}
	if (bay)//==1 là sập bảy

		cout << n <<" " << "La So Chinh Phuong";
	else
		cout << n <<" " << "Khong Phai La So Chinh Phuong";
}
#endif
//về nhà cải tiến bài 6

//bài 7
#if 0
#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	while (n > 0)
	{
		cout << n % 10;
		n /= 10;
	}
}
#endif

//Sửa bài 7
//Khi Nhập số âm
#if 0
#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "Nhap So Nguyen, in ra So Tu Nguoc: \n";
	cout << "Moi Nhap So Nguyen";
	cin >> n;

	int tam = n;
	if (n < 0)
		tam = -n;

	cout << "So Vua Nhap" << n;
	cout << "\n So Tho Thu Tu Nguoc Lại: ";
	if (n < 0)
		cout << "-";
	while (tam != 0) {
		cout << tam % 10;
		tam /= 10;
	}
}
#endif 

//Bài Tập 8
#if 0
#include<iostream>
using namespace std;
int main() {
	int n,a(0);
	cout << "Nhap n: ";
	cin >> n;
	int m = n;
	while (n > 0)
	{
		a = a * 10 + (n % 10);
		n /= 10;
		}
cout<< "So vua bi dao nguoc: " << a<<"\n";
cout << "Ket Qua La: " << (m + a);
}
#endif

//Sửa bài 8 (Chưa tối ưu)
//dở là sd 2 dòng while
//dở là do số mủ máy chạy chậm 
#if 0
#include<iostream>
using namespace std;
int main() {
	int n, soDaoNguoc,tam;
	int soLuongKySo;
	cout << "Nhap n: ";
	cin >> n;

	//Tim So Luong Ky so cua n
	soLuongKySo = 0;
	tam = n;
	while (tam != 0)
	{
		soLuongKySo++;
		tam /= 10;
	}

	//Tim So Nguoc Lai 98765 -> 56789
	soDaoNguoc = 0;
	tam = n;
	while (tam != 0) {
		soLuongKySo--;
//dở là do số mủ máy chạy chậm 
		soDaoNguoc += tam % 10 * pow(10, soLuongKySo);
		tam /= 10;
	}
	//Phep Cong
	cout << "Ket Qua:  " << n << "+" << soDaoNguoc << "=" << n + soDaoNguoc;
}
#endif

//Sửa bài 8 (Cải Tiến)
#if 0
#include<iostream>
using namespace std;
int main() {
	int n, soDaoNguoc, tam;
	int soLuongKySo;
	cout << "Nhap n: ";
	cin >> n;

	//Tim So Luong Ky so cua n
	soDaoNguoc = 0;
	tam = n;

	while (tam != 0)//So am tam < 0 Van Thuc Hien dc
	{
		soDaoNguoc = soDaoNguoc * 10 + tam % 10;
		tam /= 10;
	}
	//Phep Cong
	if (n > 0)
		cout << "Ket Qua:  " << n << "+" << soDaoNguoc << "=" << n + soDaoNguoc;
	else
		cout << "Ket Qua: " << n << "+(" << soDaoNguoc << ")=" << n + soDaoNguoc;
}
#endif

//Bài Tập 9
#if 0
#include<iostream>
using namespace std;
int main()
{
	int n; 
	cout << "Nhap n: ";
	cin >> n;

	int temp = n;
	int maxNumber = n % 10;

	while (temp !=0){
		int number = temp % 10;
		if (number > maxNumber)
		{
			maxNumber = number;
		}
		temp /= 10;
	}
	cout << "Ky So Lon Nhat Co Mat Trong n La: " << maxNumber;

}
#endif
//Sửa Bài 9
#if 0
#include<iostream>
using namespace std;
int n, tam;
int max;

cout << "Nhap so nguyen, tim ky so lon nhat";

#endif

//Bài Tập 10
#if 0
#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "Nhap vao chieu cao n: ";
	cin >> n;
	for (short i = 1; i <= n; i++) {
		for (short j = 0; j < i; j++) {
			cout << "*";
		}
		cout << "\n";
	}
}
#endif 

//Bài Tập 11
#if 0
#include<iostream>
using namespace std;
int main(){

	int n;
	cout << "Nhap n: ";
cin >> n;

for (int i = 0; i < n; i++)
{
	if (i == 0 || i == n - 1) // In hàng đầu và hàng cuối
	{
		for (int j = 0; j < n; j++)
		{
			cout << "*   ";
		}
	}
	else // In các hàng ở giữa
	{
		cout << "*   "; // In dấu sao ở cột đầu tiên
		for (int j = 1; j < n - 1; j++)
		{
			cout << "    "; // In khoảng trắng giữa các dấu sao
		}
		cout << "*   "; // In dấu sao ở cột cuối cùng
	}
	#cout << "\n"; // Xuống dòng sau khi in xong 1 hàng
}
}
#endif

//Sửa bài 11
#if 0
#include<iostream>
using namespace std;
int main() {

	short n;
	cout << "Nhpa vao hinh vuong\n";
	cout << "Nhap vao do dai canh n: ";
	cin >> n;
	for (short i = 1; i <= n; i++) {
		for (short j = 1; j < n; j++)
			if ( i == 1 || i == n || j == 1 || j = n)
				cout << "* ";
			else
				cout << " ";
		cout << "\n";

		}
	}
#endif

//Bài Tập 12
#if 0
#include<iostream>
using namespace std;
int main() {

	short n, i, j;
	int gt, S;
	cout << "Nhap n: ";
	cin >> n;

	gt = 1;//Giai thừa
	S = 0;
	for (short i = 1; i <= n; i++) {
		gt = 1;
		for (j = 1; j <= i; j++)
			gt *= j;
		S += gt;
	}
	cout << "Tong S1 = 1! + 2! + ..... + n! =" << S;
}
#endif
//Cải Tiến Bài 12
#if 1
#include<iostream>
using namespace std;
int main() {

	short n, i;
	int gt, S;
	cout << "Nhap n: ";
	cin >> n;

	gt = 1;//Giai thừa
	S = 0;
	for (short i = 1; i <= n; i++) {
		gt *= i;
		S += gt;
	}
	cout << "Tong S1 = 1! + 2! + ..... + n! = " << S;
}
#endif
//Bài Tập 13
#if 0 
#include<iostream>
using namespace std;
int main() {
	int x, y;
} 
#endif 
//Bài Tập 14
#if 0
#include<iostream>
using namespace std;
int mian() {
	short x, y;

	for (x = 1; x < 36; x++)
		for (y = 1; y < 36; y++)
			if (x + y = 36 && x + y == 100)
}

#endif

#if 0
#include<iostream>
using namespace std;
int main() {
	short x, y, z;

	for (x = 1; x < 100; x++)
		for (y = 1; y < 100; y++)
			for (z = 1; z < 100; z++)
				if (x + y + z == 100 && 5 * x + 3 * y + z / 3 == 100)
					cout << "\nSo trau dung: " << x << " " << " ,So trau nam: " << y << " ,So trau gia: " << z;
}
#endif 
