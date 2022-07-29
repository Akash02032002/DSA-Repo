//https://leetcode.com/problems/plus-one/
vector<int> plusOne(vector<int>& arr) {
        vector<int>ans; int n=arr.size() ; int carry=1 ;
        for(int i =n-1 ; i>=0 ; --i){
            int temp=carry + arr[i] ; 
            carry = temp>9 ? 1 : 0 ; 
            ans.push_back(temp%10) ;
            
        }
        if(carry==1) ans.push_back(1);
        reverse(ans.begin(),ans.end()) ; return ans ;
    }