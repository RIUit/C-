#include<iostream>
using namespace std;



int main(){
	int n;cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++) cin>>a[i];
	
	for (int i = 0; i < n; i++) {
    	bool ok = false;
    	for (int j = 0; j < i; j++) {
       		if (a[j] == a[i]) {
            	ok = true;
            	break;
        	}
    	}
    	if (!ok) {
      		cout << a[i] << " ";
    	}
	}
	
	return 0;
}
