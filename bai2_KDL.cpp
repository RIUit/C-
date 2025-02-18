//Cho ba số nguyên a , b và c, hãy tính S = a ( b + c ) + b ( a + c ).
#include<iostream>
using namespace std;


int main() {
	long long a, b, c;
	long long s;

	//Input:Nhap 3 so nguyen a,b,c
	cin >> a >> b >> c;

	//Processing
	s = a * (b + c) + b * (a + c);

	//Output:gia tri cua bieu thuc S
	cout << s << endl;

	system("pause");

	return 0;
}