#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n,k; cin>>n>>k;
		vector<int>vi(n);
		int cnt=n;
		for (int i = 0; i < k; i++)
		{
			if (i%2==0)
			{
				for (int j = i; j < n; j+=k)     
				{
				    vi[j]=cnt;
				    cnt--;
				}
			}else{
				int x=i;
				while(x<n){ 
					x+=k;
				}
				x-=k;        //while ke bad x n se bda hojayega
				for (int j=x; j>=i; j-=k)        
				{
					vi[j]=cnt;
					cnt--;
				}
			}
		}
		for (int i = 0; i < vi.size(); i++)
		{
			cout<<vi[i]<<' ';
		}
		cout<<endl;
	}

	return 0;
}