#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		vector<pair<int,int>>v;
		int ans=0;
		int x,y,flag=0;
		while(n--){
			int a,b;cin>>a>>b;
			if (flag==0)
			{
				x=a;
				y=b;
				flag=1;
			}
			v.push_back({a,b});
		}
		for (int i = 1; i < v.size(); i++)
		{
			if (v[i].first>=x && v[i].second>=y)
			{
				ans=1;
				break;
			}
		}
		if (ans==1)
		{
			cout<<-1<<endl;
		}else{
			cout<<v[0].first<<endl;
		}
	}

	return 0;
}