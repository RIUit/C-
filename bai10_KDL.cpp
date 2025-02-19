/*	Cho 3 cạnh a, b, c là độ dài 3 cạnh của tam giác, kiểm tra xem a, b, c có 
	thể tạo thành một tam giác hợp lệ hay không?								*/
#include<iostream>
using namespace std;


int main() {
	int a, b, c;
	
	cin >> a >> b >> c;

	if (a + b > c && b + c > a && a + c > b) {
		cout << "YES\n";
	}
	else
		cout << "NO\n";
}