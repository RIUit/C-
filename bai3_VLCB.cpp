#include<iostream>
using namespace std;


int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
		cout << i << " ";

	cout << endl;

	int a = n;
	while (a>=0) {
		cout << a << " ";
		a--;
	}
	cout << endl;

	for (int i = 0; i <= n; i++) {
		if (i % 2 == 0)
			cout << i << " ";
	}
	cout << endl;

	int i = 0;
	while (i <= n) {
		if (i % 2 != 0)
			cout << i << " ";
		i++;
	}
	cout << endl;

	for (int i = 0; i <= n; i++) {
		if (i % 4 == 0)
			cout << i << " ";
	}
	cout << endl;

	for (int i = 0; i < n; i++) {
		cout << (char)('a' + i) << " ";
	}
	cout << endl;

	for (int i = 'z'-n+1; i <='z'; i++) {
		cout << (char)i << " ";
	}

	system("pause");

	return 0;
}