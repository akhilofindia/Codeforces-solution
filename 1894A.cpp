#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n; cin>>n;
		string s; cin>>s;
		cout<<s[n-1]<<endl;
	}

	return 0;
}
   for(auto i:arr){
        if(i==ans[0]){
            ans[0]=-1;
            cout<<"2"<<" ";
        }else if(i==ans[1]){
            ans[1]=-1;
            cout<<"3"<<" ";
        }else cout<<"1"<<" ";
       }cout<<endl;