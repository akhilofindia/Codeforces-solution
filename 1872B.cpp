#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		vector<int>d;
		vector<int>s;
		while(n--){
			int a,b;cin>>a>>b;
			d.push_back(a);
			s.push_back(b);
		}
		int ans=INT_MAX;
        for (int i = 0; i < d.size(); i++)
        {
        	if (s[i]%2==0)
        	{
        		int cnt=(s[i]-2)/2;
        		ans=min(ans,cnt+d[i]);
        	}else{
        		int cnt2=(s[i])/2;
        		ans=min(ans,cnt2+d[i]);
        	}
        }
        cout<<ans<<endl;


	}

	return 0;
}