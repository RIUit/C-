/*	Cho kí tự là chữ cái in hoa hoặc in thường, in ra kí tự kế tiếp sau nó trong bảng chữ cái ở dạng in thường,
	tức là kí tự nhập vào ở dạng in hoa hay in thường thì bạn đều in ra kí tự kế tiếp nó nhưng ở dạng in thường. 
	Coi kí tự kế tiếp của của chữ Z là chữ A.
*/
#include<iostream>
using namespace std;


int main() {
	char c;

	cin >> c;

	if (c == 'z' || c == 'Z')
		cout << "a" << endl;
	else
		cout <<(char)tolower(c+1) << endl;

	system("pause");

	return 0;
}