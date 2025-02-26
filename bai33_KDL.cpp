#include<iostream>
#include<algorithm>
using namespace std;


int main() {
	long long a, b, c, n;

	cin >> a >> b >> c >> n;

	if ((a + b + c + n) % 3 == 0) {
		long long res = (a + b + c + n) / 3;
		if (max({ a,b,c }) > res)
			cout << "NO\n";
		else
			cout << "YES\n";

	}
	else
		cout << "NO\n";

	return 0;
}