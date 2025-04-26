#include<iostream>
using namespace std;


int main(){
	int n; cin>>n;
	int a[n];
	for(int i = 0; i < n; i++) cin>>a[i];
	
	for(int i = 0; i < n; i++){
		bool ok = false;
		for(int j = 0; j < i; j++){
			if(a[i] == a[j]){
				ok = true;
				break;
			}
		}
		if(!ok){
			int dem=0;
			for(int j = 0; j < n; j++){
				if(a[i] == a[j]) dem++;
			}
			cout << a[i] << " " << dem << endl;
		}
	}
	
	
	
	return 0;
}
