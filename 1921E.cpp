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
		int h,w,xa,ya,xb,yb;
		cin>>h>>w>>xa>>ya>>xb>>yb;
		if (xa>=xb)
		{
			cout<<"Draw"<<endl;
		}else{
			int cnt=(xb-xa+1)/2;              //moves
			if ((abs(xa-xb))%2==1)           //alice win or draw
			{
				if (min(w,yb+cnt-1)>min(w,ya+cnt))     //right run
				{
					cout<<"Draw"<<endl;
				}else if (max(1,yb-cnt+1)<max(1,ya-cnt))    //left run
				{
					cout<<"Draw"<<endl;
				}else{
					cout<<"Alice"<<endl;
				}          
			}else{                            //bob win or draw
				if (min(w,yb+cnt)<min(w,ya+cnt))          //runs
				{
					cout<<"Draw"<<endl;
				}else if (max(1,yb-cnt)>max(1,ya-cnt))
				{
					cout<<"Draw"<<endl;
				}else{
					cout<<"Bob"<<endl;
				}
			}
		}
	}

	return 0;
}