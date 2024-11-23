	//## Mảng hai chiều 
	//nếu nhắc đến duyệt ma tran thì phải sử dụng 2 vòng lặp for
	//Bài Tập 1
	#if 0
	#include<iostream>
	using namespace  std;
	int main() {
		int n, a[20];
		cout << "Nhan vao n so hang, so cot cua ma tran vuong: ";
		cin >> n;

		//Xuất ma trận a[n][n] hàng i cột j
		cout << "Ma tran vua nhap: \n";
		for (short i = 0; i < n; i++) {
			for (short j = 0; j < n; j++)
				if (i+j < n)
					cout <<( i+j + 1) << " ";
				else
					cout << 2 * n - (i + j + 1) << " ";
			cout << "\n";
		}

	}
	#endif

	//Bài tập 2
	#if 0
	#include<iostream>
	using namespace std;
	int main() {
		int n, a[10][10];
		cout << "Nhap vao n so hang, so cot cua ma tran vuong:  ";
		cin >> n;

		//Nhao ma tran
		for (short i = 0; i < n; i++)
			for (short j = 0; j < n; j++)
			{
				cout << "a[" << i << "][" << j << "] = ";
				cin >> a[i][j];
			}

		///Xuat ma tran 
		cout << "Day vua nhap: \n";
		for (short i = 0; i < n; i++){
			for (short j = 0; j < n; j++){
				cout << a[i][j] << " ";
			}
				cout << "\n";
			}


		//Tim phan tu lon nhat tren tung hang va chuyen vao duong cheo (chinh thuan a[i][i])
		int max, tam;
		short viTriMax;
		for (short i = 0; i < n; i++) {
			max = a[i][0];
			viTriMax = 0;
			for (short j = 1; j < n; j++)
				if (max < a[i][j]) {
					max = a[i][j];
					viTriMax = j;
				}

			//Đổi chổ phan tu max tim dc vs a[i][i]
			tam = a[i][viTriMax];
			a[i][viTriMax] = a[i][i];
			a[i][i] = tam;
		}

		cout << "Ma tran voi duong cheo chinh thuan la " << "\n";
		for (short i = 0; i < n; i++) {
			for (short j = 0; j < n; j++)

				cout << a[i][j] << " ";
			cout << "\n";
		}
	}
	#endif 

	//Bài Tập 3 
	#if 0
	#include<iostream>
	using namespace std;
	int main() {
		int n, a[10][10];
		cout << "Nhap vao n so hang, so cot cua ma tran vuong:  ";
		cin >> n;

		//Nhap ma tran
		for (short i = 0; i < n; i++) 
			for (short j = 0; j < n; j++) {
				cout << "a[" << i << "][" << j << "] = ";
				cin >> a[i][j];
			}

		///Xuat ma tran 
		cout << "Day vua nhap: \n";
		for (short i = 0; i < n; i++) {
			for (short j = 0; j < n; j++) {
				cout << a[i][j] << " ";
			}
				cout << "\n";
		
		}
	
		//Tong hang
		int Tong;
		for (short i = 0; i < n; i++) {
			Tong = 0;
			for (short j = 0; j < n; j++)
				Tong += a[i][j];
			cout << "\nTong hang thu " << i << " : " << Tong;
		}

		//Tong cot
		for (short i = 0; i < n; i++) {
			Tong = 0;
			for (short j = 0; j < n; j++)
				Tong += a[j][i];
			cout << "\nTong cot thu " << i << " : " << Tong;
		}

		//Tong duong cheo chinh thuan
			Tong = 0;
			for (short i = 0; i < n; i++)
				Tong += a[i][i];//chéo thuận là a[i][i]
			cout << "\nTong duong cheo thuan "<< Tong;

			//Tong duong cheo nghich phu
			Tong = 0;
			for (short i = 0; i < n; i++)
				Tong += a[i][n - i - 1];//chéo phụ nghịch là a[i][i - i - 1]
			cout << "\nTong duong cheo nghich phu " << Tong;

	}


	#endif

	//Bài Tập 4
	#if 0
	#include<iostream>
	using namespace std;
	int main(){
		int a[20][20], n;
		cout << "Nhap vao so hang va so cot cua ma tran vuong cap n: ";
		cin >> n;

		for (short i = 0; i < n; i++)
			for (short j = 0; j < n; j++) {
				cout << "a[" << i << "]["<<j<<"]= ";
			cin >> a[i][j];
		}

		cout << "Ma tran vuong vua nhap: \n";
		for (short i = 0; i < n; i++){ 
			for (short j = 0; j < n; j++) {
				cout << a[i][j] << " ";
			}
				cout << "\n";
			}
	
		cout << "Cac phan tu nua tam tren cua duong cheo chinh trong ma tran vuong cac so nguyen: ";
			for (short i = 0; i < n; i++){
				for (short j = i; j < n ; j++)
						cout << a[i][j]<<" ";
			}
	}
	#endif 

	//Bài Tập 5
	#if 0
	#include<iostream>
	using namespace std;
	int main() {
		short h;
		cout << "Nhap vao chieu cao h: ";
		cin >> h;

		int c[20][20];
		for (short i = 0; i < h; i++) {
			for (short j = 0; j <= i; j++) {
				if (j == 0 || j == i) {
					c[i][j] = 1;
				}
				else {
					c[i][j] = c[i - 1][j - 1] + c[i - 1][j];
				}
			}
		}

		for (short i = 0; i < h; i++){
			for (short j = 0; j <= i; j++) {
				cout << c[i][j] << " ";
			}
		cout << "\n";
	}
	}
	#endif 

	//Bài Tập 6
	#if 0
	#include<iostream>
	using namespace std;
	int main() {
		int n, a[10][10];
		cout << "Nhap vao n so hang, so cot cua ma tran vuong:  ";
		cin >> n;

		//Nhap ma tran
		for (short i = 0; i < n; i++)
			for (short j = 0; j < n; j++)
			{
				cout << "a[" << i << "][" << j << "] = ";
				cin >> a[i][j];
			}

		///Xuat ma tran 
		cout << "Day vua nhap: \n";
		for (short i = 0; i < n; i++) {
			for (short j = 0; j < n; j++)
			{
				cout << a[i][j] << " ";
			}
			cout << "\n";
		}

	
		for (short i = 0; i < n; i++) {
			int tong = 0;
			for (short j = 0; j < n; j++) 
				if (a[i][j] % 2 == 0) 
					tong += a[i][j];
					cout << "\nTong phan tu chan tren dong thu  " << i << " : " << tong;
				}	
	}
	#endif

	//Bài tập 7
	#if 0
	#include<iostream>
	using namespace std;
	int main() {
		int n, a[10][10];
		cout << "Nhap vao n so hang, so cot cua ma tran vuong:  ";
		cin >> n;

		//Nhap ma tran
		for (short i = 0; i < n; i++)
			for (short j = 0; j < n; j++)
			{
				cout << "a[" << i << "][" << j << "] = ";
				cin >> a[i][j];
			}

		///Xuat ma tran 
		cout << "Day vua nhap: \n";
		for (short i = 0; i < n; i++){
			for (short j = 0; j < n; j++)
			{
				cout << a[i][j] << " ";
			}
				cout << "\n";
			}
		//Tong cac phan tu am tren cot
		int Tong = 0;
		for (short i = 0; i < n; i++)
		{
			Tong = 0;
			for (short j = 0; j < n; j++)
				if (a[j][i] < 0)
					Tong += a[j][i];
			cout << "\nTong phan tu am tren cot thu  " << i << " : " << Tong;
		}
	}
	#endif

	//Bài Tập 8
	#if 0
	#include<iostream>
	using namespace std;
	int main() {
		int n, a[10][10];
		cout << "Nhap vao n so hang, so cot cua ma tran vuong:  ";
		cin >> n;

		//Nhap ma tran
		for (short i = 0; i < n; i++)
			for (short j = 0; j < n; j++)
			{
				cout << "a[" << i << "][" << j << "] = ";
				cin >> a[i][j];
			}

		///Xuat ma tran 
		cout << "Day vua nhap: \n";
		for (short i = 0; i < n; i++) {
			for (short j = 0; j < n; j++)
			{
				cout << a[i][j] << " ";
			}
			cout << "\n";
		}

		int tong = 0;
		for (short i = 0; i < n; i++) {
				tong += a[i][i];
			}
		cout << "\nTong phan tu chan tren duong cheo chinh la: " << tong;
	}
	#endif 

	//Bài Tập 9
	#if 0
	#include<iostream>
	#include<cmath>
	using namespace std;
	int main() {
		int n, a[10][10];
		cout << "Nhap vao n so hang, so cot cua ma tran vuong:  ";
		cin >> n;

		//Nhap ma tran
		for (short i = 0; i < n; i++)
			for (short j = 0; j < n; j++)
			{
				cout << "a[" << i << "][" << j << "] = ";
				cin >> a[i][j];
			}

		///Xuat ma tran 
		cout << "Day vua nhap: \n";
		for (short i = 0; i < n; i++) {
			for (short j = 0; j < n; j++)
			{
				cout << a[i][j] << " ";
			}
			cout << "\n";
		}

		int tong = 0;
		short bay = 0;
		float canBacHai;
		for (short i = 0; i < n; i++) {
			for (short j = 0; j < n; j++) {
				bay = 1;
				if (a[i][j] < 2) {
					bay = 0;
				}
				else {
					canBacHai = sqrt(a[i][j]);
					for (short k = 2; k <= canBacHai; k++) {
						if (a[i][j] % k == 0) {
							bay = 0;
							break;
						}
					}
				}
				if (bay) {
					tong += a[i][j];
				}
			}
		}
		cout << "\nTong phan tu la so nguyen to trong ma tran la: " << tong;
	}
	#endif

	//Bài Tập 10
	#if 0
	#include<iostream>
	using namespace std;
	int main() {
		int n, a[10][10];
		cout << "Nhap vao n so hang, so cot cua ma tran vuong:  ";
		cin >> n;

		//Nhap ma tran
		for (short i = 0; i < n; i++)
			for (short j = 0; j < n; j++)
			{
				cout << "a[" << i << "][" << j << "] = ";
				cin >> a[i][j];
			}

		///Xuat ma tran 
		cout << "Day vua nhap: \n";
		for (short i = 0; i < n; i++) {
			for (short j = 0; j < n; j++)
			{
				cout << a[i][j] << " ";
			}
			cout << "\n";
		}

		 // Tinh tong cac gia tri nho nhat tren tung duong cheo
		int tong = 0;
		short bay = 0;
		for (int i = 0; i < n; i++) {
			int min = a[i][i]; // Gia tri nho nhat cua duong cheo thu i

			// Tim gia tri nho nhat cua duong cheo thu i
			for (int j = 0; j < n; j++) {
				if (i == j) {
					bay = 0; // Khong xet phan tu tren duong cheo chinh
					break;
				}
				if (a[i][j] < min) {
					min = a[i][j];
				}
				if (j > i) {
					break; // Khong xet cac phan tu tren phia tren duong cheo phu
				}
			}	

			// Cong gia tri nho nhat cua duong cheo thu i vao tong
			tong += min;
		}

		cout << "\nTong cac gia tri nho nhat tren tung duong cheo: " << tong ;

	}
	#endif 

	//Bài Tập 11
