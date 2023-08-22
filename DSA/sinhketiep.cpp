#include<bits/stdc++.h>
using namespace std;
int n,a[1001],ok;
bool check(int n){
	int sodu,somoi;
	int m=n;
	while(n>0){
		somoi=somoi*10+n%10;
		n=n/10;
		
	}
	if(somoi=m) return true;
	else return false;
}
void ktao(){
	for(int i=1;i<=n;i++)
	{
		a[i]=0;
	}
}
void sinh(){
	int i=n;
	while(i>=1 && a[i]==1)
	{
		a[i]=0;
		--i;
	}
	if(i==0){
		ok=0;//cau hinh cuoi cung
	}
	else{
		a[i]=1;
	}
}
int main (){
	cin>>n;
	ok=1;
	while(ok){
		for(int i=1;i<=n;i++){
			cout<<a[i];
			check();
		}
		sinh();
		cout<<endl;
	}
	
}
