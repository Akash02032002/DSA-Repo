class NumStrMinComparator {
public:
    bool operator() (string &a, string &b) { // Please note, I swap position of `a` and `b` here!
        if (a.size() != b.size()) return a.size() > b.size();
        return  a > b;
    }
};
class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        priority_queue<string , vector<string> , NumStrMinComparator > pq ; 
        for(auto i : nums) {
            pq.push(i);
            if(pq.size()>k) pq.pop();
        }
        return pq.top();
    }
};