#if 0
#include<iostream>
	using namespace std;
	int main() {
		int n, m, a[10][10];
		cout << "Nhap vao m so hang cua ma tran :  ";
		cin >> m;
		cout << "Nhap vao n so cot cua ma tran :  ";
		cin >> n;

		//Nhap ma tran
		for (short i = 0; i < m; i++)
			for (short j = 0; j < n; j++) {
				cout << "a[" << i << "][" << j << "] = ";
				cin >> a[i][j];
			}

		///Xuat ma tran 
		cout << "Ma tran vua nhap: \n";
		for (short i = 0; i < m; i++) {
			for (short j = 0; j < n; j++) {
				cout << a[i][j] << " ";
			}
			cout << "\n";
		}


		short ptMin = a[0][0];
		for (short i = 0; i < n; i++){
			for (short j = 0; j < n; j++) {
				if (a[0][0] > a[i][j])
					ptMin = i;
			}
		}

		cout << "Phan tu nho nhat trong ma tran cac so nguyen: " << ptMin;
	}
#endif // 1

	//Bài Tập 12

#if 0
#include<iostream>
	using namespace std;
	int main() {
		int n, m, a[10][10];
		cout << "Nhap vao m so hang cua ma tran :  ";
		cin >> m;
		cout << "Nhap vao n so cot cua ma tran :  ";
		cin >> n;

		//Nhap ma tran
		for (short i = 0; i < m; i++)
			for (short j = 0; j < n; j++) {
				cout << "a[" << i << "][" << j << "] = ";
				cin >> a[i][j];
			}

		///Xuat ma tran 
		cout << "Ma tran vua nhap: \n";
		for (short i = 0; i < m; i++) {
			for (short j = 0; j < n; j++) {
				cout << a[i][j] << " ";
			}
			cout << "\n";
		}

		short ptChanCuoiCung = 0;
		for (short i = 0; i < m; i++)
		{
			for (short j = n - 1; j >= 0; j--) {
				if (a[i][j] % 2 == 0)
					ptChanCuoiCung = a[i][j];
			}
		}
		cout << "Phan tu chan cuoi cung trong day la: " << ptChanCuoiCung;
	}

#endif

//Bài Tập 13
#if 0
#include<iostream>
	using namespace std;
	int main() {

		int a[20][20], m, n, Max, bay = 0;
		cout << "Nhap vao m hang cua ma tran a: ";
		cin >> m;
		cout << "Nhap vao n cot cua ma tran a: ";
		cin >> n;

		for (short i = 0; i < n; i++)
		{
			for (short j = 0; j < m; j++) {
				cout << "a[" << i << "][" << j << "] = ";
				cin >> a[i][j];
			}
		}

		cout << "Ma tran vua nhap: \n";
		for (short i = 0; i < n; i++)
		{
			for (short j = 0; j < m; j++) 
				cout << a[i][j] << " ";

			cout << "\n";
		}

		//Tim phan am le dau tien
		for (short i = 0; i < n; i++) {
			for (short j = 0; j < m; j++) {
				if (a[i][j] < 0 && a[i][j]%2 != 0) {
					Max = a[i][j];
					bay = 1;
					break;
				}
			}
			if (bay == 1)
				break;
		}
		for (short i = 0; i < n; i++) {
			for (short j = 0; j < m; j++)
				if (a[i][j] < 0 && a[i][j] % 2 != 0 && a[i][j]>Max) {
					Max = a[i][j];
				}
		}
		if (bay == 1)
			cout << "\nPhan tu am le lon nhat trong ma tran la: " << Max;
		else
			cout << "Khong ton tai phan tu am trong ma tran.";
	}
#endif 

	//Bài Tập 14 
#if 0
#include<iostream>
	using namespace std;
	int main() {

		int a[20][20], m, n, Min, bay = 0;
		cout << "Nhap vao m hang cua ma tran a: ";
		cin >> m;
		cout << "Nhap vao n cot cua ma tran a: ";
		cin >> n;

		for (short i = 0; i < n; i++)
		{
			for (short j = 0; j < m; j++) {
				cout << "a[" << i << "][" << j << "] = ";
				cin >> a[i][j];
			}
		}

		cout << "Ma tran vua nhap: \n";
		for (short i = 0; i < n; i++)
		{
			for (short j = 0; j < m; j++)
				cout << a[i][j] << " ";

			cout << "\n";
		}
		//Tim phan tu duong chan dau tien
		for (short i = 0; i < n; i++) {
			for (short j = 0; j < m; j++) {
				if (a[i][j] > 0 && a[i][j] % 2 == 0) {
					Min = a[i][j];
					bay = 1;
					break;
				}
			}
			if (bay == 1)
				break;
		}
		//Tim phan tu duong chan nho nhat
		for (short i = 0; i < n; i++) {
			for (short j = 0; j < m; j++)
				if (a[i][j] > 0 && a[i][j] % 2 == 0 && a[i][j] < Min) {
					Min = a[i][j];
					bay == 1;
				}
		}
		if (bay == 1)
			cout << "Phan tu duong chan nho nhat ma tran tren la: " << Min;
		else
			cout << "Ma tran khong ton tai phan tu duong.";
	}
#endif

//Bài 15
#if 0
#include<iostream>
#include<cmath>
	using namespace std;
	int main() {

		int a[20][20], n, bay = 0;
		float canbacHai;
		cout << "Nhap vao n so hang, cot cua ma tran vuong a: ";
		cin >> n;

		for (short i = 0; i < n; i++)
		{
			for (short j = 0; j < n; j++) {
				cout << "a[" << i << "][" << j << "] = ";
				cin >> a[i][j];
			}
		}

		cout << "Ma tran vua nhap: \n";
		for (short i = 0; i < n; i++)
		{
			for (short j = 0; j < n; j++)
				cout << a[i][j] << " ";

			cout << "\n";
		}


		cout << "Cac so nguyen to tren duong cheo phu: ";
		for (short i = 0; i < n; i++) {
			int j = n - i - 1;
			canbacHai = sqrt(a[i][j]);
			bay = 1;
			if (a[i][j] <= 1) {
				bay = 0;
			}
			for (short k = 2; k <= canbacHai; k++)
			{
				if (a[i][j] % k == 0)
					bay = 0;
				break;
			}
			if (bay == 1) {
				cout << a[i][j] << " ";
			}

		}
	}
#endif // 1

	//Bài Tập 16
#if 0
#include<iostream>
	using namespace std;

	void nhapMaTran(int a[][10],int n, int m);
	void xuatMaTran(int a[][10], int n, int m);
	void ptGiong(int a[][10], int b[][10], int x, int y, int m, int n);

	int main() {
		int a[10][10], b[10][10], x, y, m, n;

		cout << "Nhap vao n so hang cua ma tran a: ";
		cin >> n;
		cout << "Nhap vao m so cot cua ma tran a: ";
		cin >> m;

		nhapMaTran(a, n, m);
		cout << "Ma tran a vua nhap: \n";
		xuatMaTran(a, n, m);

		cout << "Nhap vao x so hang cua ma tran b: ";
		cin >> x;
		cout << "Nhap vao y so cot cua ma tran b: ";
		cin >> y;

		nhapMaTran(b, x, y);
		cout << "Ma tran b vua nhap: \n";
		xuatMaTran(b, x, y);

		cout << "Cac phan tu giong nhau cua hai ma tran a va b: ";
		ptGiong(a, b, x, y, n, m);
	}


	//Nhap ma tran
	void nhapMaTran(int a[][10], int n, int m) {
		for (short i = 0; i < m; i++)
			for (short j = 0; j < n; j++) {
				cout << "a[" << i << "][" << j << "] = ";
				cin >> a[i][j];
			}
	}

	///Xuat ma tran 
	void xuatMaTran(int a[][10], int n, int m) {
		for (short i = 0; i < m; i++) {
			for (short j = 0; j < n; j++)
				cout << a[i][j] << " ";
			cout << "\n";
		}
	}

	void ptGiong(int a[][10], int b[][10], int x, int y, int m, int n) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				for (int k = 0; k < x; k++) {
					for (int l = 0; l < y; l++) {
						if (a[i][j] == b[k][l]) {
							cout << a[i][j] << " ";
						}
					}
				}
			}
		}
	}

