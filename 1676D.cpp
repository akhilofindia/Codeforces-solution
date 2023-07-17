#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,m;
	    cin>>n>>m;
	    int ans=INT_MIN;
	    vector<vector<int>> grid(n,vector<int>(m,0));
	    for(int i = 0; i < n; i++){
	        for(int j = 0;j < m; j++){
	            cin>>grid[i][j];
	        }
	    }
	    for(int i = 0; i < n; i++){
	        for(int j = 0; j < m; j++){
	            int sum=0;
	            sum+=grid[i][j];
	            int x=i-1,y=j-1;                 
	            while(x>=0 && y>=0){
	                sum+=grid[x][y];
	                x--;
	                y--;
	            }
	            x=i-1;
	            y=j+1;
	            while(x>=0 && y<m){
	                sum+=grid[x][y];
	                x--;
	                y++;
	            }
	            x=i+1;
	            y=j-1;
	            while(x<n && y>=0){
	                sum+=grid[x][y];
	                x++;
	                y--;
	            }
	            x=i+1;
	            y=j+1;
	            while(x<n && y<m){
	                sum+=grid[x][y];
	                x++;
	                y++;
	            }
	            ans=max(ans,sum);
	        }
	    }
	    cout<<ans<<endl;

	}

	return 0;
}