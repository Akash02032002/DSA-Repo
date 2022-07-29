 //https://leetcode.com/problems/valid-palindrome-ii/
 bool validPalindrome(string s) {
        int low=0 ,high=s.length()-1 ;
        while(low<high) {
            if(s[low]!=s[high]) return ispal(s,low+1 , high) || ispal(s,low,high-1) ;
            else low++ ; high--;
        }
        return true;
    }
    
private:
    bool ispal(string s , int l , int r ) {
        int i= l , j =r ;
        while(i<j){
            if(s[i++]!=s[j--]) return false ;
        }
        return true; 
    }