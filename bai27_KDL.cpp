#include<iostream>
using namespace std;


int main() {
	double a,res;
	cin >> a;

	res = a - (int)a;
	if (res >= 0.5)
		cout << (int)(a + 1) << endl;
	else
		cout << (int)(a) << endl;


	return 0;
}