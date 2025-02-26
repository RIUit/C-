#include<iostream>
#include<algorithm>
using namespace std;


int main() {
	long long k2, k3, k5, k6;
	long long min256;

	cin >> k2 >> k3 >> k5 >> k6;

	min256=min({ k2,k5,k6 });

	long long tong256 = min256 * 256;

	long long tong32 = 32*min({ k3,k2 - min256 });

	cout << tong256 + tong32 << endl;

	return 0;
}