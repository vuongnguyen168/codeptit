#include<bits/stdc++.h>


using namespace std;
int V,u,check[1000]={0};
int a[1000][1000]={0};

void dfs(int u){
	stack<int>s;
	check[u]=1;
	s.push(u);
    cout << "Duyet dinh: " << u << "\n";
	while(!s.empty()){
		int k=s.top();
		s.pop();
		for(int i=1;i<=V;i++){
			if(a[k][i]==1 && check[i]==0){
				check[i]=1;
				s.push(k);
				s.push(i);
                cout << "Duyet dinh: " << i << "\n";
				break;
			}
		}
	}
}
void process(){
	ifstream fpi("C:\\Users\\PC\\Downloads\\dfs_vd1.in");
	fpi>>V;
	for(int i=1;i<=V;i++){
		for(int j=1;j<=V;j++){
			fpi>>a[i][j];
		}
	}
	dfs(3);
}
int main(){
	process();
}
