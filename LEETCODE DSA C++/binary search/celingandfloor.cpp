// target =15
// vector =2 3 5 9 14 16 18
// o/p=14
#include<bits/stdc++.h>
using namespace std ;
int floor(vector<int>&v, int target) {
	int n = v.size();
	int low = 0 , high = n - 1 ;
	while (low <= high) {
		int mid = (low + (high - low) / 2);
		if (v[mid] == target)
			return v[mid];
		else if (v[mid] > target)
			high = mid - 1;
		else low = mid + 1;
	}
	return v[high] ; //for ceiling v[low ] will return ;
}