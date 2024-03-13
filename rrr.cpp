#include <bits/stdc++.h>
using namespace std;

int main(){

    //RA2211003010018
    //AKHIL RAJ
    //explanation in comments

    int n; cin>>n;    //number of inputs
    double w=0;       
    double bias=1;
    double yin=0;
    while(n--){
        double x;cin>>x;
        yin+=w*x+bias;   //calculating yin
        bias+=yin;   //updating bias
        w+=x;    //new weight=old weight(w)+x*y(y=1) so i only added x
        // cout<<yin<<endl;
    }
    int y;
    if (yin>=1)      //activation function
    {
        y=1;
    }else{
        y=0;
    }
    cout<<y<<endl;

    return 0;
}


