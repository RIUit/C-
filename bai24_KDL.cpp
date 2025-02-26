#include<iostream>
#include<algorithm>
using namespace std;


int main() {
	long long d1, d2, d3,t1,t2,t3,t4;
	cin >> d1 >> d2 >> d3;

	t1 = d1 + d2 + d3;
	t2 = 2 * d1 + 2 * d3;
	t3 = 2 * d2 + 2 * d1;
	t4 = 2 * d2 + 2 * d3;

	cout << min({ t1,t2,t3,t4 }) << endl;
	return 0;
}