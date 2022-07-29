//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
int maxProfit(vector<int>&arr) {
	int profit = 0 , min1 = 1e9;
	for (int i = 0 ; i < arr.size() ; i++) {
		min1 = min(min1, arr[i]);
		profit = max(profit, (arr[i] - min1)) ;
	}
	return profit;
}

//BRUTE FORCES METHOD 
int maxi = INT_MIN ;
for(int i=0 ; i< n; i++){
for(int j=i+1 ; j<n ;j++{
if(arr[i]<arr[j]){
maxi=max(maxi,arr[j]-arr[i]);
}
}
return maxi ;
}
