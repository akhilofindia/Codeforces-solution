#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T>void displayVec(vector<T> a){for(int i=0;i<a.size();i++) cout<<a[i]<<" ";cout<<endl;}
template<typename T>void displayArr(T a[], int n){for(int i=0;i<n;i++) cout<<a[i]<<" ";cout<<endl;}
template<typename T>void displayAdj(vector<T> adj[], int n){for(int i=0;i<=n;i++){cout<<i<<"->";displayVec(adj[i]);}}
template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}
template<typename T>void displaySet(set<T>st){for(auto it:st){cout<<it<<" ";}cout<<endl;}
template<typename T>void displayQueue(queue<T> q){while(!q.empty()){cout<<q.front()<<" ";q.pop();}cout<<endl;}
template<typename T>void displayPQ(priority_queue<T> pq){while(!pq.empty()){cout<<pq.top()<<" ";pq.pop();}cout<<endl;}

int main(){
	int n; cin>>n;
	string s1;cin>>s1;
	string s2;cin>>s2;
	map<char,queue<int>>mp;
	vector<pair<int,int>>v;
	for (int i = 0; i < s1.size(); i++)
	{
		mp[s1[i]].push(i+1);
	}
	vector<int>left,right;
	vector<int>rques;
	for (int i = 0; i < n; i++)
	{
		if (s2[i]!='?')
		{
			if (mp[s2[i]].size())
			{
				int x=mp[s2[i]].front();
				v.push_back({x,i+1});
				mp[s2[i]].pop();
			}else{
				right.push_back(i+1);
			}
		}else{
			rques.push_back(i+1);
		}
	}
	vector<int>lques;
	for (auto i: mp)
	{
		queue<int>q=i.second;
		if (i.first=='?')
		{
			while(!q.empty()){
				int x=q.front();
				// cout<<x<<endl;
				lques.push_back(x);
				q.pop();
			}
			continue;
		}
		// displayQueue(q);
		while(!q.empty()){
			int x=q.front();
			// cout<<x<<endl;
			left.push_back(x);
			q.pop();
		}
	}
	sort(left.begin(),left.end());
	int cnt=0;
	int j=0;
	while(lques.size() && right.size()){
		v.push_back({lques[lques.size()-1],right[right.size()-1]});
		lques.pop_back();
		right.pop_back();
	}
	while(rques.size() && left.size()){
		v.push_back({left[left.size()-1],rques[rques.size()-1]});
		rques.pop_back();
		left.pop_back();
	}
	while(lques.size()){
		v.push_back({lques[lques.size()-1],rques[rques.size()-1]});
		lques.pop_back();
		rques.pop_back();
	}
	cout<<v.size()<<endl;
	for (int i = 0; i < v.size(); i++)
	{
		cout<<v[i].first<<" "<<v[i].second<<endl;
	}


	return 0;
}