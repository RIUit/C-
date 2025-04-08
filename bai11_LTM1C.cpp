#include <bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;



int main(){
	int n;
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	int max1=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int value=gcd(a[i],a[j]);
			max1=max(max1,value);
			if(value>max1){
				max1=value;
			}
		}
		
	}
	
	cout<<max1<<endl;
	
	return 0;
}
