/*	Cho biết điểm kiểm tra Tin học của 1 em học sinh là a, b, c, d 
	(2 điểm a, b hệ số 1, c là điểm hệ số 2, d là điểm hệ số 3).

	In ra Kết quả học tập môn Tin học của em đó. Nếu điểm tổng kết >=8 đạt kết quả Giỏi,
	<8 và >=6,5 đạt kết quả Khá, <6,5 và >=5 đạt kết quả Trung Bình, <5 đạt kết quả Yếu.

	Điểm trung bình được tính bằng tổng hệ số nhân vs điểm chia cho tổng hệ số.				*/
#include<iostream>
using namespace std;


int main() {
	double a, b, c, d;
	double tb;

	cin >> a >> b >> c >> d;

	tb = (a + b + c * 2 + d * 3) / 7;

	if (tb >= 8)
		cout << "GIOI\n";
	else if (tb >= 6.5)
		cout << "KHA\n";
	else if (tb >= 5)
		cout << "TRUNG BINH\n";
	else
		cout << "YEU\n";

	system("pause");

	return 0;
}