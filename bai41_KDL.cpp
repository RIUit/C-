#include<iostream>
using namespace std;

int main() {
	int n, tong = 0,dem=0;
	cin >> n;
	char kitu;
	while(cin>>kitu){
	
		if (kitu >= '0' && kitu <= '9') {
			tong += (kitu - '0');
		}
		if (kitu >= 'a' && kitu <= 'z')
			dem++;
	}
	cout << dem << endl;
	cout << tong << endl;


	system("pause");

	return 0;
}