#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

bool isprime(int x){
	for(int i=2;i<=x/i;i++){
		if(x%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	int tc;cin>>tc;
	while(tc--){
		int n; cin>>n;
		int flag=0;
		if (n==1)
		{
			flag=1;
		}else if (n%2!=0 || n==2)
		{
			flag=0;
		}else{
			int temp=n;
			int cnt=0;
			while(temp%2==0){
				temp/=2;
				cnt++;
			}
			if (temp==1)
			{
				flag=1;
			}else if (isprime(temp))
			{
				if (cnt==1)
				{
					flag=1;
				}else{
					flag=0;
				}
			}else{
				flag=0;
			}
		}
		if (flag==1)
		{
			cout<<"FastestFinger"<<endl;
		}else{
			cout<<"Ashishgup"<<endl;
		}
	}

	return 0;
}