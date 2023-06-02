#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n,m;
		cin>>n>>m;
		string s;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		for (int i = 0; i < m; i++)
        {
            s+='B';
        }
        for (int i = 0; i < n; i++)
        {
            int x = arr[i]-1;
            int y = m-arr[i];  
            if(x > y){
               swap(x, y);
            } 
            if(s[x] == 'B'){
               s[x] = 'A';
            }
            else{
               s[y] = 'A';
            }
        } 
    cout << s <<endl;
	}
	

	return 0;
}