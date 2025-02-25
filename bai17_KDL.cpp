/*	Cho một kí tự, bạn hãy kiểm tra kí tự nhập vào là chữ cái in hoa, in thường, chữ số hay kí tự
	đặc biệt (các kí tự không phải là chữ cái và chữ số)

	=> Nếu c là chữ cái in hoa in ra "UPPER". Nếu c là chữ cái in thường in ra "LOWER". Nếu c là chữ
	số in ra "DIGIT". Nếu c là kí tự đặc biệt in ra "SPECIAL".


*/
#include<iostream>
using namespace std;


int main() {
	char c;
	cin >> c;

	if (c >= 'a' && c <= 'z')
		cout << "LOWER" << endl;

	else if (c >= 'A' && c <= 'Z')
		cout << "UPPER" << endl;

	else if (c >= '0' && c <= '9')
		cout << "DIGIT" << endl;

	else
		cout << "SPECIAL" << endl;



	system("pause");

	return 0;
}