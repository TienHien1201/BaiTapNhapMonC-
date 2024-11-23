//kiểm tra từng dòng cũng như quy chế hoạt động nhấn f10
//bước 1 nhấn f10 nó sẽ xuát phát từ main
//b2 f10(bài ngắn f10 còn bài dài thì nhấn f9 để kiểm tra chổ cần kt)
// b3 f10
// b4 f10
//........... 

#if 0
#include<iostream>
using namespace std;
int main() {
	int s = 0, i = 0, a = 3;
	while (i < a++){
		i++;
	if (i++ % 2 == 0)
		continue;
	else
		s += ++i;
	}
	cout << s;
}
#endif
#include<iostream>
using namespace std;
int main() {
	static int a;
	short b;
	do {
		b = a++ + 3;
		b *= 6;
		a += b % 7;
		cout << a << " " << b << " ";
	} while (a < 11);
}