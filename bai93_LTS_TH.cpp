#include<iostream>
#include<cmath>
using namespace std;

long long ucln(long long a,long long b) {
    while (b>0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    long long uoc_ab = ucln(a, b);
    long long uoc_ab_c = ucln(uoc_ab, c);
    long long uoc_abc_d = ucln(uoc_ab_c, d);
    cout << uoc_abc_d;
    return 0;
}