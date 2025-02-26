#include<iostream>
using namespace std;


int main() {
	long long n, m;
	cin >> n >> m;

	long long min,max;
	max = n;
	min = n / 2;
	if (n % 2 != 0)
		min = min + 1;

	long long res = (min + m - 1) / m * m;
	if (res <= max)
		cout << res << endl;
	else
		cout << -1 << endl;

	system("pause");

	return 0;
}