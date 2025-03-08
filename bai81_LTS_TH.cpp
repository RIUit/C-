#include<iostream>
#include<cmath>
using namespace std;


bool chuSoTang(int n) {
    int max = 10;
    while(n > 0) {
        int chuso = n % 10;
        if (chuso > max)
            return false;
        max = chuso;
        n /= 10;
    }
    return true;
}
bool isNguyenTo(int n) {
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main() {
    int a, b;
    cin >> a >> b;
   
    for (int i = a; i <= b; i++) {
        if (chuSoTang(i)&&isNguyenTo(i))
            cout << i << " ";
    }
}