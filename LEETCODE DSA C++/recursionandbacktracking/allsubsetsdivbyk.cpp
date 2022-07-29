void subsetsdivk(int ind , int sum , vector<int>ds , int arr[] , int n ,int k) {
	if (ind == n) {
		if (ds.size() != 0 && sum % k == 0)
		{	for (auto i : ds ) cout << i << " ";
			cout << endl;
		}
		return ;
	}
	ds.push_back(arr[ind]) ;
	sum += arr[ind] ;
	subsetsdivk(ind + 1 , sum , ds , arr , n,k ) ;
	ds.pop_back() ;
	sum -= arr[ind] ;
	subsetsdivk(ind + 1 , sum , ds , arr , n,k ) ;
}