#if 0
//baitap1(Tự đặt bài tập chứ này nằm ở file lý thuyết 03.CacKieuDieuKhien.pdf)
#include<iostream>
using namespace std;
int main()
{
	int a(1);
	while (a <= 10)
	{
		int b(1);
		while (b <= a)
		{
			cout << b << " ";
			++b;
		}
		cout << "\n";
		++a;
	}
}
#endif
#if 0
//baitap2 (Tự đặt bài tập chứ này nằm ở file lý thuyết 03.CacKieuDieuKhien.pdf)
#include<iostream>
using namespace std;
int main()
{
	int n, i;
	cout << "Nhap Vao n: ";
	cin >> n;

	cout << "Day So Tu 1 Den n: ";
	i = 0;
	while (i <= n)
	{
		cout << " " << i++;
	}
	return 0;
}
#endif
#if 0
//baitap3 (Tự đặt bài tập chứ này nằm ở file lý thuyết 03.CacKieuDieuKhien.pdf)
//bài này có các lỗi cần phải sửa 
// a  = b < c lỗi 1
// a = c < b lỗi 2
// b = c < a lỗi 3
// a < b = c lỗi 4
// b < a = c lỗi 5
// c < a = b lỗi 6

// đây  là bài đã sửa
#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cout << "Nhap Vao Mot So a: ";
	cin >> a;
	cout << "Nhap Vao Mot So b: ";
	cin >> b;
	cout << "Nhap Vao Mot So c: ";
	cin >> c;

	if (a == b && b == c) {
		cout << "ca Ba SO Bang Nhau\n";
	}
	else if (a == b && a < c) {
		cout << "So Nho Nhat la a,b\n";
	}
	else if (a == c && a < b) {
		cout << "So Be Nhat La a,c\n";
	}
	else if (b == c && b < a) {
		cout << "So Be Nhat La b,c\n";
	}
	else if (a < b && a < c) {
		cout << "So Be Nhat La a\n";
	}
	else if (b < c && b < a) {
		cout << "So Be Nhat la b\n";
	}
	else {
		cout << "So Nho Nhat La c";
	}
}
#endif
#if 0
//baitap4 (Tự đặt bài tập chứ này nằm ở file lý thuyết 03.CacKieuDieuKhien.pdf)
#include<iostream>
using namespace std;
int main() {
	int a;
	cout << "Nhap a: ";
	cin >> a;

	switch (a)
	{
	case 0:
		cout << "Khong";
		break;

	case 1:
		cout << "Mot";
		break;
	case 2:
		cout << "Hai";

		break;

	case 3:
		cout << "ba";
		break;

	case 4:
		cout << "Bon";

		break;

	case 5:
		cout << "Nam";
		break;

	case 6:
		cout << "Sau";
		break;
	case 7:
		cout << "Bay";
		break;
	case 8:
		cout << "Tam";
		break;
	case 9:
		cout << "Chin";
		break;
	default:
		cout << "Day Khong phai 0 - 9,Nhap sai";
	}
	return 0;
}
#endif 
#if 0
//baitap4Sualai (yêu cầu của thầy khi nhập vào chữ or ký tự thì cout ra Day Khong phai 0 - 9,Nhap sai)
#include<iostream>
#include<ctype.h>

using namespace std;

int main() {
	char ch;
	cout << "Nhap a: ";
	cin >> ch;

	int a = ch - '0';
	switch (a) {
	case 0:
		cout << "khong";
		break;
	case 1:
		cout << "Mot";
		break;
	case 2:
		cout << "Hai";
		break;
	case 3:
		cout << "Ba";
		break;
	case 4:
		cout << "Bon";
		break;
	case 5:
		cout << "Nam";
		break;
	case 6:
		cout << "Sau";
		break;
	case 7:
		cout << "Bay";
		break;
	case 8:
		cout << "Tam";
		break;
	case 9:
		cout << "Chin";
		break;
	default:
		cout << "Day Khong Phai 0-9,Nhap Sai";
		return 0;
	}
	return 0;
}
#endif
#if 0
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	cout << "Day So Tu 0 Den n: ";
	for (int i = 0; i <= n; i++)
	{
		cout << " " << i;
	}
}
#endif
#if 0
#include<iostream>
using namespace std;
int main()
{
	int n, i;
	cin >> n;
	cout << "Day So Tu 0 Den n: ";
	i = 0;
	while (i <= n)
	{
		cout << " " << i++;
	}
}
#endif 
#if 0
#include<iostream>
using namespace std;
int main() {
	int a;
	char c;
	cout << "Nhap KY Tu Bat Ky, Nhan 0 De Dung Lai: ";
	cin >> c;
	while (c != '0')
	{
		a = c;
		cout << "Ky Tu Cua Nhap: " << c;
		cout << "\n Co Ma ASCLL La: " << a;
		cout << "\n\nNhap Ky Tu Bat KY,Nhap 0 De Dung lai: ";
		cin >> c;
	}
}
#endif
#if 0
//Khác vs while là nó xuất ra r mới xét đk nên khi ta nhập 0 vào nó ra mã ASCLL r mới dừng 
#include<iostream>
using namespace std;
int main() {
	int a;
	char c;
	do
	{
		cout << "\n\nNhap Ky Tu Bat KY,Nhap 0 De Dung lai: ";
		cin >> c;
		a = c;
		cout << "\nNhap Vao ky Tu : " << c;
		cout << "\n Co Ma ASCLL La: " << a;

	} while (c != '0');
}

#endif
#if 1
#include<iostream>
using namespace std;
int main() {
	int c;
	cin >> c;


	int a(1);
	while (a <= c)
	{
		int b(1);
		while (b <= a)
		{
			cout << b;
			++b;
		}
		cout << "\n";
		++a;
	}
	return 0;

}
#endif
