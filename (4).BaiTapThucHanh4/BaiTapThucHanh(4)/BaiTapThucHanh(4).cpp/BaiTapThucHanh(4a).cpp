//Bài tập 1
#if 0
#include<iostream>
using namespace std;
int main() {
	int a[5],n;
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	//Nhap day
	for (short i = 0; i < n; i++) {
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	//Xuat day 
	for (short i = 0; i < n; i++)
		cout << a[i] << " ";
}
#endif

//Bài tập 2
#if 0
#include<iostream>
using namespace std;
int main() {
	int n, a[5];
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	for (short i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];

		//bắt Người dùng nhập vao số dương
		while (a[i] <= 0) {
			cout << "Can Nhap Vao So Duong, Nhap Lai: ";
			cout << "a[" << i << "] = ";
			cin >> a[i];

		}
	}
	//Xuat day
	cout << "Day vua Nhap: ";
	for (short i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}
#endif

//Bài Tập 3
#if 0
#include<iostream>
using namespace std;
int main() {
	short a[20];

	//Khởi Tạo Giá Trị
	for (short i = 0; i < 20; i++) {
		a[i] = 20 - i;
	}
		//Xuat day
		cout << "day vua Nhap: ";
		for (short i = 0; i < 20; i++) {
			cout << a[i] << " ";
		}
	}

#endif 

//Bài Tập 4
#if 0
#include<iostream>
using namespace std;
int main() {
	int n, a[20];
	cout << "Nhap vao so phan tu n: ";
	cin >> n;


	for (short i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];

		int min = i;
		while (i >= a[i]) {
			cout << "Nhap sai moi ban nhap lai\n";
			cout << "a[" << i << "] = ";
			cin >> a[i];
		}
	}

	cout << "Day tang dan vua nhap: ";
	for (short i = 0; i < n; i++)
		cout << a[i] << " ";
}
#endif

