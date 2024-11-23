#if 0
#include<iostream>
using namespace std;

void ptMax(short a[], short n);



int main() {
	short n = 4;
	short a[] = { 2,3,4,1 };
	ptMax(a, n);
}

	//Tim phan tu lon nhat
void ptMax(short a[], short n) {
	int ptMax = a[0] , ptMin = a[0];
	for (short i = 0; i < n; i++)
		if (a[i] < a[0]) {
			ptMin = a[i];
		}
		else  {
			ptMax = a[i];
		}

	cout << "\nPhan tu lon nhat trong day a la: " << ptMax;
	cout << "\nPhan tu nho nhat trong day a la: " << ptMin;
}
	
	

#endif // 1


#if 0
#include<iostream>
	using namespace std;

	int ptMax(int a[], int n);
	int ptMin(int a[], int n);


	int main() {
		short n = 3;
		int a[] = { 1,2,3 };

		cout << "\nPhan tu lon nhat trong day a la: " << ptMax(a, n);
		cout << "\nPhan tu nho nhat trong day a la: " << ptMin(a, n);
	}

	//Tim phan tu lon nhat
	int ptMax(int a[], int n) {
		int ptMax = a[0];
		for (short i = 0; i < n; i++)
			if (a[i] > ptMax) {
				ptMax = a[i];
			}
		return ptMax;
	}

	//Tim phan tu nho nhat
	int ptMin(int a[], int n) {
		int ptMin = a[0];
		for (short i = 0; i < n; i++) {
			if (a[i] < ptMin) {
				ptMin = a[i];
			}
		}
		return ptMin;
	}
#endif // 1


