/*	Công thức chuyển đơn vị đo nhiệt độ từ C sang F như sau: F = (C * 9 / 5) + 32.
	Viết chương trình C cho phép nhập vào nhiệt độ đo theo độ C là số nguyên dương không 
	quá 10^6, thực hiện chuyển sang đơn vị đo độ F và in ra màn hình. In ra kết quả với 2 
	chữ số sau dấu phẩy thập phân			*/
#include<iostream>
#include<iomanip>
using namespace std;


int main() {
	int c;
	double f;

	//Input:So nguyen C
	cin >> c;

	//Processing:
	f = (c * 9.0 / 5) + 32;

	//Output:Gia tri cua F
	cout << fixed << setprecision(2) << f << endl;
	system("pause");

	return 0;
}