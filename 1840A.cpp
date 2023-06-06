#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n; string s;
		cin>>n>>s;
		string b="";
		for (int i =0 ; i < n; i++)
		{
			b+=s[i];
			for (int j = i+1; j < n; j++)
			{
				if (s[j]==s[i])
				{
					i=j;
					break;
				}
			}
		}
		cout<<b<<endl;
	}

	return 0;
}