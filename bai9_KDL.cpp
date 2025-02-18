/*	Năm nhuận là năm chia hết cho 400 hoặc (chia hết cho 4 và không chia hết cho 100).
	Nhập vào N là một năm và kiểm tra xem N có phải là năm nhuận hay không?			*/
#include<iostream>
using namespace std;


int main() {
	int n;

	//Input:So nam 
	cin >> n;
	 
	//Processing and Output:
	if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	system("pause");

	return 0;
}