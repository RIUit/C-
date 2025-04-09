#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	cin>>s;
	
	int dem=0;
	for(char x : s){
		if(isdigit(x)){
			dem+=x-'0';
		}
	}
	cout<<dem<<endl;
	return 0;
}
