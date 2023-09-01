#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		string s1,s2;cin>>s1>>s2;
		int cnt=0,flag=0;
		int k=s1.size();
		for (int i = 0; i < k-1; i++)
		{
			if (s1[i]==s1[0] && s1[0]==s2[i])
			{
				if (s1[i+1]==s2[i+1] && s1[i+1]==s1[k-1])
				{
					flag=1;
					break;
				}
			}
		}
		if (s1[0]!=s2[0] && s1[k-1]!=s2[k-1])
		{
			flag=0;
		}
		if (flag==0)
		{
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}
	}

	return 0;
}