#endif 




	//Bài Tập 17
#if 0 
#include<iostream>
	using namespace std;

	void nhapMaTran(short a[][10], short n, short m);
	void xuatMaTran(short a[][10], short n, short m);
	short tongMin(short a[][10], short n, short m);


	int main() {
		short a[10][10], m, n;
		cout << "Nhap vao n hang cua ma tran a: ";
		cin >> n;
		cout << "Nhap vao m cot cua ma tran a: ";
		cin >> m;

		nhapMaTran(a, n, m);
		cout << "Ma tran vua nhap: \n";
		xuatMaTran(a, n, m);


		cout << "Cot co tong nho nhat ma tran a la cot thu: " << tongMin(a, n, m);
	}

	void nhapMaTran(short a[][10], short n, short m) {
		for (short i = 0; i < n; i++)
			for (short j = 0; j < m; j++) {
				cout << "a[" << i << "][" << j << "] = ";
				cin >> a[i][j];
			}
	}
	void xuatMaTran(short a[][10], short n, short m) {
		for (short i = 0; i < n; i++)
		{
			for (short j = 0; j < m; j++) {
				cout << a[i][j] << " ";
			}
			cout << "\n";
		}
	}
	short tongMin(short a[][10], short n, short m) {
		short tongMin = 0, viTriCotMin = 0;
		for (short i = 0; i < m; i++)
			tongMin += a[i][0];

		for (short j = 0; j < n; j++) {
			short tong = 0;
			for (short i = 0; i < n; i++)
				tong += a[i][j];

			if (tongMin > tong) {
				tongMin = tong;
				viTriCotMin = j;
			}
		}
		return viTriCotMin;

	}
	
#endif

	// excercise 18
#if 0
#include<iostream>
	using namespace std;

	void nhapMaTran(short a[][10], short n, short m);
	void xuatMaTran(short a[][10], short n, short m);
	void count(short a[][10], short n, short m, short& soPtAm, short& soPtDuong);


	int main() {
		short a[10][10], m, n, soPtAm = 0,soPtDuong = 0;
		cout << "Nhap vao n hang cua ma tran a: ";
		cin >> n;
		cout << "Nhap vao m cot cua ma tran a: ";
		cin >> m;

		nhapMaTran(a, n, m);
		cout << "Ma tran vua nhap: \n";
		xuatMaTran(a, n, m);

		count(a, n, m, soPtAm, soPtDuong);
		cout << "So phan tu am trong ma tran a la: "<<soPtAm;
		cout << "\nSo phan tu Duong trong ma tran a la: " << soPtDuong;


	}

	void nhapMaTran(short a[][10], short n, short m) {
		for (short i = 0; i < n; i++)
			for (short j = 0; j < m; j++) {
				cout << "a[" << i << "][" << j << "] = ";
				cin >> a[i][j];
			}
	}
	void xuatMaTran(short a[][10], short n, short m) {
		for (short i = 0; i < n; i++)
		{
			for (short j = 0; j < m; j++) {
				cout << a[i][j] << " ";
			}
			cout << "\n";
		}
	}
	void count(short a[][10], short n, short m, short& soPtAm, short& soPtDuong){
		for (short i = 0; i < n; i++)	{
			for (short j = 0; j < m; j++) {
				if (a[i][j] > 0) {
					soPtDuong++;
				}
				else
					soPtAm++;
			}
		}
	}
#endif

	//Exercise 19
#if 0
#include<iostream>
	using namespace std;

	void nhapMaTran(short a[][10], short n, short m);
	void xuatMaTran(short a[][10], short n, short m);
	void count(short a[][10], short n, short m, short& soPtLe, short& soPtChan);


	int main() {
		short a[10][10], m, n, soPtLe = 0, soPtChan = 0;
		cout << "Nhap vao n hang cua ma tran a: ";
		cin >> n;
		cout << "Nhap vao m cot cua ma tran a: ";
		cin >> m;

		nhapMaTran(a, n, m);
		cout << "Ma tran vua nhap: \n";
		xuatMaTran(a, n, m);

		count(a, n, m, soPtLe, soPtChan);
		cout << "So phan tu Le trong ma tran a la: " << soPtLe;
		cout << "\nSo phan tu Chan trong ma tran a la: " << soPtChan;


	}

	void nhapMaTran(short a[][10], short n, short m) {
		for (short i = 0; i < n; i++)
			for (short j = 0; j < m; j++) {
				cout << "a[" << i << "][" << j << "] = ";
				cin >> a[i][j];
			}
	}
	void xuatMaTran(short a[][10], short n, short m) {
		for (short i = 0; i < n; i++)
		{
			for (short j = 0; j < m; j++) {
				cout << a[i][j] << " ";
			}
			cout << "\n";
		}
	}
	void count(short a[][10], short n, short m, short& soPtLe, short& soPtChan) {
		for (short i = 0; i < n; i++) {
			for (short j = 0; j < m; j++) {
				if (a[i][j] %2== 0) {
					soPtChan++;
				}
				else
					soPtLe++;
			}
		}
	}
#endif


	//Exercise 20
#if 0
#include<iostream>
	using namespace std;

	void nhapMaTran(short a[][10], short n, short m);
	void xuatMaTran(short a[][10], short n, short m);
	void count(short a[][10], short n, short m, short& soPtX, short x);


	int main() {
		short a[10][10], m, n, x;
		cout << "Nhap vao n hang cua ma tran a: ";
		cin >> n;
		cout << "Nhap vao m cot cua ma tran a: ";
		cin >> m;

		nhapMaTran(a, n, m);
		cout << "Ma tran vua nhap: \n";
		xuatMaTran(a, n, m);
		cout << "Nhap so nguyen X: ";
		cin >> x;
		short soPtX = 0;
		count(a, n, m, soPtX,x);
		cout << "So phan tu X xuat hien trong ma tran a la: " << soPtX;


	}

	void nhapMaTran(short a[][10], short n, short m) {
		for (short i = 0; i < n; i++)
			for (short j = 0; j < m; j++) {
				cout << "a[" << i << "][" << j << "] = ";
				cin >> a[i][j];
			}
	}
	void xuatMaTran(short a[][10], short n, short m) {
		for (short i = 0; i < n; i++)
		{
			for (short j = 0; j < m; j++) {
				cout << a[i][j] << " ";
			}
			cout << "\n";
		}
	}
	void count(short a[][10], short n, short m, short& soPtX, short x) {
		for (short i = 0; i < n; i++) {
			for (short j = 0; j < m; j++) {
				if (a[i][j] == x) {
					soPtX++;
				}
			}
		}
	}
#endif

	//Exercise 21
#if 0
#include<iostream>
	using namespace std;

	void nhapMaTran(short a[][10], short n, short m);
	void xuatMaTran(short a[][10], short n, short m);
	void countNguyenTo(short a[][10], short n, short m, short& soPtNguyenTo);


	int main() {
		short a[10][10], m, n, soPtNguyenTo = 0;
		cout << "Nhap vao n hang cua ma tran a: ";
		cin >> n;
		cout << "Nhap vao m cot cua ma tran a: ";
		cin >> m;

		nhapMaTran(a, n, m);
		cout << "Ma tran vua nhap: \n";
		xuatMaTran(a, n, m);
	

		countNguyenTo(a, n, m, soPtNguyenTo);
		cout << "So phan tu Nguyen To xuat hien trong ma tran a la: " << soPtNguyenTo;


	}

	void nhapMaTran(short a[][10], short n, short m) {
		for (short i = 0; i < n; i++)
			for (short j = 0; j < m; j++) {
				cout << "a[" << i << "][" << j << "] = ";
				cin >> a[i][j];
			}
	}
	void xuatMaTran(short a[][10], short n, short m) {
		for (short i = 0; i < n; i++)
		{
			for (short j = 0; j < m; j++) {
				cout << a[i][j] << " ";
			}
			cout << "\n";
		}
	}
	void countNguyenTo(short a[][10], short n, short m, short& soPtNguyenTo) {
		bool bay = false;
		for (short i = 0; i < n; i++) {
			for (short j = 0; j < m; j++) {
				bay = true;
				short canBacHai = sqrt(a[i][j]);
				for (short k = 2; k <= canBacHai; k++) {
					if (a[i][j] % k == 0) {
						bay = false;
						break;
					}

				}
				if (bay &&a[i][j] > 1)
					soPtNguyenTo++;
			}
		}
	
	}
#endif


