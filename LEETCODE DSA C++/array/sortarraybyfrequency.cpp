Input: nums = [1,1,2,2,2,3]
Output: [3,1,1,2,2,2]
Explanation: '3' has a frequency of 1, '1' has a frequency of 2, and '2' has a frequency of 3.
Input: nums = [2,3,1,3,2]
Output: [1,3,3,2,2]
Explanation: '2' and '3' both have a frequency of 2, so they are sorted in decreasing order.
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> m;  
        for(auto i : nums ){ m[i]++ ;}
        sort(nums.begin(),nums.end(),[&](int a , int b ) 
        {if(m[a]!=m[b]) return m[a]<m[b] else a>b ;}) ;
        return nums;
    }
};
