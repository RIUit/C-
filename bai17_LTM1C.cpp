#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int original = num;
    int rev = 0;
    if(num<10) 
		return true;
   	 while (num > 0) {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }
    
    
    return original == rev;
}

int main() {
    int n;
    cin >> n;  
    
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];  
    }
    
    for (int i = 0; i < n; i++) {
        if (isPalindrome(arr[i])) {
            cout << arr[i] << endl;
            break;
        }
    }
    
    for (int i = n - 1; i >= 0; i--) {
        if (isPalindrome(arr[i])) {
            cout << arr[i] <<endl;
            break;  
        }
    }
    
    return 0;
}
