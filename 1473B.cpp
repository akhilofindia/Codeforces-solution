#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		string s1,s2;
		cin>>s1>>s2;
		int n1=s1.size(),n2=s2.size();
		int lcm=n1*(n2/__gcd(n1,n2));
		string ans1="",ans2="";
		for (int i = 0; i < lcm/n1; i++)
		{
			ans1+=s1;
		}
		for (int i = 0; i < lcm/n2; i++)
		{
			ans2+=s2;
		}
		if (ans1==ans2)
		{
			cout<<ans1<<endl;
		}else{
			cout<<-1<<endl;
		}
	}

	return 0;
}