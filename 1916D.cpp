#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

bool isvowel(char s){
	if (s=='a' || s=='e')
	{
		return true;
	}
	return false;
}
bool isconsonent(char s){
	if (s=='b' || s=='c' || s=='d')
	{
		return true;
	}
	return false;
}
int main(){
	int tc;cin>>tc;
	while(tc--){
		int n; cin>>n;
		string s; cin>>s;
		int flag=0;
		string s1;
		for (int i = 0; i < n; i++)
		{
			if (isconsonent(s[i]))
			{
				s1+=s[i];
				if (flag==1)
				{
					s1+='.';
					flag=0;
				}
			}else{
				s1+=s[i];
				flag=1;
				if (i<n-2)
				{
					if (isvowel(s[i+2]))
					{
						flag=0;
						s1+='.';
					}
				}
			}
		}
		int x=s1.length();
		for (int i = 0; i < x-1; i++)
		{
			cout<<s1[i];
		}
		if (s1[x-1]=='.')
		{
			/* code */
		}else{
			cout<<s1[x-1];
		}
		cout<<endl;
	}

	return 0;
}