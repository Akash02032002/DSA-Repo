https://leetcode.com/problems/find-smallest-letter-greater-than-target/
char nextGreatestLetter(vector<char>& v, char target) {
        int n = v.size();
	int low = 0 , high = n - 1 ;
		// if(target>=v[high]) 
		// return v[low] ;
	while (low <= high) {
		int mid = (low + (high - low) / 2);
		if (v[mid] > target)
			high = mid - 1;
		else low = mid + 1;
	}
	return v[low%n] ;
    }
