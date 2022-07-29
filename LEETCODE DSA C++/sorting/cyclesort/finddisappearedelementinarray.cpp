https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

//THIS CYCLE ALGO IS WORK FOR ONLY 1 TO N-1 ELEMENT IN ARRAY
#include<bits/stdc++.h>
using namespace std ;
void findDisappearedNumbers(vector<int>& v) {
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
			ans.push_back(index + 1);
	}
	for (auto p : ans) cout << p << " " ;
}
int main() {
	int x ; vector<int>v;
	while (cin >> x) {
		v.push_back(x);
	}
	findDisappearedNumbers(v);


}