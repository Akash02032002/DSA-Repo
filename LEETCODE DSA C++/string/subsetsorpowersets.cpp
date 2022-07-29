  
  //Input: nums = [1,2,3]
//Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
   vector<vector<int>> subsets(vector<int>& s) {
        vector<vector<int>>ans; int n=s.size() ;vector<int>sub ;
        for(int num =0 ; num<=(1<<n)-1 ; num++){
            sub={};
            for(int i=0 ; i<n ; i++){
                if(num & (1<<i))
                    sub.push_back(s[i]);
            }
            ans.push_back(sub);
        }
        return ans; 
    }