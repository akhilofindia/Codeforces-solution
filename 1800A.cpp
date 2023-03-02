#include <bits/stdc++.h>
using namespace std;

string lowercase(string a){
   for (int i = 0; i < a.length(); i++)
   {
      if (a[i]>='A' && a[i]<='Z')
      {
         a[i]=a[i]-'A'+'a';
      }
   }
return a;
}
int main(){
	int tc; cin>>tc;
	while(tc--){
		int n; cin>>n;
		string c;
		string a; cin>>a;
		c=lowercase(a);
		set<char> ans;
		string b="";
		for (int i = 0; i < n; i++)
		{
			if (!ans.count(c[i]))
			{
				ans.clear();
				b+=c[i];
			}
			ans.insert(c[i]);
		}
		if (b=="meow")
		{
			cout<<"YES"<<endl;
		}else
		    cout<<"NO"<<endl;
	}
		return 0;
}