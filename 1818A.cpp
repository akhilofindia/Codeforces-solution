#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
        int n,k; cin>>n>>k;
        vector<string> ans(n);
		int count =0;
        for(int i = 0; i < n; i++)
        {
           cin>>ans[i];
        }
        for(int i = 1; i < n; i++)
        {
            if(ans[i]==ans[0])
            {
               count++;
            }
        }
        cout<<count+1<<endl;
	}

	return 0;
}