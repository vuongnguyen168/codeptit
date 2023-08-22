#include<bits/stdc++.h>
using namespace std;
//int t;
void sinh(string s){
	int i=s.length()-1;
	while(i>=0&&s[i]=='1'){
		s[i]='0';
		--i;
	}
	
	if(i!=-1){
		s[i]='1';
	}
	cout<<s<<endl;
} 
main(){
	int t;
	cin>>t;
	while(t--){
		string s;
//		getline(cin,s);
		cin>>s;
		sinh(s);
	}
}
