#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";
#define ce cout<<endl;
#define int long long

template<typename T>void displayVec(vector<T> a){for(int i=0;i<a.size();i++) cout<<a[i]<<" ";cout<<endl;}
template<typename T>void displayArr(T a[], int n){for(int i=0;i<n;i++) cout<<a[i]<<" ";cout<<endl;}
template<typename T>void displayAdj(vector<T> adj[], int n){for(int i=0;i<=n;i++){cout<<i<<"->";displayVec(adj[i]);}}
template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}
template<typename T>void displaySet(set<T>st){for(auto it:st){cout<<it<<" ";}cout<<endl;}
template<typename T>void displayQueue(queue<T> q){while(!q.empty()){cout<<q.front()<<" ";q.pop();}cout<<endl;}
template<typename T>void displayPQ(priority_queue<T> pq){while(!pq.empty()){cout<<pq.top()<<" ";pq.pop();}cout<<endl;}

signed main(){
	int tc;cin>>tc;
	while(tc--){
		int n,m,k;cin>>n>>m>>k;
		string s;cin>>s;
		int i=-1;
		int noans=0;
		int flag=0;
		while(i<n){
			if (noans)
			{
				break;
			}
			while(i>=0 && i<n && s[i]=='W'){
				i++;
				k--;
				if (k<0)
				{
					noans=1; 
					break;
				}
			}
			if (s[i]=='C')
			{
				noans=1;
				break;
			}else{
				int flag1=0;
				for (int j = m; j >=1; j--)
				{
					if (i+j>=n)
					{
						flag=1;
						break;
					}else{
						if (s[i+j]=='L')
						{
							i+=j;
							flag1=1;
							break;
						}
					}
				}
				if (flag)
				{
					break;
				}
				if (flag1)
				{
					continue;
				}else{
					for (int j = m; j >=1; j--)
				    {
				    	if (s[i+j]=='W')
				    	{
				    		i+=j;
				    		flag1=1;
				    		break;
				    	}
				    }
				    if (flag1)
				    {
				    	continue;
				    }else{
				    	noans=1;
				    }
				}
			}
		}
		if (!noans && flag)
		{
			cy;
		}else cn;
	}

	return 0;
}