//Bài Tập 21
#if 0
#include<iostream>
#include<cmath>
	using namespace std;
	int main() {
		int soLuongPhanNguyenTo = 0;
		int a[20][20], n, bay = 0;
		float canbacHai;
		cout << "Nhap vao n so hang, cot cua ma tran vuong a: ";
		cin >> n;

		for (short i = 0; i < n; i++)
		{
			for (short j = 0; j < n; j++) {
				cout << "a[" << i << "][" << j << "] = ";
				cin >> a[i][j];
			}
		}

		cout << "Ma tran vua nhap: \n";
		for (short i = 0; i < n; i++)
		{
			for (short j = 0; j < n; j++)
				cout << a[i][j] << " ";

			cout << "\n";
		}


		
		for (short i = 0; i < n; i++) {
			for (short j = 0; j < n; j++) {
				canbacHai = sqrt(a[i][j]);
				bay = 1;
				for (short k = 2; k <= canbacHai; k++)
				{
					if (a[i][j] % k == 0) {
						bay = 0;
						break;
					}
					}
				if (bay == 1 && a[i][j] > 1) {
					soLuongPhanNguyenTo++;
				}
			}
		}
		cout << "Cac so nguyen to trong ma tran tren la: " << soLuongPhanNguyenTo;
	}
#endif // 1

	//Exercise 22
#if 0
#include<iostream>
	using namespace std;

	void nhapMaTran(short a[][10], short n);
		void xuatMaTran(short a[][10], short n);
		void count(short a[][10], short n, short &isPrime);

		int main() {
			short a[10][10], n, isPrime = 0;

			cout << "Nhap vao n so phan tu cua ma tran vuong: ";
			cin >> n;

			nhapMaTran(a, n);
			cout << "Ma tran vuong vua nhap: \n";
			xuatMaTran(a, n);

			count(a, n, isPrime);
			cout << "So phan tu nguyen to nam tren duong cheo chinh trong ma tran vuong la: " << isPrime;

		}

		void nhapMaTran(short a[][10], short n) {
			for (short i = 0; i < n; i++){
				for (short j = 0; j < n; j++) {
					cout << "a[" << i << "][" << j << "] = ";
					cin >> a[i][j];
				}
			}

		}
		void xuatMaTran(short a[][10], short n) {
			for (short i = 0; i < n; i++){
				for (short j = 0; j < n; j++) {
					cout << a[i][j] << " ";
				}
				cout << "\n";
			}
		}
		void count(short a[][10], short n, short &isPrime) {
			bool bay = true;
			for (short i = 0; i < n; i++){
					bay = true;
					short canBacHai = sqrt(a[i][i]);
					for (short j = 2; j <= canBacHai; j++) {
						if (a[i][i] % j == 0) {
							bay = false;
							break;
						}
					}
					if (bay&& a[i][i] > 1)
						isPrime++;
				}
			}
#endif


	//Bài Tập 22
	//Muốn duyệt các pt thuộc đường chéo chính thuận thì ta sử 1 vòng lặp for a[i][i]
	//Muốn duyệt các pt thuộc đường chéo phụ nghịch thì ta sử 1 vòng lặp for a[i][n - i -1]
		//Muốn duyệt các pt thuộc đường hàng thì vòng lặp for a[i][j]
#if 0
#include<iostream>
	using namespace std;
	int main() {
		int n, m, a[10][10];
		cout << "Nhap vao m so hang cua ma tran :  ";
		cin >> m;
		cout << "Nhap vao n so cot cua ma tran :  ";
		cin >> n;

		//Nhap ma tran
		for (short i = 0; i < m; i++)
			for (short j = 0; j < n; j++) {
				cout << "a[" << i << "][" << j << "] = ";
				cin >> a[i][j];
			}

		///Xuat ma tran 
		cout << "Ma tran vua nhap: \n";
		for (short i = 0; i < m; i++) {
			for (short j = 0; j < n; j++)
				cout << a[i][j] << " ";
			cout << "\n";
		}

		//Dem phan tu nguyen to tren duong cheo chinh
		short soNguyento = 0;
		short bay;
		float canBacHai;
		for (short i = 0; i < n; i++)//Xet a[i][i] co la so nguyen to khong
			if (a[i][i] < 2)
				break;
			else if (a[i][i] % 2 != 0) {
				bay = 0;//a[i][i] la so nguyen to
				canBacHai = sqrt(a[i][i]);
				for (short j = 3; j < canBacHai; j += 2)//chỉ xét số lẻ 3 5 7 ..... nên sau mõi lần lặp thì j += them 2 vào 3 + 2 = 5
					if (a[i][i] % j == 0) {
						bay == 1;//Sập bảy --> a[i][i] la so nguyen to
						break;
					}
				if (!bay)
					soNguyento++;
			}

		//Xuất kết quả
		cout << "So phan tu nguyen to trong ma tran: " << soNguyento;
	}
#endif 


	//Exercise 23 
#if 0 
#include<iostream>
	using namespace std;

	void nhapMaTran(short a[][10], short n);
	void xuatMaTran(short a[][10], short n);
	void countEven(short a[][10], short n, short& isEven);//đếm số (chẳn even)

	int main() {
		short a[10][10], n, isEven = 0;

		cout << "Nhap vao n so phan tu cua ma tran vuong: ";
		cin >> n;

		nhapMaTran(a, n);
		cout << "Ma tran vuong vua nhap: \n";
		xuatMaTran(a, n);

		countEven(a, n, isEven);
		cout << "So phan tu chan nam tren duong cheo chinh trong ma tran vuong la: " << isEven;

	}

	void nhapMaTran(short a[][10], short n) {
		for (short i = 0; i < n; i++) {
			for (short j = 0; j < n; j++) {
				cout << "a[" << i << "][" << j << "] = ";
				cin >> a[i][j];
			}
		}

	}
	void xuatMaTran(short a[][10], short n) {
		for (short i = 0; i < n; i++) {
			for (short j = 0; j < n; j++) {
				cout << a[i][j] << " ";
			}
			cout << "\n";
		}
	}
	void countEven(short a[][10], short n, short& isEven) {
		for (short i = 0; i < n; i++) {
			if (a[i][i] % 2 == 0) {
				isEven++;
			}
		}

	}
#endif // 1

	//Exercise 24
#if 0
#include<iostream>
	using namespace std;

	void nhapMaTran(short a[][10], short n);
	void xuatMaTran(short a[][10], short n);
	void countPrimePhuChinh(short a[][10], short n, short& primeCount);

	int main() {
		short a[10][10], n, primeCount = 0;

		cout << "Nhap vao n so phan tu cua ma tran vuong: ";
		cin >> n;

		nhapMaTran(a, n);
		cout << "Ma tran vuong vua nhap: \n";
		xuatMaTran(a, n);

		countPrimePhuChinh(a, n, primeCount);
		cout << "So phan tu chan nam ca tren duong cheo chinh, cheo phu trong ma tran vuong la: " << primeCount;

	}

	void nhapMaTran(short a[][10], short n) {
		for (short i = 0; i < n; i++) {
			for (short j = 0; j < n; j++) {
				cout << "a[" << i << "][" << j << "] = ";
				cin >> a[i][j];
			}
		}

	}
	void xuatMaTran(short a[][10], short n) {
		for (short i = 0; i < n; i++) {
			for (short j = 0; j < n; j++) {
				cout << a[i][j] << " ";
			}
			cout << "\n";
		}
	}
	void countPrimePhuChinh(short a[][10], short n, short& primeCount) {
		for (short i = 0; i < n; i++) {
			bool bay1 = true, bay2 = true;
			float canBacHai = sqrt(a[i][i]);
			float canBacHai1 = sqrt(a[i][n - i - 1]);
			if (i == n - i - 1) { // nếu phần tử nằm trên đường chéo chính hoặc phụ
				for (short j = 2; j <= canBacHai; j++) {
					if (a[i][i] % j == 0) {
						bay1 = false;
						break;
					}
				}
				if (bay1 && a[i][i] > 1) {
					primeCount++;
				}
			}
			else {
				for (short j = 2; j <= canBacHai; j++) {
					if (a[i][i] % j == 0) {
						bay1 = false;
						break;
					}
				}
				for (short j = 2; j <= canBacHai1; j++) {
					if (a[i][n - i - 1] % j == 0) {
						bay2 = false;
						break;
					}
				}
				if (bay1 && a[i][i] > 1) {
					primeCount++;
				}
				if (bay2 && a[i][n - i - 1] > 1) {
					primeCount++;
				}
			}
		}
	}
	
#endif // 1

	//Exercise 25
