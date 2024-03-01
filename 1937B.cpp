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
		int n;cin>>n;
		string s1,s2;
		cin>>s1>>s2;
		int flag=0;
		string s3="";
		for (int i = 0; i < n; i++)
		{
			if (flag==0)
			{
				if (s1[i]=='0')
				{
					s3+='0';
				}else if(s2[i]=='0'){
					s3+='0';
					flag=1;
				}else{
					if (s1[i]=='1')
					{
						s3+='1';
					}else{
						s3+='1';
						flag=1;
					}

				}
			}else{
				if (s2[i]=='0' )
				{
					s3+='0';
				}else if (s1[i]=='0')
				{
					s3+='0';
					flag=0;
				}else{
					if (s2[i]=='1')
					{
						s3+='1';
					}else{
						s3+='1';
						flag=0;
					}
				}
			}
		}
		s3+=s2[n-1];
		cout<<s3<<endl;
	}

	return 0;
}