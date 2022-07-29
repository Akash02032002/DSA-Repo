#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> repeating(int v[] ,int n ) {
        int i = 0; vector<int> arr2 ;
	while (i < n) {
		int correct = v[i] - 1;
		if (v[i] != v[correct])
			swap(v[i], v[correct]);
		else i++;


	}
	for (int index = 0 ; index < n ; index++) {
		if (v[index] != index + 1){
		   arr2.push_back(v[index]) ; arr2.push_back(index+1 );
	}
        
    }
    return arr2 ;
    }
};
int main() {
    int t ; cin>> t ;
   
   while(t--) { int n  ;cin>> n ; int arr[n] ; for(int i=0 ; i< n ;i++ )  { cin>>arr[i] ;}
   Solution o ; auto ans = o.repeating(arr,n) ;
   cout<<ans[0] <<" " << ans[1] ; }}