#if 0
#include<iostream>
	using namespace std;

	void nhapMaTran(short a[][10], short n, short m);
	void xuatMaTran(short a[][10], short n, short m);
	short ptMax(short a[][10], short n, short m, short &coutMax);

	int main() {
		short a[10][10], m, n, countMax = 0;
		cout << "Nhap vao m hang cua ma tran a: ";
		cin >> n;
		cout << "Nhap vao n cot cua ma tran a: ";
		cin >> m;

		nhapMaTran(a, n, m);
		cout << "Ma tran vua nhap: \n";
		xuatMaTran(a, n, m);

		cout << "Cac gia tri cuc dai cua ma tran a la: " << ptMax(a, n, m, countMax);
	}

	void nhapMaTran(short a[][10], short n, short m) {
		for (short i = 0; i < n; i++)
			for (short j = 0; j < m; j++) {
				cout << "a[" << i << "][" << j << "] = ";
				cin >> a[i][j];
			}
	}
	void xuatMaTran(short a[][10], short n, short m) {
		for (short i = 0; i < n; i++)
		{
			for (short j = 0; j < m; j++) {
				cout << a[i][j] << " ";
			}
			cout << "\n";
		}
}
	short ptMax(short a[][10], short n, short m, short& countMax) {
		for (short i = 0; i < n; i++) {
			for (short j = 0; j < m; j++) {
				bool isMax = true;
				// kiểm tra xem a[i][j] với các cột, xem a[i][j] có phải là phần tử cực đại so với các cột hay không hay không
				for (short k = 0; k < n; k++) {
					if (a[k][j] > a[i][j]) {
						isMax = false; // a[i][j] không phải là phần tử cực đại
						break;
					}
				}
				if (isMax) {
					// kiểm tra xem a[i][j] với các hàng, xem a[i][j] có phải là phần tử cực đại so với các hàng hay  hay không
					for (short k = 0; k < m; k++) {
						if (a[i][k] > a[i][j]) {
							isMax = false; // a[i][j] không phải là phần tử cực đại
							break;
						}
					}
				}
				if (isMax) {
					countMax++;  
				}
			}
		}
		return countMax;
	}

#endif

	//Exercise 26
#if 0
#include<iostream>
	using namespace std;

	void nhapMaTran(short a[][10], short m, short n);
	void xuatMaTran(short a[][10], short m, short n);
	void arrange(short a[][10], short m, short n);//Sắp xếp thứ tự trái phải trên dưới

	int main() {
		short a[10][10], m, n;
		cout << "Nhap vao m hang cua ma tran a: ";
		cin >> m;
		cout << "Nhap vao n cot cua ma tran a: ";
		cin >> n;

		nhapMaTran(a, m, n);
		cout << "Ma tran vua nhap: \n";
		xuatMaTran(a, m, n);

		arrange(a, m, n);
		cout << "\nMa tran a sau khi duoc sap xep theo thu tu tang dan la tu trai qua phai tu tren xuong duoi: \n";
		xuatMaTran(a, m, n);
	}

	void nhapMaTran(short a[][10], short m, short n) {
		for (short i = 0; i < m; i++)
			for (short j = 0; j < n; j++) {
				cout << "a[" << i << "][" << j << "] = ";
				cin >> a[i][j];
			}
	}
	void xuatMaTran(short a[][10], short m, short n) {
		for (short i = 0; i < m; i++)
		{
			for (short j = 0; j < n; j++) {
				cout << a[i][j] << " ";
			}
			cout << "\n";
		}
	}
	
	void arrange(short a[][10], short m, short n) {
		//Chuyen ma tran sang day 1 chieu
		short demPhanTuB = 0, b[20], tongSoPhanTu;
		for (short i = 0; i < m; i++) 
			for (short j = 0; j < n; j++) 
				b[demPhanTuB++] = a[i][j];
			
		//Xuat day mot chieu
		tongSoPhanTu = n * m;
		cout << "Chuyen sang day mot chieu: ";
		for (short i = 0; i < tongSoPhanTu; i++)
			cout << b[i] << " ";

		//Sap xep day 1 chieu tang dan
		//Sap Xep day mot chieu tang dan
		for (short i = 0; i < tongSoPhanTu - 1; i++) {
			for (short j = i + 1; j < tongSoPhanTu; j++)
				if (b[i] > b[j]) {
					short tam = b[i];
					b[i] = b[j];
					b[j] = tam;
				}
		}


		// Xuat day 1 chieu tang dan
		cout << "\nDay mot chieu tang dan: ";
		for (short i = 0; i < tongSoPhanTu; i++)
			cout << b[i] << " ";

		//Chuyen day mot chieu sang ma tran tang dan
		demPhanTuB = 0;
		for (short i = 0; i < m; i++)
			for (short j = 0; j < n; j++)
				if (i % 2 == 0)
					a[i][j] = b[demPhanTuB++];
				else
					a[i][j] = b[demPhanTuB++];
		
	}
#endif

	//Exercise 27
#if 0
#include<iostream>
	using namespace std;

	void nhapMaTran(short a[][10], short m, short n);
	void xuatMaTran(short a[][10], short m, short n);
	void arrange(short a[][10], short m, short n);//Sắp xếp dòng theo thứ tự tăng dần

	int main() {
		short a[10][10], m, n;
		cout << "Nhap vao m hang cua ma tran a: ";
		cin >> m;
		cout << "Nhap vao n cot cua ma tran a: ";
		cin >> n;

		nhapMaTran(a, m, n);
		cout << "Ma tran vua nhap: \n";
		xuatMaTran(a, m, n);

		arrange(a, m, n);
		cout << "\nMa tran a sau khi duoc sap xep cac dong theo thu tu tang dan : \n";
		xuatMaTran(a, m, n);
	}

	void nhapMaTran(short a[][10], short m, short n) {
		for (short i = 0; i < m; i++)
			for (short j = 0; j < n; j++) {
				cout << "a[" << i << "][" << j << "] = ";
				cin >> a[i][j];
			}
	}
	void xuatMaTran(short a[][10], short m, short n) {
		for (short i = 0; i < m; i++)
		{
			for (short j = 0; j < n; j++) {
				cout << a[i][j] << " ";
			}
			cout << "\n";
		}
	}

	void arrange(short a[][10], short m, short n) {
		//Chuyen ma tran sang day mot chieu
		short demPhanTuB = 0, tongSoPhanTu, b[20];
		for (short i = 0; i < m; i++)
			for (short j = 0; j < n; j++)
				b[demPhanTuB++] = a[i][j];
		
		//Xuat day mot chieu
		tongSoPhanTu = n * m;
		cout << "Day mot chieu sau khi chuyen tu ma tran a: ";
		for (short i = 0; i < tongSoPhanTu; i++)
			cout << b[i]<<" ";

		//Sap xep day mot chieu tang dan
		//Sap Xep day mot chieu tang dan
		for (short i = 0; i < tongSoPhanTu - 1; i++) {
			for (short j = i + 1; j < tongSoPhanTu; j++)
				if (b[i] > b[j]) {
					short tam = b[i];
					b[i] = b[j];
					b[j] = tam;
				}
		}

		cout << "\nDay mot chieu sau khi duoc sap xep: ";
		for (short i = 0; i < tongSoPhanTu; i++)
		cout << b[i] << " ";

		//Chuyen day mot chieu sang ma tran tang dan
		demPhanTuB = 0;
		for (short i = 0; i < m; i++)
			for (short j = 0; j < n; j++)
				if (i % 2 == 0)
					a[i][j] = b[demPhanTuB++];
				else
					a[i][j] = b[demPhanTuB++];


	}
#endif

	//Exercise 28
#if 0
#include<iostream>
	using namespace std;

	void nhapMaTran(short a[][10], short m, short n);
	void xuatMaTran(short a[][10], short m, short n);
	void arrange(short a[][10], short m, short n);//Sắp xếp cột theo thứ tự tăng giảm dần

	int main() {
		short a[10][10], m, n;
		cout << "Nhap vao m hang cua ma tran a: ";
		cin >> m;
		cout << "Nhap vao n cot cua ma tran a: ";
		cin >> n;

		nhapMaTran(a, m, n);
		cout << "Ma tran vua nhap: \n";
		xuatMaTran(a, m, n);

		arrange(a, m, n);
		cout << "\nMa tran a sau khi duoc sap xep cac cot theo thu tu giam dan : \n";
		xuatMaTran(a, m, n);
	}

	void nhapMaTran(short a[][10], short m, short n) {
		for (short i = 0; i < m; i++)
			for (short j = 0; j < n; j++) {
				cout << "a[" << i << "][" << j << "] = ";
				cin >> a[i][j];
			}
	}
	void xuatMaTran(short a[][10], short m, short n) {
		for (short i = 0; i < m; i++)
		{
			for (short j = 0; j < n; j++) {
				cout << a[i][j] << " ";
			}
			cout << "\n";
		}
	}

	void arrange(short a[][10], short m, short n) {

		short demPhanTuB = 0, tongSoPhanTu, b[20];
		//chuyen ma tran sang say 1 chieu
		for (short i = 0; i < m; i++)
			for (short j = 0; j < n; j++)
				b[demPhanTuB++] = a[i][j];
	
		//Xuất dãy 1 chiều
		tongSoPhanTu = n * m;
		cout << "\nchuyen sang day mot chieu: ";
		for (short i = 0; i < tongSoPhanTu; i++)
			cout << b[i] << " ";

		//Sap xep day mot chieu giam dan
		for (short i = 0; i < tongSoPhanTu - 1; i++) {
			for (short j = i + 1; j < tongSoPhanTu; j++)
				if (b[i] < b[j]) {
					short tam = b[j];
					b[j] = b[i];
					b[i] = tam;
				}
		}
		cout << "\nDay mot chieu sau khi duoc xep giam dan: ";
		for (short i = 0; i < tongSoPhanTu; i++)
			cout << b[i] << " ";

		//chuyen day mot chieu sang ma tran cot giam dan
		demPhanTuB = 0;
		for (short j = 0; j < n; j++)
			for (short i = 0; i < m; i++)
				if (i % 2 == 0)
					a[i][j] = b[demPhanTuB++];
				else
					a[i][j] = b[demPhanTuB++];
	
	}
#endif

	//Bài Tập 29
	// bài này thầy sửa có thể sắp xếp theo mình như bài 30 28 27 26 k cần sắp xếp giống thầy vì rối(tự bản thân cảm nhận)
	//Dạng bài này không thi 
