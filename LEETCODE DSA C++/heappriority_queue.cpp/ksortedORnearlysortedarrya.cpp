#include <bits/stdc++.h>
using namespace std;
vector<int> sortedarray(int arr[] , int n  , int k ) {
    priority_queue<int , vector<int> ,  greater<int>>pq ; vector<int>ans ;
    for(int i=0 ; i < n ;i++){
        pq.push(arr[i] );
        if(pq.size()>k ) {
            ans.push_back(pq.top()) ; pq.pop();
        }
        
    }
    while(pq.size()>0){
        ans.push_back(pq.top()) ; pq. pop () ;
    }
    return ans; 
}



int main() {
	//code
	int t ;  cin >> t ;
	while(t--){
	    int n , k ;
	     cin>>n >> k; 
	     int arr[n] ;
	     for(int i=0 ; i< n; i++) cin>>arr[i]  ;
	     vector<int>result = sortedarray(arr, n  , k ) ;
	     for(auto i : result) cout<<i<<" ";
	     cout<<endl ;
	}
	return 0;
}