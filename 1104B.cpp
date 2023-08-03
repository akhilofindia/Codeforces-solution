#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;cin>>s;
	stack<char>st;
	int cnt=0;
	for (int i = 0; i < s.size(); i++)
	{
		if (!st.empty() && st.top()==s[i])
		{
			st.pop();
			cnt++;
		}else{
			st.push(s[i]);
		}
	}
	if (cnt%2==0)
	{
		cout<<"No"<<endl;
	}else{
		cout<<"Yes"<<endl;
	}


	return 0;
}