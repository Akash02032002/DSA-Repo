 void help(int ind , int sum , vector<int>&arr  , vector<int>&ds ,  vector<vector<int>>&ans , int n) {
  sort(arr.begin() ,arr.end()) ;
	if (sum == 0) {
		ans.push_back(ds) ;
		return  ;
	}

	for (int i = ind; i < n ; i++) {
		if (i > ind && arr[i] == arr[i - 1]) continue ;  //not pich elements which already pick 
		if (arr[i] > sum) break;
		ds.push_back(arr[i]);
		help(i + 1 , sum - arr[i] , arr, ds, ans , n);
		ds.pop_back() ;
	}
}

//BRUTE FORCES METHOD 

 vector<vector<int>> combinationSum2(vector<int>& arr, int sum) {
        
        vector<int>ds; vector<vector<int>>ans; int n=arr.size() ; int ind=0 ;
        if(n==0) return ans; vector<vector<int>>ans2 ;
        count(ind, sum, arr, n, ds,ans) ; 
        set<vector<int>>s;
        for(auto i : ans) {
            sort(i.begin() ,i.end());
            s.insert(i) ;
        }
        for(auto i : s) ans2.push_back(i) ;
        
        return ans2;
    }
    
    
    void count(int ind , int sum , vector<int>arr , int n , vector<int>ds ,vector<vector<int>>&ans) {
// if(sum==0) return 1 ;
	if (ind == n)
	{
		if (sum == 0) {
			ans.push_back(ds) ;
		}
		return;
	}
	if (arr[ind] <= sum) {
		ds.push_back(arr[ind]);
		sum -= arr[ind] ;
		count(ind+1, sum, arr, n, ds,ans) ;
		ds.pop_back() ;
		sum += arr[ind] ;
	}
	count(ind + 1 , sum , arr, n , ds,ans) ;
}