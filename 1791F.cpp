#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int sumofdigit(int n){
	int sum=0;
	while(n){
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,q; cin>>n>>q;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		while(q--){
			int a; cin>>a;
			if (a==2)
			{
				int b; cin>>b;
				cout<<arr[b-1]<<endl;
			}else if (a==1)
			{
				int l,r; cin>>l>>r;
				for (int i = l-1; i <= r-1; i++)
				{
					arr[i]=sumofdigit(arr[i]);
				}
			}
		}
	}

	return 0;
}