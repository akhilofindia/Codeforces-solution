#include <bits/stdc++.h>
using namespace std;

bool f(int k,vector<pair<int,int>>&v){            //check hoga if k enough h ya nhi
	int ans1=0,ans2=0;                            //condition satisfy krne
	for (int i = 0; i < v.size(); i++)
	{
		ans1=max(v[i].first,ans1-k);
		ans2=min(v[i].second,ans2+k);
		if (ans1>ans2)
		{
			return false;
		}
	}
	return true;
}
int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		vector<pair<int,int>>v;
		for (int i = 0; i < n; i++)
		{
			int a,b;
			cin>>a>>b;
			v.push_back({a,b});
		}
		int l=0,h=1e9;
		while(l<h){
			int mid=(l+h)/2;
			if (f(mid,v))                   //condition satisfy horhi to k ko chota krte rhege min value nikalne
			{
				h=mid;
			}else{                         //nhi hui toh k ki value increase krege 
				l=mid+1;
			}
		}
		cout<<l<<endl;

	}

	return 0;
}