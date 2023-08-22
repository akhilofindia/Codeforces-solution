#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		int flag=0;
		vector<int>v;
		for (int i = 2; i <= sqrt(n); i++)
		{
			if (n%i==0)
			{
				v.push_back(i);
				n/=i;
			}
			if (v.size()==2)
			{
				if (n==v[0] || n==v[1])
				{
					flag=1;
				}else{
					v.push_back(n);
				}
				break;
			}
		}
		if (flag==0 && v.size()==3)
		{
			cout<<"YES"<<endl;
			cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}