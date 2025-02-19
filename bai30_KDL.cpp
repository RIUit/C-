/**/
#include<iostream>
using namespace std;

int main() {
	int a1, a2, a3, b1, b2, b3;
	int n;

	//Nhap so ke
	cin >> n;

	//Processing
	int cup = a1 + a2 + a3;
	int hc = b1 + b2 + b3;
	int dem1 = 0, dem2 = 0;

	if (cup % 5 == 0)
		dem1 = cup % 5;
	else
		dem1 = cup % 5 + 1;

	if (hc % 10 == 0)
		dem2 = hc % 10;
	else
		dem2 = hc % 10 + 1;

	if (dem1 + dem2 <= n)
		cout << "YES\n";
	else
		cout << "NO\n";
	system("pause");

	return 0;
}