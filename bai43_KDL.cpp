#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int a, b;
	char x;
	cin >> a >> b >> x;
	switch (x) {
	case '+': {
		long long tong = a + b;
		cout << a << " + " << b << " = " << tong << endl;
		break;
	}
	case '-': {
		int hieu = a - b;
		cout << a << " - " << b << " = " << hieu << endl;
		break;
	}
	case '*': {
		long long nhan = a * b;
		cout << a << " * " << b << " = " << nhan << endl;
		break;
	}
	case '/': {
		double thuong = a * 1.0 / b;
		cout << a << " / " << b << " = " << fixed << setprecision(2) << thuong << endl;
		break;
	}
	case '%':
		int du = a % b;
		cout << a << " % " << b << " = " << du << endl;
		break;
	}
	system("pause");

	return 0;
}