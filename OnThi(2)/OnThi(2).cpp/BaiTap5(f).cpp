
#if 0	
#include<iostream>
using namespace std;

void nhapDay(short a[][10], short n, short m);
void xuatDay(short a[][10], short n, short m);
bool ptMax(short a[][10], short n, short i, short m, short& max);

int main() {
	short a[10][10], n, m;
	cout << "Nhap vao n so hang cua ma tran a: ";
	cin >> n;
	cout << "Nhap vao m so cot cua ma tran a: ";
	cin >> m;

	nhapDay(a, n, m);
	cout << "Day vua nhap: \n";
	xuatDay(a, n, m);

	short i, max;
	cout << "Nhap vao hang thu i cua ma tran a: ";
	cin >> i;
	bool kqPtMax = ptMax(a, n, i, m, max);
	if (!kqPtMax)
	{
		cout << "Nhap sai so hang.";
	}
	else
		cout << "\nSo lon nhat hang " << i << " la " << max;




}

void nhapDay(short a[][10], short n, short m) {
	for (short i = 0; i < n; i++)
		for (short j = 0; j < m; j++) {
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
}
void xuatDay(short a[][10], short n, short m) {
	for (short i = 0; i < n; i++) {
		for (short j = 0; j < m; j++) {
			cout << a[i][j] << " ";
		}

		cout << "\n";
	}

}
bool ptMax(short a[][10], short n, short i, short m, short& max) {
	if (i >= 0 && i < n) {
		max = a[i][0];
		for (short j = 1; j < m; j++)
			if (a[i][j] > max)
				max = a[i][j];

		return true;
	}
	else
		return false;
}



#endif // 1
