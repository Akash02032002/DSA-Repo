void subsequences(int ind, vector<char>ds, string arr , int n ) {
	//base case 
    if (ind == n) {
		for (auto i : ds) cout << i << " " ;
		cout << endl;
		return ;
	}
	ds.push_back(arr[ind]) ;
	subsequences(ind + 1 , ds , arr ,  n ) ; //picking element
	ds.pop_back();
	subsequences(ind + 1 , ds , arr , n ) ; //nonpicking element
}