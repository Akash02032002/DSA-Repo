 //https://leetcode.com/problems/add-strings/
 string addStrings(string num1, string num2) {
        int i=num1.length()-1 , j=num2.length()-1 ; long sum =0 ;string ans=""; int carry=0 ;
        while(i>=0 || j>=0 || carry){
        if(i>=0) {sum+=num1[i]-'0' ; i--  ;}
       if(j>=0) {sum+=num2[j]-'0' ; j--  ;}
       carry = sum/10 ; 
        ans+=to_string(sum%10) ; 
        sum=carry ;     
        }
        reverse(ans.begin(),ans.end());
        return ans ;
    }