#if 0
#include<iostream>
	using namespace std;
	int main() {
		int n, m, a[10][10];
		cout << "Nhap vao m  so hang cua ma tran :  ";
		cin >> m;
		cout << "Nhap vao n so cot cua ma tran :  ";
		cin >> n;

		//Nhap ma tran
		for (short i = 0; i < m; i++)
			for (short j = 0; j < n; j++) {
				cout << "a[" << i << "][" << j << "] = ";
				cin >> a[i][j];
			}

		///Xuat ma tran 
		cout << "Ma tran vua nhap: \n";
		for (short i = 0; i < m; i++) {
			for (short j = 0; j < n; j++)
				cout << a[i][j] << " ";
			cout << "\n";
		}

		//Chuyen ma tran sang day 1 chieu
		short b[20], tongSoPhanTu, demPhanTuB = 0;
		for (short i = 0; i < m; i++)
			for (short j = 0; j < n; j++)
				b[demPhanTuB++] = a[i][j];

		//Xuat day 1 chieu
		tongSoPhanTu = n * m;
		cout << "Chuyen sang day 1 chieu: ";
		for (short i = 0; i < tongSoPhanTu; i++)
			cout << b[i] << " ";

		//Sap xep day 1 chieu tang dan
		short viTriMin, tam;
		for (short i = 0; i < tongSoPhanTu - 1; i++) {
			viTriMin = i;
			for (short j = i + 1; j < tongSoPhanTu; j++)
				if (b[viTriMin] > b[j])
					viTriMin = j;

			if (viTriMin != i) {
				tam = b[i];
				b[i] = b[viTriMin];
				b[viTriMin] = tam;
			}
		}

		cout << "\nDay mot chieu tang dan : ";
		for (short i = 0; i < tongSoPhanTu; i++)

			cout << b[i] << " ";

		//Chuyen day mot chieu sang ma tran tang dan
		demPhanTuB = 0;
		for (short i = 0; i < m; i++)
			for (short j = 0; j < n; j++)
				if (i % 2 == 0)
					a[i][j] = b[demPhanTuB++];
				else
					a[i][n - 1 - j] = b[demPhanTuB++];


		//Xuat ma tran a[m][n] tang dan 
		cout << "\nma tran tang dan theo yeu cau: \n";
		for (short i = 0; i < m; i++) {
			for (short j = 0; j < n; j++) {
				cout << a[i][j] << " ";
			}
			cout << "\n";
		}
	}
#endif 

	//Exercise 30
#if 0
#include<iostream>
	using namespace std;

	void nhapMaTran(short a[][10], short m, short n);
	void xuatMaTran(short a[][10], short m, short n);
	void arrange(short a[][10],short m,short n);//Sắp xếp ma trận tăng dần theo hình xoắn ốc

	int main() {
		short a[10][10], m, n;
		cout << "Nhap vao m hang cua ma tran a: ";
		cin >> m;
		cout << "Nhap vao n cot cua ma tran a: ";
		cin >> n;

		nhapMaTran(a, m, n);
		cout << "Ma tran vua nhap: \n";
		xuatMaTran(a, m, n);

		arrange(a, m, n);
		cout << "\nMa tran a sau khi duoc sap xep theo thu tu tang dann cua hinh xoan oc : \n";
		xuatMaTran(a, m, n);
	}

	void nhapMaTran(short a[][10], short m, short n) {
		for (short i = 0; i < m; i++)
			for (short j = 0; j < n; j++) {
				cout << "a[" << i << "][" << j << "] = ";
				cin >> a[i][j];
			}
	}
	void xuatMaTran(short a[][10], short m, short n) {
		for (short i = 0; i < m; i++)
		{
			for (short j = 0; j < n; j++) {
				cout << a[i][j] << " ";
			}
			cout << "\n";
		}
	}

	void arrange(short a[][10], short m, short n) {

		//Sao chep ma tran vao day b
		short demPhanTuB = 0, tongSoPhanTu, b[20];
		for (short i = 0; i < m; i++)
			for (short j = 0; j < n; j++)
				b[demPhanTuB++] = a[i][j];

		//chuyen ma tran than day mot chieu
		cout << "Ma tran sau khi duoc chuyen thanh day mot chieu: ";
		tongSoPhanTu = n * m;
		for (short i = 0; i < tongSoPhanTu; i++)
			cout << b[i] << " ";

		//Sap Xep day mot chieu tang dan
		for (short i = 0; i < tongSoPhanTu - 1; i++) {
			for (short j = i + 1; j < tongSoPhanTu; j++)
				if (b[i] > b[j]) {
					short tam = b[i];
					b[i] = b[j];
					b[j] = tam;
				}
		}


		cout << "\nDay mot chieu sau khi duoc sap xep tang dan: ";
		for (short i = 0; i < tongSoPhanTu; i++)
			cout << b[i] << " ";

		//Chuyen day mot chieu thanh ma tran hinh xoan oc tang dan
		demPhanTuB = 0;
		short dongMin = 0, cotMin = 0, dongMax = m, cotMax = n;
		while (dongMin < dongMax && cotMin < cotMax) {
			// Sắp xếp dòng đầu tiên của ma trận a
			for (short i = dongMin; i < dongMax; i++)
				a[dongMin][i] = b[demPhanTuB++];
			dongMin++;//chỉ tăng khi kết thúc vòng lặp trong vòng lặp chỉ có i tăng  vì dongMin nằm ngoài vòng lặp
			//Sắp xếp cột cuối cùng của ma trận a
			for (short i = dongMin; i < dongMax; i++)
				a[i][cotMax - 1] = b[demPhanTuB++];
			cotMax--;//Tương tự như dongMin++ chỉ trừ khi kết thúc vòng lặp
			//Sắp xếp dòng cuối cùng của ma trận a
			if (dongMin < dongMax)
				for (short i = cotMax - 1; i >= cotMin; i--)
					a[dongMax - 1][i] = b[demPhanTuB++];
			dongMax--;//Tương tự
			//Sắp xếp cột đầu tiên của ma trận a
			if (cotMin < cotMax)
				for (short i = dongMax - 1; i >= dongMin; i--)
					a[i][cotMin] = b[demPhanTuB++];
			cotMin++;//Tương tự
		}
		/*sau khi sắp xếp xong dòng đầu tiên của ma trận a, biến dongMin được tăng lên 1 để bỏ qua hàng đầu tiên trong
		lần sắp xếp tiếp theo. Tương tự, sau khi sắp xếp xong cột cuối cùng của ma trận a, biến cotMax được giảm đi 1 để 
		bỏ qua cột cuối cùng trong lần sắp xếp tiếp theo. Tương tự cho các vòng lặp sắp xếp hàng cuối cùng và cột đầu tiên.
		Với cách thực hiện này, ta sẽ không phải sắp xếp lại các phần tử đã được gán giá trị từ trước đó và giảm thiểu thời
		 gian tính toán.*/
	}
#endif // 0

	//Exercise 31
#if 0
#include<iostream>
	using namespace std;

	void nhapMaTran(short a[][10], short n);
	void xuatMaTran(short a[][10], short n);
	void arrange(short a[][10], short n);//Sắp xếp ma trận tăng dần theo hình xoắn ốc

	int main() {
		short a[10][10], n;
		cout << "Nhap vao n hang, cot cua ma tran vuong a: ";
		cin >> n;

		nhapMaTran(a, n);
		cout << "Ma tran vua nhap: \n";
		xuatMaTran(a, n);

		arrange(a, n);
		cout << "\nMa tran a sau khi duoc sap xep theo thu tu tang dan cua cac phan tu\n nam tren duong cheo song song voi duong cheo chinh : \n";
		xuatMaTran(a, n);
	}

	void nhapMaTran(short a[][10], short n) {
		for (short i = 0; i < n; i++)
			for (short j = 0; j < n; j++) {
				cout << "a[" << i << "][" << j << "] = ";
				cin >> a[i][j];
			}
	}
	void xuatMaTran(short a[][10], short n) {
		for (short i = 0; i < n; i++)
		{
			for (short j = 0; j < n; j++) {
				cout << a[i][j] << " ";
			}
			cout << "\n";
		}
	}

	void arrange(short a[][10], short n) {

		//Sao chep ma tran vao day b
		short demPhanTuB = 0, tongSoPhanTu, b[20];
		for (short i = 0; i < n; i++)
			for (short j = 0; j < n; j++)
				b[demPhanTuB++] = a[i][j];

		//chuyen ma tran than day mot chieu
		cout << "Ma tran sau khi duoc chuyen thanh day mot chieu: ";
		tongSoPhanTu = n * n;
		for (short i = 0; i < tongSoPhanTu; i++)
			cout << b[i] << " ";

		//Sap Xep day mot chieu tang dan
		for (short i = 0; i < tongSoPhanTu - 1; i++) {
			for (short j = i + 1; j < tongSoPhanTu; j++)
				if (b[i] > b[j]) {
					short tam = b[i];
					b[i] = b[j];
					b[j] = tam;
				}
		}
          cout << "\nDay mot chieu sau khi duoc sap xep tang dan: ";
		for (short i = 0; i < tongSoPhanTu; i++)
			cout << b[i] << " ";

		//chuyen day mot chieu thanh ma tran vuong co cac duong cheo tang dan song song voi duong cheo chinh	 
		demPhanTuB = 0;
		for (short i = 0; i < n; i++) {
			for (short j = 0; j < n; j++)
				if (i % 2 == 0)
					a[i][j] = b[demPhanTuB++];
				else
					a[i][j] = b[demPhanTuB++];
		}



	}
