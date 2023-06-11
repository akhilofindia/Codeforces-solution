#include <bits/stdc++.h>
using namespace std;

int main(){
	// int tc; cin>>tc;
	// while(tc--){
	// 	int n,m; cin>>n>>m;
	// 	int a=n*m;
	// 	int arr[a];
	// 	int mx,my;
	// 	for (int i = 0; i < a; i++)
	// 	{
	// 		cin>>arr[i];
	// 	}
	// 	sort(arr,arr+a);
	// 	mx=arr[a-1];
	// 	my=arr[0];
	// 	int myy=arr[1];
	// 	int mxx=arr[a-2];
	// 	int b=mx-my;
	// 	cout<<(a-min(n,m))*(mx-my)+(min(n,m)-1)*max(mx-myy,mxx-my)<<endl;
	// }
	int n; cin>>n;
	int b=2*n;
    int c=3*n;
    string s=to_string(n)+ to_string(b) + to_string(c);
    set<char>s1;
    for (int i = 0; i < s.length(); i++)
    {
    	s1.insert(s[i]);
    }
    if (s1.count('0')==0 && s.size()==9 && s1.size()==9)
    {
    	cout<<"YES"<<endl;
    }else{
    	cout<<"NO"<<endl;
    }



	return 0;
}