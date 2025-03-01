#include<iostream>
using namespace std;


int main() {
	long long n;
	cin >> n;

	long long tam = n;
	while (tam > 0) {
		long long chuso = tam % 10;
		if (chuso == 2 || chuso == 3 || chuso == 5 || chuso == 7) {
		}else {
			cout << "29tech\n";
			break;
		}
		tam /= 10;
	}
	if (tam == 0)
		cout << "28tech\n";

	
	return 0;
}