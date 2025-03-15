#include <iostream>
using namespace std;
using ll=long long;

ll giaiThua(int n){
	if(n==0)
		return 1;
	ll tich=1;
	for(int i=n-1;i>0;i--){
		tich*=i;
	}
	return tich;
}
int main() {
    int n;
    cin >> n;  
    
    int arr[n];  
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    
    ll result = 1;
    const ll MOD = 1e9+7;  // 10^9 + 7
    
    for (int i = 0; i < n; i++) {
        result = (result% MOD * giaiThua(arr[i]))% MOD;
    }
    
    cout << result << endl;
    
    return 0;
}
