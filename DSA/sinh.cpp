#include<bits/stdc++.h>
using namespace std;
int n,k,a[1001],ok;





/*sinh ke tiep
void ktao(){
	for(int i=1;i<=n;i++)
	{
		a[i]=0;
	}	
}
void sinh(){
	int i=n;
	while(i>=1&&a[i]==1){
		a[i]=0;
		--i;
	}
	if(i==0){
		ok=0;
	}
	else{
		a[i]=1;
	}
}*/


/*sinh to hop
void ktao(){
	for(int i=1;i<=k;i++){
		a[i]=i;
	}	
}
void sinh(){
	int i=k;
	while(i>=1&&a[i]==n-k+i){
		--i;
	}
	if(i==0)
	{
		ok=0;
	}
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;
		}
	}
}*/

/*sinh hoan vi
void ktao(){
	for(int i=1;i<=n;i++){
		a[i]=i;
	}
}
void sinh(){
	int i=n-1;
	while(i>=1 && a[i]>a[i+1]){
		--i;
	}
	if(i==0){
		ok=0;
	}
	else{
		int j=n;
		if(a[i]>a[j]) --j;
		swap(a[i],a[j]);
		reverse(a+i+1,a+n+1);
	}
}*/
