#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n;cin>>n;
		int arr[n];
		vector<int>vec,v2;
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
			vec.push_back(arr[i]%10);
		}
		map<int,int>mp;
		for (int i = 0; i < vec.size(); i++)
		{
			mp[vec[i]]++;
			if (mp[vec[i]]<=3)
			{
				v2.push_back(vec[i]);
			}
		}
		int flag=0;
		for (int i = 0; i < v2.size(); i++)
		{
			for (int j = i+1; j < v2.size(); j++)
			{
				for (int k = j+1; k < v2.size(); k++)
				{
					if ((v2[i]+v2[j]+v2[k])%10==3)
					{
						flag=1;
						break;
					}
				}
			}
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