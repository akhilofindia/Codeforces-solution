#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
    int i = 300, n = 150;
    int cnt=0;
  while (i >= n){
    i = i-2;
    n = n+1; 
    cnt++;
  }
  cout<<cnt<<endl;


    return 0;
}