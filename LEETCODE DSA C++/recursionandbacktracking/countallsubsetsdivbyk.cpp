int subsetsdivk(int ind , int sum , vector<int>ds , int arr[] , int n , int k) {
	if (ind == n) {
		if (ds.size() != 0 && sum % k == 0)
		{
			return 1 ;
		}
		return 0 ;
	}
	ds.push_back(arr[ind]) ;
	sum += arr[ind] ;
	int l = subsetsdivk(ind + 1 , sum , ds , arr , n , k  ) ;
	ds.pop_back() ;
	sum -= arr[ind] ;
	int r = subsetsdivk(ind + 1 , sum , ds , arr , n , k ) ;
	return l + r ;
}