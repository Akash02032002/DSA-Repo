  public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
	// Your code here
	priority_queue<long long , vector<long long >, greater<long long >>pq ;
	long long  tempsum = 0 , sum = 0 ;
	for (long long  i = 0 ; i < n ; i++) pq.push(arr[i]) ;
	while (pq.size()>=2) {
		long long  first = pq.top() ; pq.pop() ; long long  second= pq.top() ; pq.pop() ;
		sum +=first + second ;
		pq.push(first+second);
	}
	return sum ;
}