/*sap xep
Sap xep chon*/
#include<bits/stdc++.h>
using namespace std;
//sap xep chon

void selectionSort(int a[],int n){
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min=j;
			}
			
		}
		swap(a[i],a[min]);
	}
}

//sap xep noi bot

void bubbleSort(int a[], int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]) swap(a[j],a[j+1]);
		}
	}
}

//sap xep chen

void insertionSort(int a[],int n){
	for(int i=1;i<n;i++){
		int x=a[i],pos=i-1;
		while(pos>=0 && x<a[pos]){
			a[pos+1]=a[pos];
			--pos;
		}
		a[pos+1]=x;
	}
}

int main(){
	int a[1001],n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
//	selectionSort(a,n);
//	bubbleSort(a,n);
//	insertionSort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
