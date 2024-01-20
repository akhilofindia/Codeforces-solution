#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}
int main(){

  int n,k; cin>>n>>k;
  string s; cin>>s;
  int answer = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    int start = 0, end = 0;
    int x = 0, dot = 0, o = 0;
    if (k>n)
    {
      break;
    }
    for (end = 0; end < k; end++)
    {
      if (s[end]=='.') dot++;
      else if (s[end]=='x') x++;
      else o++;
    }
    if (x==0)
    {
      answer=min(answer,dot);
    }
    while(n>end){
      if (s[start]=='x') x--;
      else if(s[start]=='o') o--;
      else dot--;
      start++;
      if (s[end]=='x') x++;
      else if(s[end]=='o') o++;
      else dot++;
      end++;
      if (x==0)
      {
        answer=min(answer,dot);
      }
    }
  }
  cout<<answer<<endl;
  return 0;
}