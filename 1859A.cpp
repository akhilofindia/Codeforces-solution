#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		vector<int>arr(n);
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		sort(arr.begin(),arr.end());
		int flag=0;
		int x=*max_element(arr.begin(),arr.end());
		if (arr[0]==arr[n-1])
		{
			flag=1;
		}
		if (flag==1)
		{
			cout<<-1<<endl;
		}else{
			vector<int>vi,vi2;
			for (int i = 0; i < n; i++)
			{
				if (arr[i]==x)
				{
					vi2.push_back(arr[i]);
				}else{
					vi.push_back(arr[i]);
				}
			}
			cout<<vi.size()<<" "<<vi2.size()<<endl;
			for (int i = 0; i < vi.size(); i++)
			{
				cout<<vi[i]<<" ";
			}cout<<endl;
			for (int i = 0; i < vi2.size(); i++)
			{
				cout<<vi2[i]<<" ";
			}cout<<endl;
		}

	}

	return 0;
}