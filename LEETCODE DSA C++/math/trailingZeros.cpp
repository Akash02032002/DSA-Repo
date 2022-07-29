    //https://leetcode.com/problems/factorial-trailing-zeroes/
    int trailingZeroes(int n) {
        int sum =0 ;
        for(int i=5 ; i<=n ;i=i*5){
            sum=n/i + sum ;
            
        }
        return sum ;
    }