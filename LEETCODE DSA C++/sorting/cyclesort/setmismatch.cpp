https://leetcode.com/problems/set-mismatch/
//NAIVE APPROACH THAT WILL TAKE O(n) TIME AND O(N) IN WORST CASE
class Solution {
public:
	vector<int> findErrorNums(vector<int>& nums) {
		int n = nums.size();
		vector<int>v;
		int freq[10010] = {0};
		for (auto i : nums) {
			freq[i]++;
		}
		for (int i = 1 ; i < n + 1 ; i++) {
			if (freq[i] > 1)
				v.push_back(i);

		}
		for (int i = 1 ; i < n + 1; i++) {
			if (freq[i] == 0)
				v.push_back(i);
		}
		return v;

	}
};


