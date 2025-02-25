/*	Cho kí tự c, nếu kí tự c là chữ cái in thường thì chuyển nó thành chữ cái in hoa tương ứng và 
	ngược lại nếu c là chữ cái in hoa thì chuyển nó thành chữ cái in thường tương ứng. Trường hợp kí
	tự nhập vào không phải là chữ cái thì không thay đổi nó.

*/
#include<iostream>
using namespace std;


int main() {
	char c;
	cin >> c;

	if (c >= 'a' && c <= 'z')
		cout << (char)toupper(c) << endl;
	else if (c >= 'A' && c <= 'Z')
		cout << (char)tolower(c) << endl;
	else
		cout << c << endl;


	system("pause");

	return 0;
}