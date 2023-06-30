#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;
        cin>>n;
        set<int> st;
        map<int, int> mp;
        for (int i=0;i<n;i++){
            int a;
            cin>>a;
            st.insert(a);
            st.insert(a+1);
            mp[a]++;
        }
        int lastnum  = 0;
        int ans = 0;
        for (auto it : st){
            int c = mp[it];
            ans+=max(0,c-lastnum);
            lastnum = c;
        }
        cout<<ans<<"\n";
		
	}

	return 0;
}