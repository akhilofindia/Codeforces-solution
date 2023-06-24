#include <bits/stdc++.h>
using namespace std;

int main(){
	string n;cin>>n;
	int flag=0;
	int odd=n[n.size()-1]-'0';
	int index=0;
	for (int i = 0; i < n.size(); i++)
	{
		if ((n[i]-'0')%2==0)
		{
			flag=1;
			if ((n[i]-'0')<odd)
			{
			 	index=i;
				break;
			}else
				index=i;
		}
	}
	if (flag==0)
	{
		cout<<-1<<endl;
	}else{
		swap(n[index],n[n.size()-1]);
		cout<<n<<endl;
	}


	return 0;
}