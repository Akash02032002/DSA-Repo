pair<int, int>countocuurences(int n , int arr[] , int x ) {
	int left = leftIndex(n, arr, x)  , right = lastIndex(n, arr, x) ;
	int count = right - left + 1 ;
	pair<int, int>p(-1, -1) ;
	if (left >= 0) {
		p.first = left  ;
		p.second = right ;
	}
	return p ;
}