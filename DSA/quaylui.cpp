#include<bits/stdc++.h>
using namespace std;
int n,a[10001],k;
/* Quay lui sinh nhi phan
void print(){
	for(int i=1;i<=n;i++){
		cout<<a[i];
		
	}
	cout<<endl;
}
void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n){
			print();
		}
		else Try(i+1);
	}
}
*/

void print(){
	for(int i=1;i<=k;i++){
		cout<<a[i];
	}
	cout<<endl;
}
void Try(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			print();
		}
		else Try(i+1);
	}
}
int main(){
	cin>>n;
	cin>>k;
	Try(1);
}
