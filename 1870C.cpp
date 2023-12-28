#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"Yes"<<endl
#define cn cout<<"No"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int mexx(int n, set<int> st)
{
    int temp = 0;
    auto it = st.begin();
    while(temp <= n && it != st.end())
    {
        if(temp != *it)
            return temp;
        temp++;
        it++;
    }
    return n;
}

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,k; cin>>n>>k;
		vector<int>v(n);
		set<int>st;
		for (int i = 0; i < n; i++)
		{
			cin>>v[i];
			st.insert(v[i]);
		}
		if (n==1)
		{
			if (k%2)
			{
				v[0]=1-v[0];
			}
			cout<<v[0]<<endl;
		}else{
			k%=(n+1);
			if (k==0)
			{
				for (int i = 0; i < n; i++)
				{
					cout<<v[i]<<" ";
				}
				cout<<endl;
			}else{
				for (int i = n-k+1; i < n; i++)
				{
					cout<<v[i]<<" ";
				}
				cout<<mexx(n,st)<<" ";
				for (int i = 0; i < n-k; i++)
				{
					cout<<v[i]<<" ";
				}
				cout<<endl;
			}
		}
	}

	return 0;
}