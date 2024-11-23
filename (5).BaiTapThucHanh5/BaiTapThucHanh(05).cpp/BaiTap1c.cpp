#if 0
#include<iostream>
#include<cstdlib>
using namespace std;


int Max(int a[], int n);

int main() {
	int a[] = {10, 12, 13, 41, 5, 6};
	int n = sizeof(a) / sizeof(a[0]);

	cout << "Phan tu lon nhat trong day a la: "<<Max(a, n);
}


int Max(int a[], int n) {
	int Max = a[0];
	for (int i = 0; i < n; i++) {
		if (a[0] < a[i]) {
			Max = a[i];
		}
	}
	return Max;
}
#endif // 1
