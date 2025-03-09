#include<iostream>
#include<iomanip>
using namespace std;


int main() {
	int h, m, k;
	cin >> h >> m >> k;
	k %= 784;
	m = m + k;
	h = h + m / 28;
	m = m % 28;

	if (h >= 28) {
		h = h - 28;
	}

	cout << setfill('0') << setw(2) << h << "h:" << setfill('0') << setw(2) << m << "m" << endl;



	system("pause");

	return 0;
}