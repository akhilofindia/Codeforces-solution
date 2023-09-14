#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	vector<int>a(n),b(n);
	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin>>b[i];
	}
	int i=0,j=0;
	set<int> st;
	while(i<n && j<n){
		if (st.count(a[i]))
		{
			i++;
			continue;
		}
		if (a[i]==b[j])
		{
			i++;
			j++;
		}else{
			st.insert(b[j]);
			j++;
		}
	}
	cout<<st.size()<<endl;

	return 0;
}