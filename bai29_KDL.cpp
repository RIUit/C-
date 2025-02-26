#include<iostream>
using namespace std;


int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	int q = b / a;
	if (a * q == b && b * q == c && c * q == d)
		cout << "YES\n";
	else
		cout << "NO\n";


	return 0;
}