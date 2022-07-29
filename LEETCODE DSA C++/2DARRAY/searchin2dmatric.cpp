//https://leetcode.com/problems/search-a-2d-matrix-ii/
bool searchMatrix(vector<vector<int>>& m, int target) {
        
                int r=0 ,c=m[0].size()-1;
        while(r<m.size() && c>=0){
            if(m[r][c]==target)
                return true;
            if(m[r][c]>target)
                c--;
            else
                r++;
        }
      return false;
        
    }