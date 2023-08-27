#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,k;cin>>n>>k;
		string s;cin>>s;
		if (k%2==0)
		{
			sort(s.begin(),s.end());
			cout<<s<<endl;
		}else{
			string odd,even;
			for (int i = 0; i < s.length(); i++)
			{
				if (i%2==1)
				{
					odd+=s[i];
				}else{
					even+=s[i];
				}
			}
			sort(odd.begin(),odd.end());
			sort(even.begin(),even.end());
			string final;
			for (int i = 0,j=0,k=0; i < s.length(); i++)
			{
				if (i%2==0)
				{
					final+=even[j++];
				}else{
					final+=odd[k++];
				}
			}
			cout<<final<<endl;
		}
	}

	return 0;
}