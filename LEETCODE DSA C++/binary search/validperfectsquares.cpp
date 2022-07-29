  //https://leetcode.com/problems/valid-perfect-square/
  bool isPerfectSquare(int x) {
         int low=1 ; long long int high=x ; 
        if(x<0) return false ;
        while(low<=high) {
            long long int  mid=(low + (high-low)/2);
            if(mid*mid== x) return true; 
            else if (mid*mid< x )    low=mid+1 ; 
            else high = mid-1;
        }
        return false;  
    }