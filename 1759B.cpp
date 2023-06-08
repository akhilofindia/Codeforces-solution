#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int m,s; cin>>m>>s;
		int arr[m];
		set<int, greater<int> > s1;
		for (int i = 0; i < m; i++)
		{
			cin>>arr[i];
			s1.insert(arr[i]);
		}
		int sum=0;
		int ans=0;
		for (int i = 0; i <100; i++)
		{
			if (!s1.count(i))
			{
				sum+=i;
				s1.insert(i);
				if (sum==s)
				{
					ans=1;
					break;
				}
			}
		}
		for (int i=0;i<s1.size();i++){
            if (!s1.count(i))
            {
            	ans=0;
            }
		}
		if (ans==1)
		{
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}