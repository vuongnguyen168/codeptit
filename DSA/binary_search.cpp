#include<bits/stdc++>
//binary search
// tim kiem nhi phan
// cac phan tu duoc sap xep
int a[1001];
bool bs(int a[], int n, int x){
	int l=0, r=n-1;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]==x){
			return true;
		}
		//thang dung giua nho hon x => tim o ben phai => l=m+1
		else if(a[m]<x){
			l=m+1;
		}
		//tim o ben trai, r=m-1;
		else (a[m]>x){
			r=m-1;
		}
	}
	return false;
}
//binary_search(a+x,a+y,key)=>a[x]=>a[y-1]
//binary_search(v.begin(),v.end(),key)=>	
