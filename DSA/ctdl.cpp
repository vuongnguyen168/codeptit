#include<bits/stdc++.h>
using namespace std;
int a[1001];
void selectionSort(int a[],int n){
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
		swap(a[min],a[i]);
	}
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	selectionSort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
