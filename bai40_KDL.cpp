#include<iostream>
using namespace std;


int main() {
    int n;
    long long thanhTien = 0;
    cin >> n;
    if (n >= 1000)
        thanhTien = n * 4500 + 1200000;
    else if (n >= 800)
        thanhTien = n * 3900 + 900000;
    else if (n >= 500)
        thanhTien = n * 3700 + 800000;
    else
        thanhTien = n * 3300;

    cout << thanhTien << endl;
    system("pause");

    return 0;
}