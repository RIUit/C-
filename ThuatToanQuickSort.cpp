#include<iostream>
using namespace std;

//ham phan hoach lomuto : tra ve chi so cua khoa pirot
int partition(int a[],int l,int r){
	int i = l - 1,pirot=a[r];
	for(int j =  l;j < r ; j++){
		if(a[j] <= pirot){
			++i;
			swap(a[j],a[i]);
		}	
	}
	++i;
	swap(a[i],a[r]);
	return i;
}
void quicksort(int a[], int l, int r){
	if(l < r){
		int pos = partition(a,l,r);
		quicksort(a, l, pos - 1);
		quicksort(a, pos + 1, r);
	}
}

int main(){
	int n;cin>>n;
	int a[n];
	
	for(int &x : a) cin >> x;
	quicksort(a,0,n-1);
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	
	
	return 0;
}