//Bài Tập 5 thêm 
//Xuất phần tử dương và tìm số dương nhỏ nhất.
#if 0
#include<iostream>
using namespace std;
int main() {
	int n, a[20];
	cout << "Nhap vao so phan tu n: ";
	cin >> n;


	for (short i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	cout << "Day cac so duong la: \n";
	for (short i = 0; i < n; i++) {
		if (a[i] > 0)
			cout << a[i]<<" ";
	}

	short bay = 0;
	int minPtDuong;
	for (short i = 0; i < n; i++) {
		if (a[i] > 0)
			minPtDuong = a[i];
			bay = 1;
		break;
	}



	if (bay) {
		for (short i = 0; i < n; i++)
			if (a[i]> 0 && a[i] < minPtDuong)
				minPtDuong = a[i];
				cout << "\nPhan tu Duong nho nhat la " << minPtDuong;
	}
	else
		cout << "\nDay tren khong co phan tu am !";
}
#endif

//Bài tâp 5
#if 0
#include<iostream>
using namespace std;
int main()
{
	int n, a[20];
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	for (short i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	//Xuat phan tu am
	cout << "Xuat phan tu am: ";
	for (short i = 0; i < n; i++) {
		if (a[i] < 0) {
			cout << a[i] << " ";
		}
	}

	//Phan Tu am lon nhat
	short bay(0);
	double maxPtAm;
	for (short i = 0; i < n; i++) 
		if (a[i] < 0){
			maxPtAm = a[i];
		bay = 1;
		break;
	}

	if (bay) {
		for (short i = 0; i < n; i++)
			if (a[i] < 0 && a[i] > maxPtAm)
				maxPtAm = a[i];
		cout << "\nPhan tu am lon nhat la: " << maxPtAm;
	}
	else
	
		cout << "\nkhong co phan tu am trong day tren";
}
#endif 

//Bài Tập 6
#if 0
#include<iostream>
using namespace std;
int main() {
	int n, a[20];
	cout << "Nhap vao so phan tu n: ";
	cin >> n;


	for (short i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	cout << "Day cac so le la: ";
	for (short i = 0; i < n; i++) {
		if (a[i] % 2 == 1)
			cout << a[i] << " ";
	}
}
#endif 

//Bài Tập 7 
#if 0
#include<iostream>
using namespace std;
int main()
{
	int n, a[20];
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	for (short i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}


	cout << "Xuat phan tu chan: ";
	for (short i = 0; i < n; i++) {
		if (a[i] % 2 == 0) 
			cout << a[i] << " ";
		}

		short bay = 0;
		for (short i = 0; i < n; i++){
			if (a[i] % 2 == 0) 
			bay = 1;
			break;
		}

		cout << "\nPhan tu chan nho hon 20 la: ";
		if (bay) {
			for (short i = 0; i < n; i++) {
				if (a[i] % 2 == 0 && a[i] < 20)
					cout << a[i] << " ";
			}
		}
	}
#endif 

//Bài tập 8
#if 0
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n, a[20];
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	for (short i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	short bay = 0;
	cout << "Cac phan tu nguyen to la: ";
	for (short i = 0; i < n; i++) {
		bay = 1;
		if (a[i] <= 1) {
			bay = 0;
		}
		for (short j = 2; j <= sqrt(a[i]); j++)
			if (a[i] % j == 0) {
				bay = 0;
				break;
			}
		if (bay) 
				cout << a[i] << " ";
		}
}
		

#endif

//Bài Tập 9
#if 0
#include<iostream>
using namespace std;
int main()
{
	int n, a[20];
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	for (short i = 0; i < n; i++){
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	cout << "Cac phan tu la so chinh phuong trong day nam o vi tri le la : ";
	for (short i = 1; i < n; i+=2) {
			int sqrt_a = sqrt(a[i]);
			if (sqrt_a * sqrt_a == a[i]) //kiểm tra xem căn bậc hai của a[i] co là số nguyên dương hay không//
				cout << a[i] << " ";
			}
}
#endif

//Bài Tập 10
#if 0
#include<iostream>
using namespace std;
int main()
{
	int n, a[20];
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	for (short i = 0; i < n; i++) {
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
	int soLuongPhanTuAm = 0, soLuongPhanTuDuong = 0;
	for (short i = 0; i < n; i++) {
		if (a[i] < 0) {
			soLuongPhanTuAm++;
		}
		else
			soLuongPhanTuDuong++;
	}
		cout << "Day tren co " << soLuongPhanTuAm << " phan tu am" << " va " << soLuongPhanTuDuong << " phan tu duong";
}
#endif

//Bài Tập 11
#if 0
#include<iostream>
using namespace std;
int main()
{
	int n, a[20];
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	for (short i = 0; i < n; i++) {
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	int x,soLanXuatHienCuaX = 0;
	cout << "Nhap x : ";
	cin >> x;
	for (short i = 0; i < n; i++) {
		if (a[i] == x) {
			soLanXuatHienCuaX++;
		}
	}
	cout << "x xuat hien trong day a " << soLanXuatHienCuaX << " lan";
}
#endif

///Bài tập 12 
#if 0
#include<iostream>
using namespace std;
int main()
{
	int n, a[20];
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	for (short i = 0; i < n; i++) {
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	int x, soPhanTunhohonx = 0;
	cout << "Nhap x : ";
	cin >> x;
	for (short i = 0; i < n; i++) {
		if (a[i] < x) {
			soPhanTunhohonx++;
		}
	}
	cout << "So phan tu nho hon x trong day a la " << soPhanTunhohonx << " phan tu";
}
#endif 

//Bài Tập 13
#if 0
#include<iostream>
#include<cmath>
using  namespace std;
int main() {
	int n, a[20];
	cout << "Nhap Vao so Phan Tu cua n: ";
	cin >> n;

	//Nhập dãy 
	for (short i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	//Dem các số trong  dãy có phải là số nguyên tố không
	short bay, soLuongPhanTuNguyenTo = 0;
	for (short i = 0; i < n; i++) {
		bay = 1;//a[i] là số nguyên tố
		if (a[i] <= 1) {
			bay = 0;//bé hơn 1 ko là số nguyên tố
		}

		//Xét xem có phải là số nguyên tố không
		for (short j = 2; j <= sqrt(a[i]); j++)
			if (a[i] % j == 0)
			{
				bay = 0;
				break;
			}
		if (bay)
			soLuongPhanTuNguyenTo++;
	}

	//Xuat day
	cout << "Day vua nhap: ";
	for (short i = 0; i < n; i++) 
		cout << a[i] << " ";
	cout << "\nday tren co " << soLuongPhanTuNguyenTo << " " << "Phan tu nguyen to";
}
#endif

//Bài tập 14
#if 0
#include<iostream>
using namespace std;
int main()
{
	int n, a[20];
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	for (short i = 0; i < n; i++) {
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	int soChinhPhuong = 0;
	for (short i = 0; i < n; i++){
		short sqrt_a = sqrt(a[i]);
		if (sqrt_a * sqrt_a == a[i])
			soChinhPhuong++;
		}
	cout << "Day a co " << soChinhPhuong << " phan tu la so chinh phuong";
	}

#endif

//Bài tập 15
#if 0
#include<iostream>
using namespace std;
int main()
{
	int n, a[20];
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	for (short i = 0; i < n; i++) {
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	/*Bội của 3 và 5 là số phải vừa chia hết cho 3 và chia hết cho 5
	vậy ta lấy bội chung nhỏ nhất của hai số 3 và 5 chính là tích của 
	nó nếu 1 số chia hết cho bội chung nhỏ nhất thì phần tử đó là bội 
	của 3 và 5*/
	//Xet xem cac phan tu co phai la boi cua 3 va 5 khong
	cout << "Cac phan tu la boi cua 3 va 5 la: ";
	for (short i = 0; i < n; i++) {
		if (a[i] % 3 * 5 == 0)
			cout << a[i] << " ";
	}
}
#endif


//Bài Tập 16
#if 0
#include<iostream>
using namespace std;
int main() {
	int n, m, a[100], b[100];



	cout << "Nhap vao phan tu  n : ";
	cin >> n;
	cout << "Day la Day a\n";
	//Nhập dãy a có n Phần tử
	for (short i = 0; i < n; i++) {
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	cout << "Nhap vao phan tu  m : ";
	cin >> m;
	cout << "Day la Day b\n";
	//Nhập dãy b có m phần tử
	for (short i = 0; i < m; i++){
	cout << "b[" << i << "] = ";
	cin >> b[i];
}

	//Xuất phần tử có trong dãy a mà không có trong dãy b
	cout << "Phan tu co trong a mà khong co trong b\n";
	short bay1, bay2;
	for (short i = 0; i < n; i++) {
		bay1 = 1;// chua xuat hien a[i] truoc do
		for (short j = 0; j < m; j++)
			if (a[i] == b[j]) {
				bay1 = 0;
				break;
			}	

			if (bay1) {
				bay2 = 1;//a[i] khong xuat hien trong b
				for (short j = 0; j < m; j++)/*Xet a[i] có trong a[j] hay là không, vì yêu cầu là
					Nếu phần tử x xuất hiện trong a nhiều lần và có mặt trong b, thì chỉ in ra x một lần duy nhất.*/
					if (a[i] == b[j]) {
						bay2 = 0;
						break;
					}
				if (bay2)
					cout << a[i]  << " ";

			}
	}
}
#endif 

//Bài Tập 17
#if 0
#include<iostream>
using namespace std;
int main() {
	int n, m, a[100], b[100];



	cout << "Nhap vao phan tu n cua day a : ";
	cin >> n;
	cout << "Day la day a: \n";
	for (short i = 0; i < n; i++) {
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	cout << "Nhap vao phan tu m cua day b : ";
	cin >> m;
	cout << "Day la day b: \n";
	for (short j = 0; j < m; j++) {
		cout << "b[" << j << "] = ";
		cin >> b[j];
	}
	cout << "Phan tu co trong ca day a va b la: ";
	short bay1, bay2;
	for (short i = 0; i < n; i++) {
		bay1 = 0;//xet a, giả định a khong co trong b
		for (short j = 0; j < m; j++)
			if (a[i] == b[j]) {
				bay1 = 1;//xet b, neu a = b thi danh dau la da tim thay 2 so bang nhau va thoat ra và tiep tuc xet a 
				break;
			}

		if (bay1) { /*sau mõi lần lặp thì biến bay sẽ đc làm mới tức là = 0, nếu xét thấy a = b thì biến bay sẽ bật lên
			là 1 và xuất ra số đó. if(bay) tức nếu bay khác không. Điều này là để đảm bảo rằng mỗi lần tìm kiếm phần
			tử chung giữa hai mảng "a" và "b" sẽ được thực hiện độc lập với nhau, và biến "bay" sẽ không lưu trữ giá
			trị của lần tìm kiếm trước đó */
			bay2 = 0;
			for (short k = 0; k < i; k++)
				if (a[k] == a[i]) {
					bay2 = 1;
					break;
				}
			if (!bay2)
				cout << a[i] << " ";
		}

	}
}
#endif 

//Bài Tập 18
#if 0
#include<iostream>
using namespace std;
int main() {
	int n, a[20];
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	for (short i = 0; i < n; i++) {
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	int ptMax = a[0];
	int	viTriLonNhat = 0;
	for (short i = 0; i < n; i++) {
		if (a[i] > ptMax) {
			ptMax = a[i];
			viTriLonNhat = i;
		}
	}
	cout << "Vi tri cua phan tu lon nhat " << viTriLonNhat << " co phan tu lon nhat trong day a la " << ptMax;
}
#endif

//Bài Tập 19
#if 0
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n, a[20];
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	for (short i = 0; i < n; i++) {
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}



	short bay = 0,soNguyenTo = 0;
	int  viTriNguyenTo[20];
	float canBacHai;
	for (short i = 0; i < n; i++) {
		bay = 1;
		if (a[i] <= 1) {
			bay = 0;
		}
		canBacHai = sqrt(a[i]);
		for (short j = 2; j <= canBacHai; j++) {
			if (a[i] % j == 0) {
				bay = 0;
				break;
			}
		}
			if (bay) {
				viTriNguyenTo[soNguyenTo] = i;
				soNguyenTo++;
			}
		}
		cout << "Co " << soNguyenTo << " so nguyen to trong day a, o cac vi tri: ";
		for (short i = 0; i < soNguyenTo; i++) {
			cout << viTriNguyenTo[i] << " ";
		}
	}

#endif
 
//Bài Tập 20
#if 0
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n, a[20];
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	for (short i = 0; i < n; i++) {
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
	


	short bay(0), soNguyenTo(0);
	int  viTriNguyenTo[20];
	float canBacHai;
	for (short i = 0; i < n; i++) {
		bay = 1;
		if (a[i] <= 1) {
			bay = 0;
		}
		canBacHai = sqrt(a[i]);
		for (short j = 2; j <= canBacHai; j++) {
			if (a[i] % j == 0) {
				bay = 0;
				break;
			}
		}
		if (bay ) {
			if (a[i] > 23) {
				viTriNguyenTo[soNguyenTo] = i;
				soNguyenTo++;
			}
		}
	}
	
	cout << "Co " << soNguyenTo << " so nguyen to trong day a lon hon 23, o cac vi tri: ";
	for (short i = 0; i < soNguyenTo; i++) {
			cout << viTriNguyenTo[i] << " ";
		}

	}



#endif 

//Bài Tập 21
#if 0
#include<iostream>
using namespace std;
int main() {
	int n, a[20];
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	for (short i = 0; i < n; i++) {
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	short viTriPhanTuAm = 0;
	for (short i = 0; i < n; i++) {
		if (a[i] < 0) {
			viTriPhanTuAm = i;
			break;
		}
	}
		if (viTriPhanTuAm != 1) {
			cout << "Phan tu am dau tien nam o vi tri " << viTriPhanTuAm;
		}
}
#endif

//Bài Tập 22
#if 0
#include<iostream>
using namespace std;
int main() {
	int n, a[20];
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	for (short i = 0; i < n; i++) {
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	short ptAmMax = a[0], viTriAmMax(0);
	cout << "Cac phan tu am trong day la: ";
	for (short i = 0; i < n; i++) {
		if (a[i] < 0) {
			cout << a[i] << " ";
			if (ptAmMax < a[i]) {
				ptAmMax = a[i];
				viTriAmMax = i;
			}
		}
	}
	if (viTriAmMax != 1) {
		cout << "\nPhan tu am lon nhat trong day a nam o vi tri " << viTriAmMax;
	}
}

#endif 

//Bài Tập 23
#if 0
#include<iostream>
using namespace std;
int main() {
	int n, a[20];
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	for (short i = 0; i < n; i++) {
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	short ptDuongMin = a[0], viTriDuongMin(0);
	cout << "Cac phan tu Duong trong day la: ";
	for (short i = 0; i < n; i++) {
		if (a[i] > 0) {
			cout << a[i] << " ";
			if (ptDuongMin > a[i]) {
				ptDuongMin = a[i];
				viTriDuongMin = i;
			}
		}
	}
	if (viTriDuongMin != 1) {
		cout << "\nPhan tu Duong be nhat trong day a nam o vi tri " << viTriDuongMin;
	}
}
#endif 

//Bài tập 24
#if 0
#include<iostream>
using namespace std;
int main() {
	int n, a[20];
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	for (short i = 0; i < n; i++) {
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	short bay = 0;
	int ptChanCuoiCung = 0;
	for (short i = n - 1; i >= 0 ; i--) {
		if (a[i] % 2 == 0) {
			ptChanCuoiCung = a[i];
			bay = 1;
			break;
		}
	}

	if (bay)
		cout << "Phan tu chan cuoi cung trong day a la: " << ptChanCuoiCung;
	else
		cout << "Day tren khong ton tai phan tu chan nao ca ! ";
}
#endif 

//Bài Tập 25
#if 0
#include<iostream>
using namespace std;
int main() {
	int n, a[20];
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	for (short i = 0; i < n; i++) {
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	short bay(0);
	int soLeMax = a[0];
	cout << "Cac so le trong day a la\n";
	for (short i = 0; i < n; i++)
	{
		if (a[i] % 2 == 1) {
			bay = 1;
			cout << a[i] << " ";
			if (a[i] > soLeMax) 
				soLeMax = a[i];
			}
	}
		if (bay)
			cout << "\nPhan tu le lon nhat trong day a la: " << soLeMax;
	}
#endif 

//Bài Tập 26
#if 0
#include<iostream>
using namespace std;
int main() {
	int n, a[20];
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	for (short i = 0; i < n; i++) {
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	//tim phan tu lơn nhat
	short ptMax = a[0];
	short ptMin = a[0];
	int viTriMax(0), viTriMin(0);
	for (short i = 0; i < n; i++) {
		if (a[i] > ptMax) {
			ptMax = a[i];
			viTriMax = i;
		}
		if (a[i] < ptMin) {
			ptMin = a[i];
			viTriMin = i;
		}

	}

	//doi cho phan tu lon nhat va phan tu nho nhat
	short tam = 0;
	tam = a[viTriMax];
		a[viTriMax] = a[viTriMin];
		a[viTriMin] = tam;
	

		cout << "day sau khi da doi cho phan tu lon nhat va phan tu nho nhat la\n";
		for (short i = 0; i < n; i++)
			cout << "a[" << i << "] = " << a[i]<<"\n";

		/*cout << a[i] << " ";*/
}
#endif 

//Bài Tập 27
#if 0
#include<iostream>
using namespace std;
int main()
{
	int X, n, a[20];
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	//Nhập mảng
	for (short i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
	
	cout << "Nhap X: ";
	cin >> X;

	short bay = 0;//neu dk sai bay quay tro lai la 0 (3) 
	for (short i = 0; i < n; i++) {
		if (a[i] > 0 && a[i] <= X) {
				cout << "Phan tu co gia tri tu 1 den X trong day a la: ";
			}
			cout << a[i] << " ";
			bay = 1;//thoa dieu kien(2)
		}
	}
	if (!bay) // bay == 0
		cout << "khong co phan tu nao tu 1 den x trong day !";
}
	
#endif 

//Bài tập 28
#if 0
#include<iostream>
using namespace std;
int main()
{
	int n, a[20];
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	//Nhập mảng
	for (short i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	int S(0);
	for (short i = 0; i < n; i++) {
		if (a[i] % 2 == 1)
			S += a[i];
	}
	cout <<"Tong cac phan tu le trong day cac so nguyen la "<<S;
}
#endif 

//Bài Tập 29 
#if 0
#include<iostream>
using namespace std;
int main()
{
	int n, a[20];
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	//Nhập mảng
	for (short i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	short bay(0), S(0);
	float canBacHai;
	for (short i = 0; i < n; i++) {
		bay = 1;
		canBacHai = sqrt(a[i]);
		for (short j = 2; j <= canBacHai; j++)
		{
			if (a[i] % j == 0) {
				bay = 0;
				break;

			}
		}

		if (bay && a[i]>1)
			S += a[i];
	}
	cout << "Tong cac so nguyen to trong day a la " << S;
}


#endif
 
//Bài tập 30
#if 0
#include<iostream>
using namespace std;
int main()
{
	int n, a[20];
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	//Nhập mảng
	for (short i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
	
//Xuất dãy
	for (short i = 0; i < n; i++)
		cout << a[i] << " ";

	//Tổng các phần tử lẻ nằm ở vị trí chẳn
	int S(0);
	for (short i = 0; i < n; i+=2){
	if (a[i] % 2 == 1)
		S += a[i];
	}
	cout << "Tong Cac phan tu le nam o vi tri chan: " << S;
}
#endif

//Bài Tập 31
#if 0
#include<iostream>
using namespace std;
int main()
{
	int n, a[20];
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	//Nhập mảng
	for (short i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	short S(0);
	for (short i = 0; i < n; i++) {
		if (a[i] % 5 == 0)
			S += a[i];
	}

	cout << "Tong cac phan tu chia het cho 5 trong day a la " << S;
	}
#endif 


//Bài Tập 32
#if 0
#include<iostream>
using namespace std;
int main()
{
	int n, a[20];
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	//Nhập mảng
	for (short i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	//Xuất dãy
	cout << "Day vua nhap a: ";
	for (short i = 0; i < n; i++)
		cout << a[i] << " ";

	//Xuat các phần tử cực đại
	cout << "\nCac phan tu cuc dai: ";
	if (a[0] > a[1])
		cout << a[0] << " ";

	for (short i = 1; i < n - 1; i++)
		if (a[i] > a[n - 1] && a[i] > a[n + 1])
			cout << a[i] << " ";

	if (a[n - 1] > a[n - 2])
		cout << a[n - 1] << " ";
}
#endif 
//Bài Tập 32 thêm xuất ra số cực tiểu 
#if 0
#include<iostream>
using namespace std;
int main()
{
	int n, a[20];
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	//Nhập mảng
	for (short i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	//Xuất dãy
	cout << "Day vua nhap a: ";
	for (short i = 0; i < n; i++)
		cout << a[i] << " ";

	//Xuat các phần tử cực Tieu
	cout << "\nCac phan tu cuc Tieu: ";
	if (a[0] < a[1])
		cout << a[0] << " ";

	//So sánh hai đầu mút
	for (short i = 1; i < n - 1; i++)
		if (a[i] < a[n - 1] && a[i] < a[n + 1])
			cout << a[i] << " ";

	if (a[n - 1] < a[n - 2])
		cout << a[n - 1] << " ";
}
#endif

//Bài Tập 33
#if 0
#include<iostream>
using namespace std;
int main()
{
	int n, a[20];
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	//Nhập mảng
	for (short i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	//Xuất dãy
	cout << "Day vua nhap a: ";
	for (short i = 0; i < n; i++){
		cout << a[i] << " ";
}
	int S = 0;
	for (short i = 0; i < n; i++) {
		if (i == 0 && a[0] < a[1]) {
			S += a[0];
		}
		else if (i == n - 1 && a[n - 1] < a[n - 2]) {
			S += a[n - 1];
		}
		else if (a[i] < a[i - 1] && a[i] < a[i + 1]) {
			S += a[i];
		}
	}
		cout << "Tong cac phan tu cuc tieu trong day a la " << S;
	
}
	
#endif

//Bài Tập 34
#if 0
#include<iostream>
using namespace std;
int main()
{
	int n, a[20];
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	for (short i = 0; i < n; i++) {
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	int tongSoChinhPhuong = 0;
	for (short i = 0; i < n; i++) {
		short sqrt_a = sqrt(a[i]);
		if (sqrt_a * sqrt_a == a[i])
			tongSoChinhPhuong+=a[i];
	}
	cout << "Tong phan tu la so chinh phuong trong day a la "<<tongSoChinhPhuong;
}

#endif

//bài tập 35
#if 0
#include<iostream>
using namespace std;
int main()
{
	int n, a[20];
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	//Nhập mảng
	for (short i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	//Xuất dãy
	cout << "Day vua nhap a: ";
	for (short i = 0; i < n; i++)
		cout << a[i] << " ";

	//Xet dãy tăng dần
	int tam(0);
	for (short i = 0; i < n - 1; i++)
		for (short j = i + 1; j < n; j++)
			if (a[i] > a[j])
			{
				tam = a[i];
				a[i] = a[j];
				a[j] = tam;
			}
	cout << "\nDay tang dan: ";
	for (short i = 0; i < n; i++)
		cout << a[i] << " ";
}
#endif

//Bài tập 36 
#if 0
#include<iostream>
using namespace std;
int main()
{
	int n, a[20];
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	//Nhập mảng
	for (short i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	//Xuất dãy
	cout << "Day vua nhap a: ";
	for (short i = 0; i < n; i++)
		cout << a[i] << " ";

	//Xet dãy tăng dần
	short tam(0);
	short bay(0);
	for (short i = 0; i < n - 1; i++) {
		bay = 1;
		for (short j = i + 1; j < n; j++) {
			if (a[i] % 2 == 0 && a[j] % 2 == 0) {
				bay = 0;
				break;
			}
			if (a[i] > a[j]) {
				tam = a[i];
				a[i] = a[j];
				a[j] = tam;
			}
		}
	}
	cout << "\nDay le tang dan: ";
	for (short i = 0; i < n; i++)
		if(a[i]%2==1)
		cout << a[i] << " ";
}
#endif 


//Bài Tập 37
#if 0
#include<iostream>
using namespace std;
int main()
{
	int n, a[20];
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	//Nhập mảng
	for (short i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	//Xuất dãy
	cout << "Day vua nhap a: ";
	for (short i = 0; i < n; i++)
		cout << a[i] << " ";


	//Xet dãy tăng dần
	short tam(0);
	short bay(0);
	for (short i = 0; i < n -1; i++) {
		bay = 1;
		for (short j = i + 1; j < n; j++) {
			if (a[i] % 2 == 1 && a[j] % 2 == 1) {
				bay = 0;
				break;
			}
			if (a[i] < a[j] ) {
				tam = a[i];
				a[i] = a[j];
				a[j] = tam;
			}
		}
	}
	cout << "\nDay le tang dan: ";
	for (short i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			cout << a[i] << " ";
}
#endif 

//Bài Tập 38
#if 0
#include<iostream>
using namespace std;
int main()
{
	int n, a[20];
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	//Nhập mảng
	for (short i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	//Xuất dãy
	cout << "Day vua nhap a: ";
	for (short i = 0; i < n; i++)
		cout << a[i] << " ";

	short tam = 0;
	short bay = 0;

	for (short i = 0; i < n - 1; i++) {
		bay = 1;
		for (short j = i + 1; j < sqrt(a[i]); j++) {
			if (a[i] % 2 == 0 && a[j] % 2 == 0) {
				bay = 0;
				break;
			}
			if (a[i] > a[j]) {
				tam = a[i];
				a[i] = a[j];
				a[j] = tam;
			}

		}
	}
	
		cout << "\nDay nguyen to tang dan: ";
		if (bay){
		for (short i = 0; i < n; i++) 
				cout << a[i] << " ";
		}
}
#endif 

//Bài Tập 39 
#if 0
#include<iostream>
using namespace std;
int main()
{
	int n, a[20];
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	//Nhập mảng
	for (short i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	//Xuất dãy
	cout << "Day vua nhap a: ";
	for (short i = 0; i < n; i++)
		cout << a[i] << " ";

	short tam = 0;
	// Day chan ben trai, tang dan
	for (short i = 0; i < n - 1; i++) {
		for (short j = i + 1; j < n; j++) {
			if (a[i] % 2 == 0 && a[j] % 2 == 0) {
				if (a[i] > a[j]) {
					tam = a[i];
					a[i] = a[j];
					a[j] = tam;
				}
			}
		}
	}

	// Day le ben phai, giam dan
	for (short i = n - 1; i >= 0; i--) {
		for (short j = i - 1; j >= 0; j--) {
			if (a[i] % 2 == 1 && a[j] % 2 == 1) {
				if (a[i] < a[j]) {
					tam = a[i];
					a[i] = a[j];
					a[j] = tam;
				}
			}

		}

	}
	
	cout << "\nCac so chan theo thu tu tang dan o ben trai, cac so le theo thu tu giam dan o ben phai: ";
	for (short i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			cout << a[i] << " ";
		}
	}
	for (short i = n - 1; i >= 0; i--) {
		if (a[i] % 2 == 1) {
			cout << a[i] << " ";
		}
	}
}
#endif


//Bài Tập 40
#if 0
#include<iostream>
using namespace std;
int main()
{
	int n, a[20];
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	//Nhập mảng
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}


	//Xuất dãy
	cout << "Day vua nhap a: ";
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}


	// Xóa các phần tử tại vị trí lẻ
	for (int i = 1; i < n; i += 2) {
		for (int j = i + 1; j < n; j++) {
			a[j - 1] = a[j];
		} 
		n--;
		i--;
	}

	cout << "\nDay a sau khi xoa: ";
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
#endif 

//Bài Tập 41
#if 0
#include<iostream>
using namespace std;
int main()
{
	int n, a[20];
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	//Nhập mảng
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}


	//Xuất dãy
	cout << "Day vua nhap a: ";
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}

	short max = a[0];
	short viTriMax = 0;
	for (short i = 0; i < n; i++)
		if (max < a[i]) {
			max = a[i];
			viTriMax = i;
		}
	for (short i = viTriMax; i < n - 1; i++) {
		a[i] = a[i + 1];
	}
	n--;
	// In ra mảng sau khi xóa
	cout << "\nMang sau khi xoa phan tu lon nhat: ";
	for (short i = 0; i < n; i++) 
		cout << a[i] << " ";
}
#endif 

//Bài Tập 42
#if 0
#include<iostream>
using namespace std;
int main()
{
	int n, a[20];
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	//Nhập mảng
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}


	//Xuất dãy
	cout << "Day vua nhap a: ";
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}

	short X;
	cout << "\nNhap X: ";
	cin >> X;

	
	// Xóa các phần tử nhỏ hơn X khỏi mảng
	for (short i = 0; i < n; i++) {
		if (a[i] < X) {
			for (short j = i; j < n - 1; j++) {
				a[j] = a[j + 1];
			}
			n--;
			i--;
		}
	}

	// In ra mảng sau khi xóa
	cout << "Mang sau khi xoa phan tu nho hon X: ";
	for (short i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
#endif 

//Bài Tập 43 
#if 0

#include<iostream>
using namespace std;
int main()
{
	int n, a[20];
	cout << "Nhap vao so phan tu n: ";
	cin >> n;

	//Nhập mảng
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}


	//Xuất dãy
	cout << "Day vua nhap a: ";
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}


short X;
cout << "\nNhap X: ";
cin >> X;

short min = X;
short viTriMin = 0;
for (short i = 0; i < n; i++)
	if (X - a[i] > 0 && X - a[i] < min) {
		min = X - a[i];
		viTriMin = i;
	}
for (short i = viTriMin; i < n - 1; i++) {
	a[i] = a[i + 1];
}
n--;
// In ra mảng sau khi xóa
cout << "\nMang sau khi xoa phan tu gan X nhat: ";
for (short i = 0; i < n; i++)
	cout << a[i] << " ";
}
#endif 

//Bài Tập 44 
#if 0
#include<iostream>
using namespace std;
int main()
{
	int a[10], n, X;
	cout << "Nhap so phan tu n: ";
	cin >> n;
	cout << "Nhap X: ";
	cin >> X;

	//Nhập mảng
	for (short i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	//Xuất dãy
	cout << "Day vua nhap a: ";
	for (short i = 0; i < n; i++)
		cout << a[i] << " ";


	
	// Di chuyển các phần tử trong mảng về sau một vị trí
	for (int i = n; i > 0; i--) {
		a[i] = a[i - 1];
	}

	// Gán giá trị của x vào vị trí đầu tiên
	a[0] = X;

	// Tăng số lượng phần tử lên 1
	n++;

	// Xuất dãy sau khi chèn x
	cout << "\nDay a sau khi chen: ";
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
#endif 

//Bài Tập 45
//muốn chèn 1 phần tử thì phải di dời rồi mới chèn 
#if 0
#include<iostream>
using namespace std;
int main()
{
	int a[10], n, X;  
	cout << "Nhap so phan tu n: ";
	cin >> n;
	cout << "Nhap X: ";
	cin >> X;

	//Nhập mảng
	for (short i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	//Xuất dãy
	cout << "Day vua nhap a: ";
	for (short i = 0; i < n; i++)
		cout << a[i] << " ";

	//Tìm vị trí lớn nhất
short viTriMax;
int max = a[0];
viTriMax = 0;
for (short i = 0; i < n; i++) {
	if (max < a[i]) {
		max = a[i];
		viTriMax = i;
	}
}
	//Chèn x vào sau phần tử max
	for (short i = n ; i > viTriMax +1; i--) {
		a[i] = a[i - 1];
	}

	a[viTriMax + 1] = X;
	n++;

	//Xuất dãy sau khi chèn phan tử max
	cout << "\nDay sau khi chen X: ";
	for (short i = 0; i < n  ; i++) 
		cout << a[i] << " ";
	
}
#endif 
//Bài Tập 46 
#if 0
#include<iostream>
using namespace std;
int main()
{
	int a[10], n, X;
	cout << "Nhap so phan tu n: ";
	cin >> n;
	cout << "Nhap X: ";
	cin >> X;

	//Nhập mảng
	for (short i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	//Xuất dãy
	cout << "Day vua nhap a: ";
	for (short i = 0; i < n; i++)
		cout << a[i] << " ";

	// Chèn X vào phía sau các phần tử chẵn
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			// Dịch chuyển các phần tử phía sau lên 1 bậc
			for (int j = n; j > i + 1; j--)
				a[j] = a[j - 1];
			a[i + 1] = X;
			n++;
			i++; // Bỏ qua phần tử X đã chèn
		}
	}

	// Xuất dãy sau khi chèn X vào phía sau các phần tử chẵn
	cout << "\nDay sau khi chen X: ";
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}
#endif 

//Bài Tập 47
#if 0
#include<iostream>
using namespace std;
int main() {
	int n, a[10];
		cout << "Nhap vao so phan tu n: ";
		cin >> n;

		//Nhap day a
		for (short i = 0; i < n; i++)
		{
			cout << "a[" << i << "] = ";
			cin >> a[i];
		}

		//xuat day a
		cout << "Day a: "; 
		for (short i = 0; i < n; i++)
			cout << a[i];

		//tach thanh day b chua phan tu le; va day c chua phan tu chan
		int b[10], c[10];
		short soLuongPhanTuB = 0, soLuongPhanTuC = 0;
		for (short i = 0; i < n; i++)
			if (a[i] % 2 == 1)
				b[soLuongPhanTuB++] = a[i];
			else if (a[i] % 2 == 0)
				c[soLuongPhanTuC++] = a[i];

		//Xuat day b
		cout << "\nDay le b: ";
		for (short i = 0; i < soLuongPhanTuB; i++)
			cout << b[i] << " ";

		//Xuat day c
		cout << "\nDay chan c: ";
		for (short i = 0; i < soLuongPhanTuC; i++)
			cout << c[i] << " ";
}
#endif
//Bài Tập 48
#if 0
#include<iostream>
using namespace std;
int main() {
	int n, a[20];
	int m, b[20];


	cout << "Nhap vao so phan tu n cua day a: ";
	cin >> n;
	//Nhap day a
	for (short i = 0; i < n; i++) {
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	cout << "Nhap vao so phan tu m cua day b: ";
	cin >> m;
	//Nhap day b
	for (short j = 0; j < m; j++) {
		cout << "b[" << j << "] = ";
		cin >> b[j];
	}



	short dem = 0;
	int c[40];
	// Nối tất cả số chẵn của a vào đầu dãy c
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			c[dem++] = a[i];
		}
	}

	// Nối tất cả số chẵn của b vào đầu dãy c
	for (int i = 0; i < m; i++) {
		if (b[i] % 2 == 0) {
			c[dem++] = b[i];
		}
	}

	// Nối tất cả số lẻ của a vào cuối dãy c
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 1) {
			c[dem++] = a[i];
		}
	}

	// Nối tất cả số lẻ của b vào cuối dãy c
	for (int i = 0; i < m; i++) {
		if (b[i] % 2 == 1) {
			c[dem++] = b[i];
		}
	}

	cout << "Day c sau khi noi day a va day b la: ";
	for (int i = 0; i < dem; i++) {
		cout << c[i] << " ";
}
}
#endif 



