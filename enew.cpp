#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
  ll h,w,k; cin>>h>>w>>k;
  char arr[h][w];
  for (ll i = 0; i < h; i++)
  {
    for (ll j = 0; j < w; j++)
    {
      cin>>arr[i][j];
    }
  }
  ll answer = INT_MAX;
  for (ll j = 0; j < h; j++)
  {
    ll start = 0, end = 0;
    ll x = 0, dot = 0, o = 0;
    if (k>w)
    {
      break;
    }
    for (end = 0; end < k; end++)
    {
      if (arr[j][end]=='.') dot++;
      else if (arr[j][end]=='x') x++;
      else o++;
    }
    if (x==0)
    {
      answer=min(answer,dot);
    }
    // cout<<start<<" "<<end<<endl;
    while(end<w){
      // cout<<start<<" "<<x<<" "<<dot<<" "<<o<<" "<<end<<endl;
      if (arr[j][start]=='x') x--;
      else if(arr[j][start]=='o') o--;
      else dot--;
      start++;

      if (arr[j][end]=='x') x++;
      else if(arr[j][end]=='o') o++;
      else dot++;
      end++;
      if (x==0)
      {
        answer=min(answer,dot);
      }
    }
  }
  // cout<<answer<<endl;

  for (ll j = 0; j < w; j++)
  {
    ll start = 0, end = 0;
    ll x = 0, dot = 0, o = 0;
    if (k>h)
    {
      break;
    }
    for (end = 0; end < k; end++)
    {
      if (arr[end][j]=='.') dot++;
      else if (arr[end][j]=='x') x++;
      else o++;
    }
    if (x==0)
    {
      answer=min(answer,dot);
    }
    // cout<<start<<" "<<end<<endl;
    while(end<h){
      // cout<<start<<" "<<x<<" "<<dot<<" "<<o<<" "<<end<<endl;

      if (arr[start][j]=='x') x--;
      else if(arr[start][j]=='o') o--;
      else dot--;
      start++;

      if (arr[end][j]=='x') x++;
      else if(arr[end][j]=='o') o++;
      else dot++;
      end++;
      if (x==0)
      {
        answer=min(answer,dot);
      }
    }
  }


  if (answer==INT_MAX)
  {
    answer=-1;
  }
  cout<<answer<<endl;


  return 0;
}