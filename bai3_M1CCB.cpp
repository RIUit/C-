#include<iostream>
#include<climits>
using namespace std;


int main(){
	int n;
	cin>>n;
	int a[n];
	
	int dem=0;
	int min=INT_MAX;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]<min){
			min=a[i];
			dem=1;
		}else if(a[i]==min){
			dem++;
		}
	}
	cout<<dem<<endl;
	
	
	return 0;
}
