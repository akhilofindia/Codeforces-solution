#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		string s; cin>>s;
		map <char,int> ans;
		for (int i = 0; i < 4; i++)
		{
			ans[s[i]]++;
		}
		int a=ans.size();
		if (a==1)
		{
			cout<<-1<<endl;
		}else if (a==4 || a==3)
		{
			cout<<4<<endl;	
		}else{
			for (auto itr = ans.begin(); itr != ans.end(); itr++){
				if (itr->second ==3)
				{
					cout<<6<<endl;
					break;
				}else if (itr->second ==2)
				{
					cout<<4<<endl;
					break;
				}
            }
		}
	}

	return 0;
}