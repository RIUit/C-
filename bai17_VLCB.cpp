/*	Cho số nguyên N, hãy đếm xem mỗi chữ số nguyên tố (2, 3, 5, 7) của N xuất hiện bao nhiêu lần và 
	in ra theo thứ tự xuất hiện trong N, nếu chữ số nào không xuất hiện thì không in.
		Đầu vào:Dòng duy nhất chứa N
		Giới hạn:0<=N<=10^18
		Đầu ra:In ra các chữ số nguyên tố kèm số lần xuất hiện của nó									*/
#include<iostream>
using namespace std;

int main() {
	long long n;
	cin >> n;

	long long tam = n;
	int dem2 = 0, dem3 = 0, dem5 = 0, dem7 = 0;

	while (tam > 0) {
		tam = tam % 10;
		
		if (tam == 2)
			dem2++;
		else if (tam == 3)
			dem3++;
		else if (tam == 5)
			dem5++;
		else
			dem7++;
	}
	

	return 0;

}