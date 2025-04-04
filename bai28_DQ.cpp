 	#include<iostream>
#include<vector>
using namespace std;

//	6
//	1 2 2 3 3 4
//	2

int vtDau(vector<int>v,int x,int l,int r){
	int dem=0;
	if(l>r) return -1;
	int mid=(l+r)/2;
	if(v[mid]==x){		//	tai vi tri mid co gia tri bang x 
		dem=vtDau(v,x,l,mid-1);
		if(dem!=-1) return dem;
		else return mid;
	}else if(v[mid]<x){
		return vtDau(v,x,mid+1,r);
	}else
		return vtDau(v,x,l,mid-1);
}
int vtCuoi(vector<int>v,int x,int l,int r){
	int dem=0;
	if(l>r) return -1;
	int mid=(l+r)/2;
	if(v[mid]==x){		//	tai vi tri mid co gia tri bang x 
		dem=vtCuoi(v,x,mid+1,r);
		if(dem!=-1) return dem;
		else return mid;
	}else if(v[mid]<x){
		return vtCuoi(v,x,mid+1,r);
	}else
		return vtCuoi(v,x,l,mid-1);
}
int main(){
	//Nhap theo kieu tang dan
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	
	int x;
	cin>>x;
	
	int first1=vtDau(v,x,0,n-1);
	int second1=vtCuoi(v,x,0,n-1);
	if(first1==-1&&second1==-1)
		cout<<0<<endl;
	else
		cout<<second1-first1+1<<endl;
	
	
	return 0;
}
