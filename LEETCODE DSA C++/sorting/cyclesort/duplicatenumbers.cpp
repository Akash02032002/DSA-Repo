https://leetcode.com/problems/find-the-duplicate-number/

//THIS CYCLE SORT ALGO IS WORK FOR ONLY 1 TO N-1 ELEMENT IN ARRAY
int duplicateNumbers(vector<int>& v) {
	int i = 0; int n = v.size();
	while (i < n) {
		int correct = v[i] - 1;
		if (v[i] != v[correct])
			swap(v[i], v[correct]);
		else i++;


	}
	for (int index = 0 ; index < n ; index++) {
		if (v[index] != index + 1)
			return (v[index]);
	}

}
// APPLICAPLE FOR ANY ARRAY
class Solution {
public:
	int findDuplicate(vector<int>& nums) {
		unordered_map<int , int > m; int p;
		for (auto i : nums) {
			m[i]++;
		}
		for (auto i : nums) {
			if (m[i] > 1)
				p = i;

		}
		return p;
	}
};

//LINKED CYCLE APPROACH

