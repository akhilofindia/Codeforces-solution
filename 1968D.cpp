#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,k,x1,x2;
		cin>>n>>k>>x1>>x2;
		int arr[n];
		int per[n];
		for (int i = 0; i < n; i++)
		{
			cin>>per[i];
		}
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		int score1=0,score2=0;
		int cnt=0;
		for (int i = 0; i < n; i++)
		{
			if (arr[per[x1]]<arr[per[x1+x1]] && per[x1]*2<n)
			{
				x1+=x1;
				score1+=arr[per[x1]];
			}else{
				score1+=arr[per[x1]];
			}
			if (arr[per[x2]]<arr[per[x2+x2]] && per[x2]*2<n)
			{
				x2+=x2; 
				score2+=arr[per[x2]];
			}else{
				score2+=arr[per[x2]];
			}
			cnt++;
			if (cnt==k)
			{
				break;
			}
		}
		if (score1==score2)
		{
			cout<<"Draw"<<endl;
		}else if (score1>score2)
		{
			cout<<"Bodya"<<endl;
		}else{
			cout<<"Sasha"<<endl;
		}

	}

	return 0;
}