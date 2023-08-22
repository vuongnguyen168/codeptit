#include<bits/stdc++.h>
using namespace std;
int max(long long a,long long b){
	return (a>b)?a:b;
}
int ans(long long m,long long a[],long long  b[],long long  n){
	long long  i,t;
	long long  k[n+1][m+1];
	for(i=0;i<=n;i++)
	{
		for(t=0;t<=m;t++){
			if(i==0||t==0){
				k[i][t]=0;
			}
			else if(b[i-1]<=t){
				k[i][t]=max(a[i-1]+k[i-1][t-b[i-1]],k[i-1][t]);
			}
			else {
				k[i][t]=k[i-1][t];
			}
		}
	}
	return k[n][m];
}
int main(){
	long long n;
	long long m;
	long long  a[n],b[n];
	cin>>n>>m;
	for(long long  i=0;i<n;i++){
		
		cin>>b[i];
		cin>>a[i];
	}
	cout<<ans(m,a,b,n);
}
/*4
7
5 3
3 2
4 1
6 5*/
