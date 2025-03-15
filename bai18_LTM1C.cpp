#include<iostream>
using namespace std;

int main() {
    int n;
    char c;
    
    cin>>n;
    cin>>c;
    
    char arr[n];  
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == c) {
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}
