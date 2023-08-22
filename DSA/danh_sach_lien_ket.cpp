#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node*next;
};
typedef struct Node*node;

//cap phat dong 1 node moi voi du lieu la so nguyen x
node makeNode(int x){
	node tmp= new Node;
	tmp->data=x;
	tmp->next=NULL;
	return tmp;
}
//Kiem tra rong
bool empty(node a){
	return a==Null;
}
//kiem tra so phan tu trong danh sach lien ket
int Size(node a){
	int cnt=0;
	while(a!=NULL){
		a=a->next;
		cnt++;
	}
	return cnt;
}
//them 1 phan tu vao dau dslk
void insertFirst(node &a, int x){
	node tmp=makeNode(x);
	if(a==NULL){
		a=tmp;
	}
	else{
		tmp->next=a;
		a=tmp;
	}
}
//them phan tu vao cuoi dslk
void insertLast(node &a,int x){
	node tmp= makeNode(x);
	if(a==NULL){
		a=tmp;
	}
	else{
		node p=a;
		while(p->next!=NULL){
			p=p->next;
		}
		p->next=tmp;
	}
}
//them 1 phan tu vao giua 
void insertMiddle(node &a,int x,int pos){
	int n= Size(a);
	if(pos<0||pos>n+1){
		cout<<"Vi tri chen khong hop le";
	}
	if(n==1){
		insertFirst(a,x);
		return;
	}
	else if(n==pos+1){
		inserLast(a,x);
		return; 
	}
	node p=a;
	for(int i=1;i<pos-1;i++0){
		p=p->next;
	}
	node tmp=makeNode(x);
	tmp->next=p->next;
	p->next=tmp;
}
//xoa phan tu o dau
void deleteFirst(node&a){
	if(a==NULL) return;
	a=a->next;
}
//xoa phan tu o cuoi
void deleteLast(node&a){
	if(a==NULL) return;
	node truoc=NULL;
	node sau=a;
	while(sau->next=NULL){
		truoc=sau;
		sau=sau->next;
	}
	if(truoc=NULL){
		a=NULL;
	}
	else{
		truoc->next=NULL;
	}
}
//xoa o giua
void deleteMiddle(node&a,int pos){
	if(pos<=0||pos>Size(a)) return;
	node Truoc=NULL,sau=a;
	for(int i=1;i<pos;i++){
		truoc=sau;
		sau=sau->next; 
		
	}
	if(truoc==NULL){
		a=a->next;
	}
	else{
		truoc->next=sau->next;
	}
}
//in dslk
void in(node a){
	cout<<endl;
	while(a!=NULL){
		cout<<a->data<<" ";
		a=a->next;
	}
}
//
int main(){
	cout<<sizeof(Node)<<endl;
}
