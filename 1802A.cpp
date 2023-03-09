#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
    int tc; 
    cin >> tc; 
    while (tc--) 
    { 
        int n; 
        cin >>n; 
        vector<int> vec(n); 
        int posi=0; 
        int count = 0; 
        for (int i=0; i<n;i++) 
        { 
            cin >>vec[i]; 
            if (vec[i] > 0){
                posi++; 
            }
        } 
        int negi = n-posi; 
        int a = posi; 
        int b = negi; 
    }
        
 
    return 0; 
}