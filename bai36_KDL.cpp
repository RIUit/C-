#include<iostream>
using namespace std;


int main() {
	long long m,h,s;
	
	cin >> s;

	h = s / 3600;
	m = (s % 3600) / 60;
	s = s % 60;
	cout << h << "h : " << m << "m : " << s << "s" << endl;

	system("pause");

	return 0;
}