#endif



	//Exercise 32
#if 0
	#include<iostream>
	using namespace std;

	void nhapMaTran(short a[][10], short m, short n);
	void xuatMaTran(short a[][10], short m, short n);
	void deleteDong(short a[][10], short &m, short n, short I);

	int main() {
		short a[10][10], m, n, I;
		cout << "Nhap vao m hang cua ma tran a: ";
		cin >> m;
		cout << "Nhap vao n cot cua ma tran a: ";
		cin >> n;

		nhapMaTran(a, m, n);
		cout << "Ma tran vua nhap: \n";
		xuatMaTran(a, m, n);

		cout << "Nhap vao dong i can xoa: ";
		cin >> I;

		deleteDong(a, m, n, I);
			cout << "Ma tran sau khi xoa dong: " << I<<"\n";
			xuatMaTran(a, m, n);


	}

	void nhapMaTran(short a[][10], short m, short n) {
		for (short i = 0; i < m; i++)
			for (short j = 0; j < n; j++) {
				cout << "a[" << i << "][" << j << "] = ";
				cin >> a[i][j];
			}
	}
	void xuatMaTran(short a[][10], short m, short n) {
		for (short i = 0; i < m; i++)
		{
			for (short j = 0; j < n; j++) {
				cout << a[i][j] << " ";
			}
			cout << "\n";
		}
	}

	void deleteDong(short a[][10], short &m, short n, short I) {
		if(I>= 0 && I < m)
		for (short i = I; i < m -1 ; i++) /*Vì sao chỉ xét từ I tức dòng cần xóa tới m -1
			vì  thuật toán xóa 1 dòng or cột của ma trận là sẽ lấy dòng cuối dồi lên dòng 
			ở trên nên chỉ chạy tới khoảng gần cuối để lấy dòng cuối dồn lên lắp dòng cần 
			xóa*/
			for (short j = 0; j < n; j++)
					a[i][j] = a[i + 1][j];
		m--;

	}


	

#endif
	 
	//Exercise 33
#if 0
#include<iostream>
	using namespace std;

	void nhapMaTran(short a[][10], short m, short n);
	void xuatMaTran(short a[][10], short m, short n);
	void deleteDong(short a[][10], short m, short &n, short I);

	int main() {
		short a[10][10], m, n, I;
		cout << "Nhap vao m hang cua ma tran a: ";
		cin >> m;
		cout << "Nhap vao n cot cua ma tran a: ";
		cin >> n;

		nhapMaTran(a, m, n);
		cout << "Ma tran vua nhap: \n";
		xuatMaTran(a, m, n);

		cout << "Nhap vao dong i can xoa: ";
		cin >> I;

		deleteDong(a, m, n, I);
		cout << "Ma tran sau khi xoa dong: " << I << "\n";
		xuatMaTran(a, m, n);


	}

	void nhapMaTran(short a[][10], short m, short n) {
		for (short i = 0; i < m; i++)
			for (short j = 0; j < n; j++) {
				cout << "a[" << i << "][" << j << "] = ";
				cin >> a[i][j];
			}
	}
	void xuatMaTran(short a[][10], short m, short n) {
		for (short i = 0; i < m; i++)
		{
			for (short j = 0; j < n; j++) {
				cout << a[i][j] << " ";
			}
			cout << "\n";
		}
	}

	void deleteDong(short a[][10], short m, short &n, short J) {
		if(J >= 0 && J < n)
		for (short j = J; j < n - 1; j++)
		for (short i = 0; i < m ; i++)
					a[i][j] = a[i][ j + 1];
		n--;

	}

#endif
	
   //Bài Tập 34 
   //Có khả năng thi
#if 0
#include<iostream>
		using namespace std;
		int main() {
			int n, m, a[10][10];
			cout << "Nhap vao m so hang cua ma tran :  ";
			cin >> m;
			cout << "Nhap vao n so cot cua ma tran :  ";
			cin >> n;

			//Nhap ma tran
			for (short i = 0; i < m; i++)
				for (short j = 0; j < n; j++) {
					cout << "a[" << i << "][" << j << "] = ";
					cin >> a[i][j];
				}
			///Xuat ma tran 
			cout << "Ma tran vua nhap: \n";
			for (short i = 0; i < m; i++) {
				for (short j = 0; j < n; j++) {
					cout << a[i][j] << " ";
				}
				cout << "\n";
			}

				//Tim vi tri hang co gia tri lon nhat
				short tongHang, tongHangMax, viTriHangMax;

				tongHangMax = 0;
				viTriHangMax = 0;
				for (short j = 0; j < n; j++)
					tongHangMax += a[0][j];

				for (short i = 1; i < m; i++) {
					tongHang = 0;
					for (short j = 0; j < n; j++)
						tongHang += a[i][j];
					if (tongHang > tongHangMax) {
						tongHangMax = tongHang;
						viTriHangMax = i;
					}
				}

				//Xóa hàng có tổng lớn nhất 
				if (viTriHangMax != m - 1)
					for (short i = viTriHangMax; i < m; i++)
						for (short j = 0; j < n; j++)
							a[i][j] = a[i + 1][j];
				m--;	

				//Xuat ma tran da xoa 1 hang
				cout << "\nHang co tong lon nhat la hang thu: "<<viTriHangMax;
				cout << "\nMa tran da xoa 1 dong: \n";
				for (short i = 0; i < m; i++){
					for (short j = 0; j < n; j++) 
						cout << a[i][j] << " ";
			
					cout << "\n";
				}
			}

#endif

   //Exercise 34
#if 0
#include<iostream>
		using namespace std;

		void nhapMaTran(short a[][10], short m, short n);
		void xuatMaTran(short a[][10], short m, short n);
		void deleteDongMax(short a[][10], short& m, short n);

		int main() {
			short a[10][10], m, n;
			cout << "Nhap vao m hang cua ma tran a: ";
			cin >> m;
			cout << "Nhap vao n cot cua ma tran a: ";
			cin >> n;

			nhapMaTran(a, m, n);
			cout << "Ma tran vua nhap: \n";
			xuatMaTran(a, m, n);

			

			deleteDongMax(a, m, n);
			cout << "Ma tran sau khi xoa dong lon nhat: "<< "\n";
			xuatMaTran(a, m, n);


		}

		void nhapMaTran(short a[][10], short m, short n) {
			for (short i = 0; i < m; i++)
				for (short j = 0; j < n; j++) {
					cout << "a[" << i << "][" << j << "] = ";
					cin >> a[i][j];
				}
		}
		void xuatMaTran(short a[][10], short m, short n) {
			for (short i = 0; i < m; i++)
			{
				for (short j = 0; j < n; j++) {
					cout << a[i][j] << " ";
				}
				cout << "\n";
			}
		}

		void deleteDongMax(short a[][10], short& m, short n) {
			short dongTongMax = 0, tongDong, viTriMax;
			for (short j = 0; j < m; j++)
				dongTongMax += a[0][j];

			for (short i = 1; i < m; i++) {
				tongDong = 0;
				for (short j = 0; j < n; j++)
					tongDong += a[i][j];
				if (tongDong > dongTongMax) {
					dongTongMax = tongDong;
					viTriMax = i;
				}
			}

				if (viTriMax != m -1)
					for (short i = viTriMax; i < m; i++)
						for (short j = 0; j < n; j++)
							a[i][j] = a[i + 1][j];
			m--;


		}

#endif

   //Exercise 35
#if 0
#include<iostream>
		using namespace std;

		void nhapMaTran(short a[][10], short m, short n);
		void xuatMaTran(short a[][10], short m, short n);
		void permutation(short a[][10], short m, short n);//Hoán vị dòng tổng lớn nhất và dòng có tổng nhỏ nhất

		int main() {
			short a[10][10], m, n;
			cout << "Nhap vao m hang cua ma tran a: ";
			cin >> m;
			cout << "Nhap vao n cot cua ma tran a: ";
			cin >> n;

			nhapMaTran(a, m, n);
			cout << "Ma tran vua nhap: \n";
			xuatMaTran(a, m, n);



			permutation(a, m, n);
			cout << "Ma tran sau khi hoan vi dong co tong lon nhat va dong co tong nho nhat: " << "\n";
			xuatMaTran(a, m, n);


		}

		void nhapMaTran(short a[][10], short m, short n) {
			for (short i = 0; i < m; i++)
				for (short j = 0; j < n; j++) {
					cout << "a[" << i << "][" << j << "] = ";
					cin >> a[i][j];
				}
		}
		void xuatMaTran(short a[][10], short m, short n) {
			for (short i = 0; i < m; i++)
			{
				for (short j = 0; j < n; j++) {
					cout << a[i][j] << " ";
				}
				cout << "\n";
			}
		}

		void permutation(short a[][10], short m, short n){
			short tongDong = 0, tongDongMin = 0, tongDongMax = 0;
			short viTriDongMin = 0, viTriDongMax = 0;
			
			//tim dong co tong lon nhat
			for (short j = 0; j < n; j++)
				tongDongMax += a[0][j];

			for (short i = 0; i < m; i++) {
				tongDong = 0;
				for (short j = 0; j < n; j++)
					tongDong += a[i][j];
				if (tongDong > tongDongMax) {
					tongDongMax = tongDong;
					viTriDongMax = i;
				}
			}

			//tim dong co tong be nhat
			for (short j = 0; j < n; j++)
				tongDongMin += a[0][j];

			for (short i = 0; i < m; i++) {
				tongDong = 0;
				for (short j = 0; j < n; j++)
					tongDong += a[i][j];
				if (tongDong < tongDongMin) {
					tongDongMin = tongDong;
					viTriDongMin = i;
				}
			}

				for (short i = 0; i < m; i++) {
					short tam = a[viTriDongMin][i];
					a[viTriDongMin][i] = a[viTriDongMax][i];
					a[viTriDongMax][i] = tam;
				}
			
			}
