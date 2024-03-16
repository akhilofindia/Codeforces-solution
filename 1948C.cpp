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
		string s1,s2; cin>>s1>>s2;
		int flag=0;
		int row=1,col=1;
		while(true){
			// cout<<row<<" "<<col<<endl;
			if (row==2 && col==n)
			{
				break;
			}
			if (row==1)
			{
				if (s1[col]=='>' || s2[col-1]=='>')
				{
					col++;
					row=2;
				}else{
					flag=1;
					break;
				}
			}else if (row==2)
			{
				if (s2[col]=='>' || s1[col-1]=='>')
				{
					col++;
					row=1;
				}else{
					flag=1;
					break;
				}
			}
		}
		if (flag)
		{
			cn;
		}else cy;
	}

	return 0;
}