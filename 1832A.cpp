#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
    while(tc--){
        string s; cin>>s;
        map<char,int>ans;
        for(int i=0; i<s.size()/2; i++){
            ans[s[i]]++;
        }
        if(ans.size()>1){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }

	return 0;
}