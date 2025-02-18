/*	Cho 2 số nguyên a và b. Bạn hãy tìm 2 số sau, số thứ 1 là số lớn nhất <= a 
	mà chia hết cho b, số thứ 2 là số nhỏ nhất >=a mà chia hết cho b. Chú ý các 
	bạn không được dùng vòng lặp.												*/
#include<iostream>
using namespace std;


int main() {
	int a, b;
	int res1, res2;
	//Input: so nguyen a,b
	cin >> a >> b;

	//Processing:
	res1 = a / b * b;

	if (a % b == 0)
		res2 = a;
	else
		res2 = res1 + b;
		
	//Output:
	cout << res1 << " " << res2 << endl;

	
	
	system("pause");

	return 0;
}