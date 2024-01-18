#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	int tc; cin>>tc;
	while(tc--){
		int k,n; cin>>k>>n;
		vector<int>v;
		int diff=1;
		v.push_back(diff);
		for (int i = 2; i <= k; i++)
		{
			int next=v.back()+diff;
			int places=k-i;
			int elements=n-next;
			if (places<=elements)
			{
				v.push_back(next);
				diff++;
			}else{
				v.push_back(v.back()+1);
			}
		}
		for (int i = 0; i < v.size(); i++)
		{
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}

	return 0;
}