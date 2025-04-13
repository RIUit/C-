#include<iostream>
using namespace std;


void khoiTao(int **&p, int r, int c){
	p = new int *[r];
	for(int i = 0; i < r; i++){
		p[i] = new int [c];
	}
}
void giaiPhong(int **&p, int r, int c){
	for(int i = 0; i < r; i++){
		delete [] p[i];
	}
	delete [] p;
}
int chap(int n, int k){
	if(n == k || k == 0)
		return 1;
	return chap(n-1,k) + chap(n-1,k-1);
}
void Pascal(int **p,int h){
	for(int i = 0; i < h; i++){
		for(int j = 0; j <= i; j++){
			p[i][j] = chap(i,j);
		}
	}
}
void xuat(int **p, int h){
	for(int i = 0; i < h; i++){
		for(int j = 0; j <= i; j++){
			cout << p[i][j] << " ";
		}
		cout << endl;
	}
}
int main(){
	int h;
	cout << "Nhap h : ";
	cin >> h;
	
	int **p = new int *[h];
	for(int i = 0; i < h; i++){
		p[i] = new int [h];
	}
	Pascal(p,h);
	xuat(p,h);
	
	//Huy cap phat
	for(int i = 0; i < h; i++){
		delete [] p[i];
	}
	delete [] p;
	return 0;
}
