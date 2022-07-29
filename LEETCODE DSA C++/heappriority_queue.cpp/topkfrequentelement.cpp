 typedef pair<int,int> pi ;
 vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int > mpp ; vector<int> ans ;
        for(auto i : nums) mpp[i]++ ;
       priority_queue<pi,vector<pi>,greater<pi> >pq ;
       for(auto i :mpp ){ pq.push({i.second , i.first}) ;
                         if(pq.size()>k) pq.pop() ;
                         }
        while(pq.size()>0) {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        reverse(ans.begin() , ans.end()) ;
        return ans ;
        
    }