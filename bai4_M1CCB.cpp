#include<iostream>
#include<cmath>

using namespace std;


int main(){
	int n;
	int min1=0,max1=0;
	cin>>n;
	
	int a[n];
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	long long x;cin>>x;
	for(int i=0;i<n;i++){
		if(a[i]<x)
			min1++;
		else if(a[i] > x)
			max1++;
	}
	cout<<min1<<endl;
	cout<<max1<<endl;
	
	return 0;
}
