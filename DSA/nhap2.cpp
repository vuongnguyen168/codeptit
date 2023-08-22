#include<bits/stdc++.h>
using namespace std;
int a[1001],n,k;
int b[1001];
void out(){
	for(int i=1;i<=k;i++){
		cout<<b[a[i]]<<" ";
	}
	cout<<endl;
}
void sinh(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			out();
		}
		else{
			sinh(i+1);
		}
	}
}
int main(){
	cin>>n>>k;
	a[0]=0;
	set<int>s;
	for(int i=0;i<n;i++){
		int y;cin>>y;
		s.insert(y);
	}
	n=s.size();
	int i=1;
	for(auto x : s){
		b[i]=x;
		++i;
	}
	sinh(1);

	
}
