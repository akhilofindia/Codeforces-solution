#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long n,k;cin>>n>>k;
		long long ans=(k-1)/(n-1);
		cout<<k+ans<<endl;
	}

	#include<bits/stdc++.h>
using namespace std;
int n, m, a, b;
int main()
{
	cin >> n >> m >> a >> b;
	int ans = 0;

	if (a > b / m)
	{
		ans += (n / m) * b;
		if ((n%m) * a > b)
		{
			ans += b;
		}
		else ans += a * (n % m);
	}
	else ans = n * a;
	cout << ans << endl;

}
	

	return 0;
}