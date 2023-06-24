// ॐ श्री सरस्वत्यै नमः

#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" <<endl;
#define no cout << "NO" <<endl;
#define ll long long

template<typename T>
void displayVec(vector<T> a){
	for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
	cout<<endl;
}

template<typename T>
void displayArr(T a[], int n){
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<endl;
}

int main(){
	// ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	ll n; cin>>n;
	ll arr[n];
	map<ll,ll> mp;
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
		mp[arr[i]]++;
	}
	auto it = mp.begin();
	auto it2 = mp.rbegin();
	ll diff = (it2->first)-(it->first);
	ll ways = (it2->second)*(it->second);
	if (mp.size()==1)
	{
		ways = ((it2->second)*(it2->second-1))/2;
	}
	cout<<diff<<" "<<ways<<endl;

	return 0;
}