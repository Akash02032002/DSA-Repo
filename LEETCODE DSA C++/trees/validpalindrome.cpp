  //https://leetcode.com/problems/valid-palindrome/
  bool isPalindrome(string s) {
        if (s.empty()) return true; 
        int z = s.size();
        int i = 0;
        while (i < z) {
            // cout << "comparing : " << s[i] << " and " << s[z] << endl;
            if (!isalnum(s[z])) { z--; continue; }
            if (!isalnum(s[i])) { i++; continue; }   
            if (tolower(s[i++]) != tolower(s[z--])) return false;
        }
        return true;
    }
// check after deleting one character palindrome or not 
    class Solution {
public:
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
};