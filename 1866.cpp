#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	vector<int>v;
	for (int i = 0; i < n; i++)
	{
		int x;cin>>x;
		v.push_back(abs(x));
	}
	int z=*min_element(v.begin(),v.end());
	cout<<z<<endl;

	return 0;
}