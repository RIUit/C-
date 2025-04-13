#include<iostream>
#include<ctime>
using namespace std;

void khoiTao(int *p,int n){
	for(int i = 0; i < n; i++){
		*(p + i) = rand() % 31;
	}
}
void xuatMang(int *p,int n){
	for(int i = 0; i < n; i++){
		cout << p[i] << " ";
	}
	cout << endl;
}	
int timMin(int a[], int n){
	if(n == 1) return a[0];
	int min = timMin(a, n - 1);
	return a[n-1] < min ? a[n-1] : min;
}
int* viTriMin(int*p, int n){
	int*min = p;
	for(int i = 1; i < n; i++){
		if(*min > *(p+i))
			min = p + i;
	}
	return min;
}
int* viTriMax(int*p, int n){
	int*max = p;
	for(int i = 1; i < n; i++){
		if(*max < *(p+i))
			max = p + i;
	}
	return max;
}
void fibo(int*p,int n){
	if(n > 0)
		p[0] = 0;
	if(n > 1)
		p[1] = 1;
	for(int i = 2; i < n; i++){
		p[i] = p[i-1] + p[i-2];
	}
}
void daoNguocMang(int *p, int l, int r){
	if(l >= r) return;
	swap(p[l],p[r]);
	daoNguocMang(p,l+1,r-1);
}
int * timKiem(int * p, int n ,int x){
	for(int i = 0; i < n; i++){
		if(*(p+i) == x)
			return p + i;
	}
	return NULL;
}
int * timKiem1(int * p, int n ,int x){
	if(n == 0) return NULL;
	if(*(p + n - 1) == x)
		return p + n - 1;
	return timKiem(p, n - 1, x);
}
int main(){
	srand(time(0));
	int*a = new int[30];
	int n;
	cin >> n;
	khoiTao(a,n);
	xuatMang(a,n);
	int * vtMax = viTriMax(a,n);
	cout << "Vi tri max " << *vtMax << " : " << vtMax << endl;
	int * vtMin = viTriMin(a,n);
	cout << "Vi tri min " << *vtMin << " : " << vtMin << endl;
	
	cout << "Mang co " << n << " so fibo : ";
	fibo(a,n);
	xuatMang(a,n);
	
	cout << "Mang duoc dao nguoc : ";
	daoNguocMang(a,0,n-1);
	xuatMang(a,n);
	
	int x;
	cout << "Nhap so can tim kiem : ";
	cin >> x;
	int * tim = timKiem(a,n,x);
	if(*tim > 0)
		cout << "Tim thay "<< x <<" o dia chi : " << tim <<endl;
	else
		cout << "Khong tim thay ! \n";
	delete []a;
	delete vtMax;
	delete vtMin;
	delete tim;
	return 0;
} 
