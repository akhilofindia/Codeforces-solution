#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n,m;
		cin>>n>>m;
		int arr[n][m];
		int a=0,b=0;
		int h,w;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin>>arr[i][j];
				if (arr[i][j]>arr[a][b])
				{
					a=i;
					b=j;
				}
			}
		}
		h=max(a+1,n-a);
		w=max(b+1,m-b);
		cout<<h*w<<endl;
		for (int i = 0; i < n; i++)
    {
        int x = arr[i]-1, y = m - arr[i];
 
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
    
    cout << s << '\n';
	}

	return 0;
}