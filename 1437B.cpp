#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,k,count=0;
		string s;cin>>n>>s;
		for (int i = 0; i < n; i++)
		{
			if (s[i]==s[i+1])
			{
				count++;
			}
		}
		cout<<(count+1)/2<<endl;
	}

	return 0;
}