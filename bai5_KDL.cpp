/*	Hãy tính khoảng cách Euclid giữa 2 điểm trong hệ tọa độ Oxy
	Đầu vào:Tọa độ của 2 điểm (x1, y1) và (x2, y2) là các số nguyên
	Đầu ra:In ra khoảng cách giữa 2 điểm, lấy độ chính xác 2 số sau dấu phẩy.
	Ràng buộc:-10^6 ≤ xi , yi ≤ 10^6											*/
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;


int main() {
	int x1, y1,x2,y2;
	double d;

	//Input:Nhap toa do 2 diem
	cin >> x1 >> y1 >> x2 >> y2;

	//Processing:Khoang cach giua 2 diem 
	d = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));

	//Output:Khoang cach 2 diem
	cout << fixed << setprecision(2) << d << endl;

	system("pause");

	return 0;
}