#include<bits/stdc++.h>
#include<stack>
using namespace std;
//LIFO:last in first out	
//push
//pop: lay ra phan tu o top	
//top:in ra phan tu o top
//size
//empty:kiem tra stack co rong	
//o(1)
int main(){
	stack<int>s;
	for(int i=1;i<=10;i++){
		s.push(i);
	}
	while(!s.empty()){
		cout<<s.top();
		s.pop();
	}
}
