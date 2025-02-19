#include<iostream>
using namespace std;


int main() {
	long long n, tong = 0;

	cin >> n;

	for (int i = 1; i <= n; i++)
		tong += i;

	cout << tong << endl;

	system("pause");

	return 0;
}