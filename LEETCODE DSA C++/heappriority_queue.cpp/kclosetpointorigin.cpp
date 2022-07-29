class Solution {
    typedef pair<int, pair<int ,int >>ppi;
public:
        vector<vector<int>> kClosest(vector<vector<int>>&arr, int k) {
        priority_queue<ppi>pq ; int n = arr.size() ; vector<vector<int>>ans; 
        
        for(int i=0 ; i < n ;i++){
            pq.push({arr[i][0]*arr[i][0] + arr[i][1]*arr[i][1] , {arr[i][0] ,arr[i][1]}});
        if(pq.size()> k ) pq.pop();}
        while(pq.size() > 0  ) {ans.push_back({pq.top().second.first , pq.top().second.second}); pq.pop();}
        return ans;
    }
};