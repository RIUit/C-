#include<iostream>
using namespace std;

bool sodep(int n) {
    int chuSoCuoi = n % 10; 
    bool isEven = (chuSoCuoi % 2 == 0); 

    while (n > 0) {
        int chuSo = n % 10;  
        if ((chuSo % 2 == 0) != isEven) { 
            return false;
        }
        n /= 10;  
    }
    return true; 
}
int main() {
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (sodep(i)) {
            cout << i << " ";
        }
    }
}