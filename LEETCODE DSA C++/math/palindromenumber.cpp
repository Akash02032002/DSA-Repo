//https://leetcode.com/problems/palindrome-number/
bool isPalindrome(int x) {
        int r , temp=x ;long long int sum=0;
        if(x<0 || (x%10 ==0 && x!=0)) return false;
            while(x>0){
                r=x%10;
                sum=sum*10 + r;
                x=x/10;
            }
         return temp==sum;
    }