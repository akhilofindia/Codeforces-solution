#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n; cin>>n;
		vector<int> ans;
		vector<int> eve;
		for (int i = 1; i <= n; i++)
		{
			int a; cin>>a;
			if (a%2!=0)
			{
				ans.push_back(i);
			}else{
				eve.push_back(i);
			}
		}
		if (ans.size()>=3)
		{
			cout<<"YES"<<endl;
			cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<endl;
		}else if (ans.size()>=1 && eve.size()>=2)
		{
			cout<<"YES"<<endl;
			cout<<ans[0]<<" "<<eve[0]<<" "<<eve[1]<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}