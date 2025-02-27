#include<iostream>
using namespace std;


int main() {
	int h, m;
	cin >> h >> m;

	cout << 1440 - (h * 60 + m) << endl;

	system("pause");

	return 0;
}