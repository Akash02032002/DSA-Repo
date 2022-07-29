  //https://leetcode.com/problems/max-consecutive-ones/
 // [1,1,0,1,1,1] 3
  int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=0 ,cnt =0 ;
        if(nums.size()==0) return 0 ;
        for(int i=0 ;i< nums.size() ; i++){
            if(nums[i]==1){
                cnt++ ; 
            }
            else cnt=0 ; maxi=max(cnt,maxi);
        }
        return maxi;
    }
