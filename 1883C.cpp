#include <bits/stdc++.h>
using namespace std;

int minOperations(vector<int>& arr, int k) {
    vector<int> primeFactors;
    int tempK = k;
    
    // Calculate prime factors of k
    for (int i = 2; i <= sqrt(tempK); ++i) {
        while (tempK % i == 0) {
            primeFactors.push_back(i);
            tempK /= i;
        }
    }
    
    if (tempK > 1) {
        primeFactors.push_back(tempK);
    }
    
    int operations = 0;
    
    // Count operations needed for each prime factor
    for (int prime : primeFactors) {
        int count = 0;
        for (int num : arr) {
            while (num % prime != 0) {
                num++;
                count++;
            }
        }
        if (count > operations) {
            operations = count;
        }
    }
    
    return operations;
}

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,k;cin>>n>>k;
		vector <int>arr(n);
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		int res=minOperations(arr,k);
		cout<<res<<endl;
		
	}

	return 0;
}