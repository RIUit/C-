/*	Cho b�n k�nh R c?a h�nh tr�n. Y�u c?u t�nh chu vi v� di?n t�ch c?a h�nh tr�n ?�.
	L?y PI = 3.14
	In ra chu vi v� di?n t�ch tr�n 1 d�ng, k?t qu? l?y ?? ch�nh x�c 4 s? sau d?u ph?y	*/
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