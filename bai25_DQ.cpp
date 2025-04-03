#include<iostream>
#include<vector>
using namespace std;

// 7 6 5 4 3 2 1 
int binarySearch(vector<int>v,int x,int l,int r){
	if(l>r) return 0;
	int mid=(l+r)/2;
	if(v[mid]==x) return 1;
	else if(v[mid]>x) return binarySearch(v,x,mid+1,r);
	else return binarySearch(v,x,l,mid-1);
}
int main(){
	//Nhap theo kieu giam dan
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	
	int x;
	cin>>x;
	cout<<binarySearch(v,x,0,n-1)<<endl;
	
	
	return 0;
}
