#include <bits/stdc++.h>
using namespace std;

int mex(vector<int> &arr)
{
	int N=arr.size();
  sort(arr.begin(), arr.end());
 
  int mex = 0;
  for (int idx = 0; idx < N; idx++)
  {
    if (arr[idx] == mex)
    {
      mex += 1;
    }
  }   
  return mex;
}

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,k;
		cin>>n>>k;
		vector<int>v(n+1);
		for (int i = 0; i < n; i++)
		{
			cin>>v[i];
		}
		for (int i = 0; i < n; i++)
		{
			int j=mex(v);
			v[i]=j;
		}
		for (int i = 1; i < v.size(); i++)
		{
			cout<<v[i]<<" ";
		}
		// while(k--){
		// 	for (int i = 0; i < n; i++)
		// 	{
		// 		v[i]=mex(v,n);
		// 	}
		// }		
		// for (int i = 0; i < v.size(); i++)
		// {
		// 	cout<<v[i]<<" ";
		// }
		// cout<<endl;

	}

	return 0;
}