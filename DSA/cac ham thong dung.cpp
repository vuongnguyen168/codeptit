//cac ham thong dung trong C++
#include<bits/stdc++.h>
using namespace std;

//min_element: tim kiem phan tu nho nhat trong mang
//=> tra ve vi tri con tro: giai tham chieu dung *
//*max_element
//swap
//sort: mac dinh la tang dan
//=> muon giam dan thi sort(a,a+n,greater<int>());

//find
//binary_search
//lower_bound: >= x tra ve vi tri con tro nen giai tham chieu dung *it
//=> muon tim vi tri thi (it-a)
//upper_bound: >x

//fill: gan gia tri cho mang hoac vecto
//merge: chi dung cho 2 vector da sap xep
		/*
		Vi du:
		int a[5]={1,3,4,4,5};
		int b[3]={1,2,3};
		int c[8];
		merge(a,a+5,b,b+3,c);
		for(int x:c) cout<<x;
		*/
int n, k, ok,a[100];
void ktao(){
	for(int i=1;i<=n;i++){
		a[i]=n-i+1;
	}
}

int main(){
	cin>>n;
//	ok=1;
	ktao();
	do{
		for(int i=1;i<=n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}while(prev_permutation(a+1,a+n+1));
}
