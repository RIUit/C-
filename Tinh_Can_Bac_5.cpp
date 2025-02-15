//Tinh can bac 5
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;


int main() {
	int n;
	double d;

	cin >> n;

	d =pow((double)n,(double)1/5);

	cout << fixed << setprecision(2) << d << endl;
	

	system("pause");
	return 0;
}