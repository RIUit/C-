#include <iostream>
using namespace std;

bool isLowerCase(char c) {
    return c >= 'a' && c <= 'z';
}

bool isUpperCase(char c) {
    return c >= 'A' && c <= 'Z';
}

bool isDigit(char c) {
    return c >= '0' && c <= '9';
}

int main() {
    int n;
    cin >> n;  
    
    char arr[n]; 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  
    }
    
    int lowerCount = 0;  
    int upperCount = 0;  
    int digitCount = 0;  
    
    for (int i = 0; i < n; i++) {
        if (isLowerCase(arr[i])) {
            lowerCount++;
        } else if (isUpperCase(arr[i])) {
            upperCount++;
        } else if (isDigit(arr[i])) {
            digitCount++;
        }
    }
    
    cout << lowerCount << " " << upperCount << " " << digitCount << endl;
    
    return 0;
}
