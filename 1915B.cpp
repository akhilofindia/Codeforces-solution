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
		for (int i = 0; i < 3; i++)
		{
			string s; cin>>s;
			for (int i = 0; i < 3; i++)
			{
				if (s[i]=='?')
				{
					int a=0,b=0,c=0;
					for (int i = 0; i < 3; i++)
					{
						if (s[i]=='A')
						{
							a=1;
						}
						if (s[i]=='B')
						{
							b=1;
						}
						if (s[i]=='C')
						{
							c=1;
						}
					}
					if (a==0)
					{
						cout<<"A"<<endl;
					}else if (b==0)
					{
						cout<<"B"<<endl;
					}else{
						cout<<"C"<<endl;
					}
				}
			}
		}
	}

	return 0;
}