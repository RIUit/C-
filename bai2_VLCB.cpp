#include<iostream>
#include<cmath>
using namespace std;


int main() {
	int n;

	cin >> n;

	for (int i = 0; i <= n; i += 3)
		if (i % 3 == 0)
			cout << i << " ";
	cout << endl;

	for (int i = 0; i <= n; i += 1)
		if (pow(2, i) <= n)
			cout << pow(2, i) << " ";



	system("pause");

	return 0;
}