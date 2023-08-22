#include<bits/stdc++.h>
#include<algorythm>
//thu vien thuat toan built-in

using namespace std;
//linear search:tim kiem tuyen tinh O(n)
bool ls(int a, int x){
	for (int i=0;i<n;i++)
	{
		if(a[i]==n) return true;
	}
	return false;
}
//binary search O(log n): tim kiem nhi phan
//cac phan tu trong mang phai duoc sap xep
bool bs(int a[],int n,int x)
{
	int l=0, r=n-1;
	while(l<=r)
	{
		int m=(l+r)/2;
		if(a[m]==x) return true;
		else if (a[m]<x){
			l=m+1;
		}
		//phai tim o ben phai
		else (a[m]>x){
			r=m-1;
		}
		//phai tim o ben trai
	}
	return false;
}
//ham tim kiem co san trong thu vien algorythm
//binary_search()


void Selection_Sort(int a[], int n){
	int min;//v? trí ph?n t? nh? nh?t trong dãy hi?n hành
	for(int i=0; i<n-1; i++){
		min = i;
		for(int j=i+1; j<n; j++){
			if (a[j] < a[min]){
				min = j;//ghi nh?n v? trí ph?n t? nh? nh?t
			}
		}
		swap(a[min], a[i]);
	}
}

int main()
{
	int a[5] = {8, 4, 1, 6, 5};
	Selection_Sort(a, 5);
	cout<<"Mang sau khi sap xep:"<<endl;
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
	system("pause");
}
