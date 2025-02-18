/*	Tính toán giá trị của biểu thức A(x) = x ^ 3 + 3x ^ 2 + x + 1 
	Với giá trị của x được nhập từ bàn phím, tính và in ra giá trị của biểu thức trên		*/

#include<iostream>
#include<cmath>
using namespace std;


int main() {
	int x;
	long long a;

	cin >> x;

	//Procesing
	a = pow(x, 3) + 3 * pow(x, 2) + x + 1;

	//Gia tri cua bieu thuc A(x)
	cout << a << endl;

	system("pause");

	return 0;
}