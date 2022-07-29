//THIS CYCLE ALGO IS WORK FOR ONLY 1 TO N-1 ELEMENT IN ARRAY
#include<bits/stdc++.h>
using namespace std ;
void missing(vector<int>&v) {
	int n = v.size();
	int i = 0;
	//elements starts from 0 positon ;
	while (i < v.size()) {
		int correctpos = v[i] - 1;
		if (v[i] != v[correctpos])
			swap(v[i], v[correctpos]);
		else i++;
	}
	for (auto i : v) cout << i << " ";

}
int main() {
	int x ; vector<int>v;
	while (cin >> x) {
		v.push_back(x);
	}
	missing(v);

}