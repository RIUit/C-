#include<iostream>
#include<algorithm>
using namespace std;


int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int max1 = max({ a,b,c });
	int min1 = min({ a,b,c });
	
	cout << min1 << " " << a + b + c - min1 - max1 << " " << max1 << endl;

	system("pause");
	return 0;
}