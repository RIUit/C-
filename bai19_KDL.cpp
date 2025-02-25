//Domino
#include<iostream>
using namespace std;



int main() {
	long long m, n;
	cin >> m >> n;

	if (m % 2 == 0)
		cout << m / 2 * n << endl;
	else
		cout << m / 2 * n + n / 2 << endl;

	system("pause");

	return 0;
}