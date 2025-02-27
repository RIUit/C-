#include<iostream>
using namespace std;


int main() {
	int c1, c2, c3, c4, c5;
	cin >> c1 >> c2 >> c3 >> c4 >> c5;

	int sum = c1 + c2 + c3 + c4 + c5;

	if (sum % 5 == 0 && sum > 0) {
		int b = sum / 5;
		cout << b << endl;
	}
		
	else
		cout << -1 << endl;

	system("pause");
	
	return 0;
}