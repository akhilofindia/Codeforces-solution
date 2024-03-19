#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long n,k;cin>>n>>k;
		long long arr[2*n];
		for (long long i = 0; i < 2*n; i++)
		{
			cin>>arr[i];
		}
		map<int,int>mp1,mp2;
		for (int i = 0; i < n; i++)
		{
			mp1[arr[i]]++;
		}
		for (int i = n; i < 2*n; i++)
		{
			mp2[arr[i]]++;
		}
		int flag=0;
		int a,b;
		int cnt1=0,cnt2=0;
		vector<int>v1,v2;
		vector<int>vv1,vv2;
		for (auto i: mp1)
		{
			if (i.second==2)
			{
				cnt1++;
				v1.push_back(i.first);
				if (cnt1>=k)
				{
					break;
				}
			}else{
				vv1.push_back(i.first);
			}
		}
		for (auto i: mp2)
		{
			if (i.second==2)
			{
				cnt2++;
				v2.push_back(i.first);
				if (cnt2>=k)
				{
					break;
				}
			}else{
				vv2.push_back(i.first);
			}
		}
		if (cnt1==k)
		{
			for (int i = 0; i < v1.size(); i++)
			{
				cout<<v1[i]<<" "<<v1[i]<<" ";
			}
			cout<<endl;
			for (int i = 0; i < v2.size(); i++)
			{
				cout<<v2[i]<<" "<<v2[i]<<" ";
			}
			cout<<endl;
		}else{
			for (int i = 0; i < v1.size(); i++)
			{
				cout<<v1[i]<<" "<<v1[i]<<" ";
			}
			for (int i = 0; i < 2*k-2*v1.size(); ++i)
			{
				cout<<vv1[i]<<" ";
			}
			cout<<endl;
			for (int i = 0; i < v2.size(); i++)
			{
				cout<<v2[i]<<" "<<v2[i]<<" ";
			}
			for (int i = 0; i < 2*k-2*v2.size(); ++i)
			{
				cout<<vv2[i]<<" ";
			}
			cout<<endl;
		}
		
	}

	return 0;
}