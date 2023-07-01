#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;
		cin>>n;
		int a[n];
		for (int i = 1; i <= n; i++)
		{
			cin>>a[i];
		}
		int l = 1;
		int minn = 1;
		int r = n;
		int maxx = n;
		while (l < r) {
			if (a[l] == minn) {
				l++;
				minn++;
			}
			else if (a[l] == maxx) {
				l++;
				maxx--;
			}
			else if (a[r] == minn) {
				r--;
				minn++;
			}
			else if (a[r] == maxx) {
				r--;
				maxx--;
			}
			else break;
		}
		if (l < r){
			cout << l << ' ' << r << endl;
		}else{
		    cout << -1 << endl;
		}

	}

	return 0;
}