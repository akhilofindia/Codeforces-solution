#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int x,y,n;cin>>x>>y>>n;
		vector<int>v;
		v.push_back(y);
		int cnt=1;
		for (int i = 0; i < n;i++)
		{
			v.push_back(y);
			y-=cnt;
			cnt++;
		}
		if (v[v.size()-1]<x)
		{
			cout<<-1<<endl;
		}else{
			cout<<x<<" ";
			for (int i = v.size()-2; i > 0; i--)
			{
				cout<<v[i]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}