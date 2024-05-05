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
		ll n,k; cin>>n>>k;
		ll arr[n];
		ll sum=0;
		for (ll i = 0; i < n; i++)
		{
			cin>>arr[i];
			sum+=arr[i];
		}
		ll front,back;
		if (k%2==1)
		{
			front=k/2+1; 
			back=k-front;
		}else{
			front=k/2;
			back=k/2;
		}
		ll j=0;
		if (k>=sum)
		{
			cout<<n<<endl;
		}else{
			ll i=0,j=n-1;
			ll cnt=0;
			while(i<j && k>0 ){
				ll haha=2*min(arr[i],arr[j]);
				if(k>=haha){
					cnt++;
					k-=haha;
					if (arr[i]>arr[j])
					{
						arr[i]-=arr[j];
						j--;
					}else if (arr[i]<arr[j])
					{
						arr[j]-=arr[i];
						i++;
					}else{
						i++;
						j--;
						cnt++;
					}
				}else if (arr[i]<=arr[j] && (k+1)==haha)
				{
					cnt++;
					break;
				}else break;
			}
			cout<<cnt<<endl;
		}

	}

	return 0;
}