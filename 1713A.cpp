#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n; cin>>n;
		int maxX,maxY,minX,minY;
		maxX=maxY=minX=minY=0;
		for (int i = 0; i < n; i++)
		{
			int x,y; cin>>x>>y;
			maxX=max(x,maxX);
			maxY=max(y,maxY);
			minX=min(x,minX);
			minY=min(y,minY);
		}
		cout<<(maxY+maxX-minY-minX)*2<<endl;
	}
	int ans=0;
        for(int i=0;i<n; i++){
            ans=max(ans,(arr[i]-arr[0]));
            ans=max(ans,arr[n-1]-arr[i]);
            ans=max(ans,arr[i]-arr[(i+1)%n]);
        }
        cout<<ans<<endl;

	return 0;
}