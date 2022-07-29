 //https://leetcode.com/problems/two-sum/
 vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size() ;
        vector<int>ans;
        unordered_map<int,int>m ;
        for(int i=0 ;i<n ;i++){
            if(m.find(target-nums[i])!=m.end()){
                ans.push_back(m[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            m[nums[i]]=i;
        }
        return ans;
    }