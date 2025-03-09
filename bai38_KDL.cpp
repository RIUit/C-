#include<iostream>
using namespace std;


int main() {
    int n; cin >> n;
    int demC = 0;
    int demDau = 0;
    char kitu;
    for (int i = 0; i < n; i++) {
        cin >> kitu;
        if (kitu == 'C') 
            demC++;
        if (kitu == '+') 
            demDau++;
    }
    if (demC >= 1 && demDau >= 2)
        cout << "YES\n";
    else
        cout << "NO\n";


    system("pause");

	return 0;
}