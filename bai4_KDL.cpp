/*	Cho bán kính R c?a hình tròn. Yêu c?u tính chu vi và di?n tích c?a hình tròn ?ó.
	L?y PI = 3.14
	In ra chu vi và di?n tích trên 1 dòng, k?t qu? l?y ?? chính xác 4 s? sau d?u ph?y	*/
#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int r;
	double c, s;

	//Input:Ban kinh duong tron
	cin >> r;

	//Processing:Tinh Chu vi va Dien tich hinh tron
	c = 2 * 3.14 * r;
	s = 3.14 * r * r;

	//Output:Gia tri cua C va S 
	cout << fixed << setprecision(4) << c << " " << s << endl;
	system("pause");

	return 0;
}