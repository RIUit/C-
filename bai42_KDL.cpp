#include<iostream>
using namespace std;

int main() {
	int h, w;
	double BMI = 0;
	cin >> w >> h;
	BMI = 1.0 * w / ((h / 100.0) * (h / 100.0));
	if (BMI < 18.5)
		cout << "Under weight\n";
	else if (BMI < 25)
		cout << "Normal\n";
	else if (BMI < 30)
		cout << "Over weight\n";
	else if (BMI < 35)
		cout << "Obesity 1\n";
	else if (BMI < 40)
		cout << "Obesity 2\n";
	else
		cout << "Extreme obesity\n";
	system("pause");

	return 0;
}