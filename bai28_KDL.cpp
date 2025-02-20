#include<iostream>
using namespace std;


int main() {
	int n, u1, d;
	long long un, sn;

	//Input:so n,u1,d
	cin >> n >> u1 >> d;

	//Processing
	un = u1 + 1ll * (n - 1) * d;
	sn = n * (u1 + un) / 2;

	//Output
	cout << sn << endl;
}
