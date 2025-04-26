	#include<iostream>
	#include<cmath>
	using namespace std;
	
	
	bool nt(long long n){
		if(n < 2) return false;
		for(int i = 2; i <= sqrt(n); i++){
			if(n % i == 0) return false;
		}
		return true;
	}
	
	int main(){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < n; i++){
			long long suml = 0, sumr = 0;
			for(int j = 0; j < i; j++){
				suml += a[j];
			}
			
			for(int k = i + 1; k < n; k++){
				sumr += a[k];
			}
			
			if(nt(suml) && nt(sumr)){
				cout << i <<" ";
			}
		}
		
		
		
		return 0;
	}
