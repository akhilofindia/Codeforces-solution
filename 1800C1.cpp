#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long n;cin>>n;
		vector<long long>v(n);
		priority_queue<int>bonus;
		long long sum=0;
		for (long long i = 0; i < n; i++)
		{
			cin>>v[i];
		}
		for (long long i = 0; i < n; i++)
		{
			if (v[i]==0 && !bonus.empty())
			{
				sum+=bonus.top();
				bonus.pop();
			}else{
				bonus.push(v[i]);
			}
		}
		cout<<sum<<endl;
	}

	return 0;
}