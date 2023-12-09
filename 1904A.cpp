#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int a,b;
		cin>>a>>b;
		int x,y;
		int m,n;
		cin>>x>>m>>y>>n;
		set<pair<int,int>>st1,st2;
		st1.insert({x+a,m+b});
		st1.insert({x-a,m-b});
		st1.insert({x-a,m+b});
		st1.insert({x+a,m-b});
		st1.insert({x+b,m+a});
		st1.insert({x-b,m-a});
		st1.insert({x+b,m-a});
		st1.insert({x-b,m+a});

		st2.insert({y+a,n+b});
		st2.insert({y-a,n-b});
		st2.insert({y+a,n-b});
		st2.insert({y-a,n+b});
		st2.insert({y+b,n+a});
		st2.insert({y-b,n-a});
		st2.insert({y+b,n-a});
		st2.insert({y-b,n+a});

		int cnt=0;
		for (auto it: st1)
		{
			if (st2.find(it)!=st2.end())
			{
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}

	return 0;
}