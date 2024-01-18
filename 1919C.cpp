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
		ll n; cin>>n;
		ll last1=INT_MAX,last2=INT_MAX;
		ll cnt=0;
		for(ll i=0; i < n; i++){
			ll z; cin>>z; 
			if (last1>last2)       //we assume l1>l2
			{
				swap(last1,last2);
			}
			if (z<=last1)          //smaller than both l1 l2
			{
				last1=z;           // no penalty
			}else if (z<=last2)    //value bw l1 and l2
			{
				last2=z;           // no penalty
			}else{                 // value > both last
				cnt++;
				last1=z;           // penalty fosho
			}
		}
		cout<<cnt<<endl;	
	}

	return 0;
}