#endif

   //Exercise 35 thêm hoán vị cột
#if 0
#include<iostream>
		using namespace std;

		void nhapMaTran(short a[][10], short m, short n);
		void xuatMaTran(short a[][10], short m, short n);
		void permutation(short a[][10], short m, short n);//Hoán vị cột tổng lớn nhất và cột có tổng nhỏ nhất

		int main() {
			short a[10][10], m, n;
			cout << "Nhap vao m hang cua ma tran a: ";
			cin >> m;
			cout << "Nhap vao n cot cua ma tran a: ";
			cin >> n;

			nhapMaTran(a, m, n);
			cout << "Ma tran vua nhap: \n";
			xuatMaTran(a, m, n);



			permutation(a, m, n);
			cout << "Ma tran sau khi hoan vi cot co tong lon nhat va cot co tong nho nhat: " << "\n";
			xuatMaTran(a, m, n);


		}

		void nhapMaTran(short a[][10], short m, short n) {
			for (short i = 0; i < m; i++)
				for (short j = 0; j < n; j++) {
					cout << "a[" << i << "][" << j << "] = ";
					cin >> a[i][j];
				}
		}
		void xuatMaTran(short a[][10], short m, short n) {
			for (short i = 0; i < m; i++)
			{
				for (short j = 0; j < n; j++) {
					cout << a[i][j] << " ";
				}
				cout << "\n";
			}
		}

		void permutation(short a[][10], short m, short n) {
			short viTriCotMax = 0, viTriCotMin = 0;
			short tongCot, tongCotMax = 0, tongCotMin = 0;

			for (short i = 0; i < n; i++)
				tongCotMax +=  a[i][0];

			for (short j = 0; j < n; j++) {
				tongCot = 0;
				for (short i = 0; i < m; i++)
					tongCot += a[i][j];
				if (tongCot > tongCotMax) {
					tongCotMax = tongCot;
					viTriCotMax = j;

				}
			}

			for (short i = 0; i < m; i++)
				tongCotMin += a[i][0];
			for (short j = 0; j < n; j++) {
				tongCot = 0;
				for (short i = 0; i < m; i++)
					tongCot += a[i][j];
				if (tongCot < tongCotMin) {
					tongCotMin = tongCot;
					viTriCotMin = j;
				}
			}

			for (short j = 0; j < n; j++) {
				short tam = a[j][viTriCotMin];
				a[j][viTriCotMin] = a[j][viTriCotMax];
				a[j][viTriCotMax] = tam;
			}

		}

#endif

	//Exercise 36
#if 0
#include<iostream>
		using namespace std;

		void nhapMaTran(short a[][10], short m, short n);
		void xuatMaTran(short a[][10], short m, short n);
		void replace(short a[][10], short m, short n, short x, short y);//thay thế

		int main() {
			short a[10][10], m, n;
			cout << "Nhap vao m hang cua ma tran a: ";
			cin >> m;
			cout << "Nhap vao n cot cua ma tran a: ";
			cin >> n;

			nhapMaTran(a, m, n);
			cout << "Ma tran vua nhap: \n";
			xuatMaTran(a, m, n);

			short x, y;
			cout << "Nhap vao x de thay the phan tu lon nhat cua cot: ";
			cin >> x;
			cout << "Nhap vao y de thay the phan tu nho nhat cua hang: ";
			cin >> y;

			replace(a, m, n,x ,y);
			cout << "Ma tran sau khi thay x voi Phan lon nhat cua cot va y voi phan tu nho nhat cua cot : " << "\n";
			xuatMaTran(a, m, n);


		}

		void nhapMaTran(short a[][10], short m, short n) {
			for (short i = 0; i < m; i++)
				for (short j = 0; j < n; j++) {
					cout << "a[" << i << "][" << j << "] = ";
					cin >> a[i][j];
				}
		}
		void xuatMaTran(short a[][10], short m, short n) {
			for (short i = 0; i < m; i++)
			{
				for (short j = 0; j < n; j++) {
					cout << a[i][j] << " ";
				}
				cout << "\n";
			}
		}
		void replace(short a[][10], short m, short n, short x, short y) {
			for (short j = 0; j < n; j++) {
				// Tim phan tu lon nhat trong cot
				short phanTuMax = a[0][j];
				short viTriPhanTuMax = 0;
				for (short i = 1; i < m; i++) {
					if (a[i][j] > phanTuMax) {
						phanTuMax = a[i][j];
						viTriPhanTuMax = i;
					}
				}
				// Thay the phan tu lon nhat bang x
				a[viTriPhanTuMax][j] = x;
			}

			for (short i = 0; i < m; i++) {
				// Tim phan tu nho nhat trong hang
				short phanTuMin = a[i][0];
				short viTriPhanTuMin = 0;
				for (short j = 1; j < n; j++) {
					if (a[i][j] < phanTuMin) {
						phanTuMin = a[i][j];
						viTriPhanTuMin = j;
					}
				}
				// Thay the phan tu nho nhat bang y
				a[i][viTriPhanTuMin] = y;
			}
		}

#endif




/*Hãy nhớ vòng lặp i trước j sau tức nó sẽ chạy i = giá trị đầu trước sau đó đến vòng lặp trong cùng là j
chạy hết điều kiện của j thì mới bắt đầu tăng i lên và xét tiếp xuống j. ví dụ ở bài 4 
                    NHẬP N = 3
* vòng lặp i ĐẦU TIÊN : -  i = 0 thỏa đk 
                        - j lúc này = 0 vì nó gán j = i (thỏa đk)
		                 - xuất a[i][j] tức a[i] là 0 a[j] là 0 
		                  là in ra số ở vị trí a[0][0]
tiếp  :(i = 0)  i lúc này vẫn là 0 vì j dang còn thỏa đk < n                
                         - j lúc này tăng lên = 1  (thỏa đk j < n)
		                 - xuất a[i][j] tức a[i] là 0 a[j] là 1
		                  là in ra số ở vị trí a[0][1]		  
tiếp  :(i = 0)  i lúc này vẫn là 0 vì j dang còn thỏa đk < n
						 - j lúc này tăng lên = 2  (thỏa đk j < n)
						 - xuất a[i][j] tức a[i] là 0 a[j] là 2
						  là in ra số ở vị trí a[0][2]	
tiếp  :(i = 0)  i lúc này vẫn là 0 nhưng đến j
						 - j lúc này tăng lên = 3  (k thỏa đk j < n)
						 - ko xuất a[i][j] và thoát khỏi vòng lặp trong
						 là j và thực hiện tiếp vòng lặp i  
						 
* Vòng lặp i lần 2 vì j ko còn thỏa đk ở lần 1 nên tăng i lên = 1 và tiếp tục xét j : 
                        -  i = 1 thỏa đk (i < n)
						- j lúc này = 1 vì nó gán j = i (thỏa đk)
						 - xuất a[i][j] tức a[i] là 1 a[j] là 1
						  là in ra số ở vị trí a[1][1]
tiếp  :(i = 0)  i lúc này vẫn là 1 vì j dang còn thỏa đk < n
						 - j lúc này tăng lên = 2  (thỏa đk j < n)
						 - xuất a[i][j] tức a[i] là 1 a[j] là 2
						  là in ra số ở vị trí a[1][2]
tiếp  :(i = 0)  i lúc này vẫn là 1 vì j dang còn thỏa đk < n
						 - j lúc này tăng lên = 3  (ko thỏa đk j < n)
						 - ko xuất a[i][j] và thoát khỏi vòng lặp trong
						 là j và thực hiện tiếp vòng lặp i  	
* Vòng lặp i gần cuối vì j ko còn thỏa đk ở lần 2 nên tăng i lên = 2 thỏa < là 2 < 3 và tiếp tục xét j :
						-  i = 2 thỏa đk (i < n)
						- j lúc này = 2 vì nó gán j = i (thỏa đk)
						 - xuất a[i][j] tức a[i] là 2 a[j] là 2
						  là in ra số ở vị trí a[2][2]
tiếp  :i vẫn = 2  vì j dang còn thỏa đk < n
						 - j lúc này tăng lên = 3  (ko thỏa đk j < n)
						 - ko xuất a[i][j] và thoát khỏi vòng lặp trong
	 					 là j và thực hiện tiếp vòng lặp i
*Vòng lặp cuối vì ở trước j ko thỏa đk nên nó thoát vòng lặp trong là j
và chạy ra thực hiện vòng lặp i, i lúc này = 3 không thỏa đk < n tức (3 < 3)
nên không thực hiện vòng lặp j và kết thúc vòng lặp tại i = 3.

*Và cứ như vậy cho đến i từ 0 đế n -1 là dừng lại*/