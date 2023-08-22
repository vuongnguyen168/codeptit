/*thuat toan dfs

*dung de quy
Thuat toan DFS(u)//u la dinh bat dau duyet
begin
	<tham dinh u>;//duyet dinh u
	chuaxet[u]=false;
	for each v thuoc ke(u)do//lay moi dinh v thuoc ke(u)
		if(chuaxet[v] then //neu dinh v chua duyet
			DFS(v);
		endif;
	endfor;
End.

*dung ngan xep khu de quy
Thuat toan DFS(u):
Begin:
	Buoc 1(Khoi tao):
		stack=rong;//khoi tao stack la rong
		Push(stack,u);//dua u vao ngan xep
		<tham dinh u>;//duyet dinh u
		chuaxet[u]=false;//xac nhan dinh u da duyet
	Buoc 2(Lap):
		while(stack!= rong)do
			s=Pop(stack);//loai dinh dau ngan xep
			for each t thuoc ke(s) do// lay moi dinh t thuoc ke(s)
				if chuaxet[t] then //neu dung la dinh t chua duyet
				<tham dinh t>;//duyet dinh t
				chuaxet[t]=false;//xac nhan t da duyet
				Push(stack,s)//dua s vao stack
				Push(stack,t)//dua u vao stack
				Endif;
			Endfor;
		Endwhile;
	Buoc 3(Tra lai ket qua):
		Return(<tap dinh da duyet>);
End.

*/
#include<bits/stdc++.h>
using namespace std;
#define max 1001
int n,a[max][max];
bool check[max];
void process(){
	fstream fst("C:\\Users\\PC\\Downloads\\dfs_vd1.in");
	fst >> n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			fst>> a[i][j];
		}
	}
	
}
/*void dfs_dequy(int u){
	cout << u<<" ";//tham dinh u
	check[u]=true;//xac nhan dinh u da duyet
	for(int v=1;v<=n;v++)
	{
		if(a[u][v] && check[v]==false)
		{
			check[v]=true;//xac nhan dinh v da duyet
			dfs_dequy(v);
		}
	}
}*/

void dfs_stack(int u){
	
	stack<int> stack;//khoi tao stack rong
	stack.push(u);//dua dinh u vao stack
	cout<<u<<" ";
	check[u]=true;//xac nhan dinh u da duyet
	//lap
	while(!stack.empty())
	{	
		int s=stack.top();
		stack.pop();
		for(int t=1;t<=n;t++){
			if(a[s][t]&&check[t]==false)
			{check[t]=true;
			
			stack.push(s);
			stack.push(t);
			cout<<t<<" ";
			break;
			}
			
		}
	}
	
}
int main()
{
	process();
	int u;
	cin>>u;
	dfs_stack(u);
}

















