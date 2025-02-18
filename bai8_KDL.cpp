/*Nhập vào 2 số nguyên, in ra tổng, hiệu, tích, thương(lấy độ chính xác với 4 chữ số) của 2 số đó.
Bài này có thể bị sai do 2 nguyên nhân : 1. Khi tính tích bị tràn số, 2. Độ chính xác của thương.*/
#include<iostream>
#include<iomanip>
using namespace std;


int main() {
	long long a, b,hieu;
	long long tong,tich;
	double thuong;
	//Input: 2 so nguyen
	cin >> a >> b;

	//Processing
	tong = a + b;
	cout << tong << endl;
	hieu = a - b;
	cout << hieu << endl;
	tich = a * b;
	cout << tich << endl;
	if (b != 0) {
		thuong = a * 1.0 / b;
		cout << fixed << setprecision(4) << thuong << endl;
	}
	else
		cout << "INVALID" << endl;


	
	

	system("pause");

	return 0;
}