#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long n;cin>>n;
		vector<long long>v;
		for (long long i = 1; i <=1000; i++)
		{
			if (n%i==0)
			{
				v.push_back(i);
			}
		}
		long long mx=1;
		long long cnt=1;
		sort(v.begin(),v.end());
		for (long long i = 0; i < v.size()-1; i++)
		{
			if (v[i+1]-v[i]==1)
			{
				cnt++;
				mx=max(mx,cnt);
			}else{
				cnt=0;
			}
		}
		cout<<mx<<endl;
	}

	return 0;
}