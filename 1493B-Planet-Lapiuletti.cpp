#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

void clean(vector<string>&v,int h,int m,string s,vector<string>&final){
	for (int i = 0; i < v.size(); i++)
	{
		int a=v[i][0]-'0';
		int b=v[i][1]-'0';
		int hour=a*10+b;
		int c=v[i][3]-'0';
		int d=v[i][4]-'0';
		int min=c*10+d;
		map<int,int>mp;
		mp[0]=0;
		mp[1]=1;
		mp[2]=5;
		mp[5]=2;
		mp[8]=8;
		int mirrora=mp[d];
		int mirrorb=mp[c];
		int mirroc=mp[b];
		int mirrord=mp[a];
		int mirrorhr=mirrora*10+mirrorb;
		int mirrormin=mirroc*10+mirrord;
		// cout<<hour<<" "<<mirrorhr<<endl;
		// cout<<hour<<" "<<min<<endl;
		if (hour<h && min<m && mirrorhr<h && mirrormin<m)
		{
			final.push_back(v[i]);
		}
	}
}
int main(){
	int tc;cin>>tc;
	char arr[5]={'0','1','2','5','8'};
	vector<string>v;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			for (int k = 0; k < 5; k++)
			{
				for (int l = 0; l < 5; l++)
				{
					string s="";
					s+=arr[i];
					s+=arr[j];
					s+=':';
					s+=arr[k];
					s+=arr[l];
					v.push_back(s);
				}
			}
		}
	}
	while(tc--){
		int h,m; cin>>h>>m;
		string s; cin>>s;
		vector<string>final;
		clean(v,h,m,s,final);
		sort(final.begin(),final.end());
		// for (int i = 0; i < final.size(); i++)
		// {
		// 	cout<<final[i]<<" ";
		// }
		// cout<<endl;
		int it=lower_bound(final.begin(),final.end(),s)-final.begin();
		if (it==final.size())
		{
			it=0;
		}
		cout<<final[it]<<endl;
	}

	return 0;
}