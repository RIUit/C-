#include<iostream>
using namespace std;


int main() {
	long long n, s;
	cin >> n >> s;

	if (s % n == 0) {
		cout << s / n << endl;
	}
	else
		cout << s / n + 1 << endl;


	system("pause");

	return 0;
}