/*	Cho 3 cạnh a, b, c của một tam giác, nếu tam giác đã cho là tam giác đều thì in ra 1,
	tam giác cân thì in ra 2, tam giác vuông thì in ra 3, tam giác thường in ra 4, trường hợp
	tam giác nhập vào không hợp lệ thì in ra "INVALID".											*/
#include<iostream>
#include<cmath>
using namespace std;


int main() {
	int a, b, c;

	cin >> a >> b >> c;

	if (a + b > c && b + c > a && a + c > b) {
		if (a == b && a == c)
			cout << 1 << endl;
		else if (a == b || b == c || c == a)
			cout << 2 << endl;
		else if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
			cout << 3 << endl;
		else
			cout << 4 << endl;
	}
	else
		cout << "INVALID\n";

	system("pause");

	return 0;
}