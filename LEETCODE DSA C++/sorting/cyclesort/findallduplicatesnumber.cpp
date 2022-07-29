https://leetcode.com/problems/find-all-duplicates-in-an-array/
//THIS CYCLE SORT ALGO

class Solution {
public:
	vector<int> findDuplicates(vector<int>& v) {
		int i = 0; int n = v.size();
		vector<int>ans;
		while (i < n) {
			int correct = v[i] - 1;
			if (v[i] != v[correct])
				swap(v[i], v[correct]);
			else i++;


		}
		for (int index = 0 ; index < n ; index++) {
			if (v[index] != index + 1)
				ans.push_back(v[index]);
		}
		return ans;
	}
};