#include <bits/stdc++.h>
using namespace std;

bool isSubstring(string s1, string s2)
{
    if (s1.find(s2) != string::npos)
        return true;
    return false;
}

int main(){
	int tc;cin>>tc;
	while(tc--){
		int a,b;cin>>a>>b;
		string s1,s2;
		cin>>s1>>s2;
		int cnt=0;
		int flag=false;
		while(1){
			if (isSubstring(s1,s2))
			{
				flag=true;
				break;
			}
			if (s1.size()>25*a)
			{
				break;
			}
			s1+=s1;
			cnt++;
		}
		if (flag)
		{
			cout<<cnt<<endl;
		}else{
			cout<<-1<<endl;
		}
	}



	return 0;
}