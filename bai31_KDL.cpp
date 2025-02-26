#include<iostream>
using namespace std;

int main() {
	int a1, a2, a3, b1, b2, b3,n;
	cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n;

	int cup, chuong,ke_cup,ke_chuong;
	cup = a1 + a2 + a3;
	chuong = b1 + b2 + b3;

	if (cup % 5 == 0)
		ke_cup = cup / 5;
	else
		ke_cup = cup / 5 + 1;

	if (chuong % 10 == 0)
		ke_chuong = chuong / 10;
	else
		ke_chuong = chuong / 10 + 1;

	if (ke_cup + ke_chuong <= n)
		cout << "YES\n";
	else
		cout << "NO\n";


	return 0;
}