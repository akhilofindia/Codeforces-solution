#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long n;cin>>n;              //only manipulated the equation
		long long a[n],b[n];
		for (long long i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		for (long long i = 0; i < n; i++)
		{
			cin>>b[i];
		}
		vector<long long>diff;
		for (long long i = 0; i < n; i++)
		{
			diff.push_back(a[i]-b[i]);
		}
		long long x=*max_element(diff.begin(),diff.end());
		vector<long long>vi,vii;
		long long cnt=0;
		for (long long i = 0; i < diff.size(); i++)
		{
			if (diff[i]==x)
			{
				cnt++;
				vi.push_back(i+1);
			}
		}
		for (long long i = 0; i < vi.size(); i++)
		{
			vii.push_back(vi[i]);
		}
		cout<<cnt<<endl;
		for (long long i = 0; i < vii.size(); i++)
		{
			cout<<vii[i]<<" ";
		}
		cout<<endl;
	}

	return 0;
}