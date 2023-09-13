#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;
		cin>>n;
		vector<int>pos,neg,a;
		for (int i = 0; i < n; i++)
		{
			int x;cin>>x;
			if (x>0)
			{
				pos.push_back(x);
			}else if (x<0)
			{
				neg.push_back(x);
			}else{
				if (a.size()<4)
				{
					a.push_back(x);
				}
			}
		}
		int flag=0;
		if (pos.size()>2 || neg.size()>2)
		{
			flag=1;
		}
		for (int i = 0; i < pos.size(); i++)
		{
			a.push_back(pos[i]);
		}
		for (int i = 0; i < neg.size(); i++)
		{
			a.push_back(neg[i]);
		}

		for (int i = 0; i < a.size(); i++)
		{
			for (int j = i+1; j < a.size(); j++)
			{
				for (int k = j+1; k < a.size(); k++)
				{
					bool ok=false;
					for (int l = 0; l < a.size(); l++)
					{
						if (a[i]+a[j]+a[k]==a[l])
						{
							ok=true;
						}
					}
					if (!ok)
					{
						flag=1;
						break;
					}
				}
			}
		}
		if (flag==1)
		{
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}
	}

	return 0;
}