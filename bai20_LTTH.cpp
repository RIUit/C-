#include<iostream>
#include<cmath>
using namespace std;


bool isChinhPhuong(long long n) {
	int can = sqrt(n);
	return 1ll * can * can == n;
}
int main() {
	long long n;
	cin >> n;
	if (isChinhPhuong(n))
		cout << "YES\n";
	else
		cout << "NO\n";
	
	system("pause");

	return 0;
}