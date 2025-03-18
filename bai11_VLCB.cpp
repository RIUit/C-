#include<iostream>
using namespace std;


int main(){
	int n; cin >> n;
	int countLower=0,countUpper=0,countDigit=0,countSpecial=0;
	for(int i = 0; i < n; i++){
		char c; cin >> c;
   		if(c>='a'&&c<='z')
   			countLower++;
   		else if(c>='A'&&c<='Z') countUpper++;
   		else if(c>='0'&&c<='9')	countDigit++;
   		else countSpecial++;
	}
	
	cout<<countLower<<" "<<countUpper<<" "<<countDigit<<" "<<countSpecial<<endl;


	
	
	return 0;
}
