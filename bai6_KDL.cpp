/*Cho một số nguyên không âm N. Bạn hãy thực hiện viết câu lệnh để kiểm tra các điều kiện sau :
1.N có phải là số chẵn? 
2.N có phải là số vừa chia hết cho 3 vừa chia hết cho 5? 
3.N có phải là số chia hết 3 nhưng không chia hết cho 7?
4.N có phải là số chia hết cho 3 hoặc 7?
5.N là số lớn hơn 30 và nhỏ hơn 50? 
6.N có phải là số không nhỏ hơn 30 và chia hết cho ít nhất một trong 3 số 2, 3, 5? 
7.N có phải là số có 2 chữ số có chữ tận cùng là một số nguyên tố?
8.N có phải là số không vượt quá 100 và chia hết cho 23?
9.N không thuộc đoạn [10, 20]?
10.N có chữ số tận cùng là bội số của 3?
	Đầu vào:Số nguyên dương N
	Ràng buộc: 1<=N<=10^6
	Đầu ra:In ra 10 dòng, mỗi dòng là "YES" hoặc "NO" tương ứng với 10 điều kiện.Nếu N 
	thỏa mãn điều kiệnthứ i thì dòng i in ra YES, ngược lại in ra NO.							*/
#include<iostream>
using namespace std;


int main() {
	int n;

	//Input: so nguyen N
	cin >> n;

	//Processing and Output :
	// 1.
	if (n % 2 == 0) 
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	// 2.
	if (n % 3 == 0 && n % 5 == 0)
		cout << "YES\n";
	else
		cout << "NO\n";
	// 3.
	if (n % 3 == 0 && n % 7 != 0)
		cout << "YES\n";
	else
		cout << "NO\n";
	// 4.
	if (n % 3 == 0 || n % 7 == 0)
		cout << "YES\n";
	else
		cout << "NO\n";
	// 5.
	if (n > 30 && n < 50)
		cout << "YES\n";
	else
		cout << "NO\n";
	// 6.
	if (n >= 30 && (n % 2 == 0 || n % 3 == 0 || n % 5 == 0))
		cout << "YES\n";
	else
		cout << "NO\n";
	// 7.
	int res = n % 10;
	if (n >= 10 && n <= 99 && (res == 2 || res == 3 || res == 5 || res == 7))
		cout << "YES\n";
	else
		cout << "NO\n";
	// 8.
	if (n <= 100 && n % 23 == 0)
		cout << "YES\n";
	else
		cout << "NO\n";
	// 9.
	if (!(n < 20 && n>30))
		cout << "YES\n";
	else
		cout << "NO\n";
	// 10.
	if (res % 3 == 0)
		cout << "YES\n";
	else
		cout << "NO\n";


	system("pause");

	return 0;
}
